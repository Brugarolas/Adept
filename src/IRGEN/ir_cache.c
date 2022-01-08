
#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "AST/ast_type.h"
#include "IRGEN/ir_cache.h"
#include "UTIL/ground.h"
#include "UTIL/hash.h"

void ir_gen_sf_cache_init(ir_gen_sf_cache_t *cache){
    cache->capacity = IR_GEN_SF_CACHE_SIZE;
    cache->storage = malloc(sizeof(ir_gen_sf_cache_entry_t) * cache->capacity);
    memset(cache->storage, 0, sizeof(ir_gen_sf_cache_entry_t) * cache->capacity);
}

void ir_gen_sf_cache_free(ir_gen_sf_cache_t *cache){
    for(length_t i = 0; i != cache->capacity; i++){
        if(!ir_gen_sf_cache_entry_is_occupied(&cache->storage[i])) continue;

        bool is_first = true;
        ir_gen_sf_cache_entry_t *head = &cache->storage[i];

        while(head){
            ir_gen_sf_cache_entry_t *previous = head;
            head = head->next;

            // Assume occupied since first is occupied and rest were allocated
            ast_type_free(&previous->ast_type);
            if(!is_first) free(previous);
            
            is_first = false;
        }
    }
    free(cache->storage);
}

ir_gen_sf_cache_entry_t *ir_gen_sf_cache_locate_or_insert(ir_gen_sf_cache_t *cache, ast_type_t *type){
    hash_t hash = ast_type_hash(type);
    ir_gen_sf_cache_entry_t *entry = &cache->storage[hash % cache->capacity];

    if(ir_gen_sf_cache_entry_is_occupied(entry)){
        // Space already occupied, so put it in the linked list
        // for that space

        while(true){
            if(ast_types_identical(type, &entry->ast_type)) return entry;

            if(entry->next == NULL){
                // New entry here
                entry->next = malloc(sizeof(ir_gen_sf_cache_entry_t));
                entry = entry->next;

                memset(entry, 0, sizeof(ir_gen_sf_cache_entry_t));
                entry->ast_type = ast_type_clone(type);
                entry->has_pass = TROOLEAN_UNKNOWN;
                entry->has_defer = TROOLEAN_UNKNOWN;
                entry->has_assign = TROOLEAN_UNKNOWN;
                return entry;
            }
            entry = entry->next;
        }
    }

    // New entry here
    entry->ast_type = ast_type_clone(type);
    entry->has_pass = TROOLEAN_UNKNOWN;
    entry->has_defer = TROOLEAN_UNKNOWN;
    entry->has_assign = TROOLEAN_UNKNOWN;
    return entry;
}

void ir_gen_sf_cache_dump(FILE *file, ir_gen_sf_cache_t *sf_cache){
    for(length_t i = 0; i < sf_cache->capacity; i++){
        ir_gen_sf_cache_entry_t *entry = &sf_cache->storage[i];
        if(ir_gen_sf_cache_entry_is_occupied(entry)) fprintf(file, "+");

        while(entry->next){
            fprintf(file, "+");
            entry = entry->next;
        }

        fprintf(file, "\n");
    }
}
