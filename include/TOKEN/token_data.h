
// This file was auto-generated by 'include/TOKEN/generate_c.py'

#ifndef _ISAAC_TOKEN_DATA_H
#define _ISAAC_TOKEN_DATA_H

#define TOKEN_ITERATION_VERSION 0x6257602B

#define TOKEN_NONE              0x00000000
#define TOKEN_WORD              0x00000001
#define TOKEN_STRING            0x00000002
#define TOKEN_CSTRING           0x00000003
#define TOKEN_ADD               0x00000004
#define TOKEN_SUBTRACT          0x00000005
#define TOKEN_MULTIPLY          0x00000006
#define TOKEN_DIVIDE            0x00000007
#define TOKEN_ASSIGN            0x00000008
#define TOKEN_EQUALS            0x00000009
#define TOKEN_NOTEQUALS         0x0000000A
#define TOKEN_LESSTHAN          0x0000000B
#define TOKEN_GREATERTHAN       0x0000000C
#define TOKEN_LESSTHANEQ        0x0000000D
#define TOKEN_GREATERTHANEQ     0x0000000E
#define TOKEN_NOT               0x0000000F
#define TOKEN_OPEN              0x00000010
#define TOKEN_CLOSE             0x00000011
#define TOKEN_BEGIN             0x00000012
#define TOKEN_END               0x00000013
#define TOKEN_NEWLINE           0x00000014
#define TOKEN_BYTE              0x00000015
#define TOKEN_UBYTE             0x00000016
#define TOKEN_SHORT             0x00000017
#define TOKEN_USHORT            0x00000018
#define TOKEN_INT               0x00000019
#define TOKEN_UINT              0x0000001A
#define TOKEN_LONG              0x0000001B
#define TOKEN_ULONG             0x0000001C
#define TOKEN_USIZE             0x0000001D
#define TOKEN_FLOAT             0x0000001E
#define TOKEN_DOUBLE            0x0000001F
#define TOKEN_MEMBER            0x00000020
#define TOKEN_ADDRESS           0x00000021
#define TOKEN_NEXT              0x00000022
#define TOKEN_BRACKET_OPEN      0x00000023
#define TOKEN_BRACKET_CLOSE     0x00000024
#define TOKEN_MODULUS           0x00000025
#define TOKEN_GENERIC_INT       0x00000026
#define TOKEN_GENERIC_FLOAT     0x00000027
#define TOKEN_ADD_ASSIGN        0x00000028
#define TOKEN_SUBTRACT_ASSIGN   0x00000029
#define TOKEN_MULTIPLY_ASSIGN   0x0000002A
#define TOKEN_DIVIDE_ASSIGN     0x0000002B
#define TOKEN_MODULUS_ASSIGN    0x0000002C
#define TOKEN_BIT_AND_ASSIGN    0x0000002D
#define TOKEN_BIT_OR_ASSIGN     0x0000002E
#define TOKEN_BIT_XOR_ASSIGN    0x0000002F
#define TOKEN_BIT_LS_ASSIGN     0x00000030
#define TOKEN_BIT_RS_ASSIGN     0x00000031
#define TOKEN_BIT_LGC_LS_ASSIGN 0x00000032
#define TOKEN_BIT_LGC_RS_ASSIGN 0x00000033
#define TOKEN_ELLIPSIS          0x00000034
#define TOKEN_UBERAND           0x00000035
#define TOKEN_UBEROR            0x00000036
#define TOKEN_TERMINATE_JOIN    0x00000037
#define TOKEN_COLON             0x00000038
#define TOKEN_BIT_OR            0x00000039
#define TOKEN_BIT_XOR           0x0000003A
#define TOKEN_BIT_LSHIFT        0x0000003B
#define TOKEN_BIT_RSHIFT        0x0000003C
#define TOKEN_BIT_COMPLEMENT    0x0000003D
#define TOKEN_BIT_LGC_LSHIFT    0x0000003E
#define TOKEN_BIT_LGC_RSHIFT    0x0000003F
#define TOKEN_ASSOCIATE         0x00000040
#define TOKEN_META              0x00000041
#define TOKEN_POLYMORPH         0x00000042
#define TOKEN_MAYBE             0x00000043
#define TOKEN_INCREMENT         0x00000044
#define TOKEN_DECREMENT         0x00000045
#define TOKEN_TOGGLE            0x00000046
#define TOKEN_STRONG_ARROW      0x00000047
#define TOKEN_RANGE             0x00000048
#define TOKEN_GIVES             0x00000049
#define TOKEN_POLYCOUNT         0x0000004A
#define TOKEN_POD               0x0000004B
#define TOKEN_ALIAS             0x0000004C
#define TOKEN_ALIGNOF           0x0000004D
#define TOKEN_AND               0x0000004E
#define TOKEN_AS                0x0000004F
#define TOKEN_AT                0x00000050
#define TOKEN_BREAK             0x00000051
#define TOKEN_CASE              0x00000052
#define TOKEN_CAST              0x00000053
#define TOKEN_CONST             0x00000054
#define TOKEN_CONSTRUCTOR       0x00000055
#define TOKEN_CONTINUE          0x00000056
#define TOKEN_DEF               0x00000057
#define TOKEN_DEFAULT           0x00000058
#define TOKEN_DEFER             0x00000059
#define TOKEN_DEFINE            0x0000005A
#define TOKEN_DELETE            0x0000005B
#define TOKEN_EACH              0x0000005C
#define TOKEN_ELSE              0x0000005D
#define TOKEN_EMBED             0x0000005E
#define TOKEN_ENUM              0x0000005F
#define TOKEN_EXHAUSTIVE        0x00000060
#define TOKEN_EXTERNAL          0x00000061
#define TOKEN_FALLTHROUGH       0x00000062
#define TOKEN_FALSE             0x00000063
#define TOKEN_FOR               0x00000064
#define TOKEN_FOREIGN           0x00000065
#define TOKEN_FUNC              0x00000066
#define TOKEN_FUNCPTR           0x00000067
#define TOKEN_GLOBAL            0x00000068
#define TOKEN_IF                0x00000069
#define TOKEN_IMPLICIT          0x0000006A
#define TOKEN_IMPORT            0x0000006B
#define TOKEN_IN                0x0000006C
#define TOKEN_INOUT             0x0000006D
#define TOKEN_LLVM_ASM          0x0000006E
#define TOKEN_NAMESPACE         0x0000006F
#define TOKEN_NEW               0x00000070
#define TOKEN_NULL              0x00000071
#define TOKEN_OR                0x00000072
#define TOKEN_OUT               0x00000073
#define TOKEN_PACKED            0x00000074
#define TOKEN_PRAGMA            0x00000075
#define TOKEN_PRIVATE           0x00000076
#define TOKEN_PUBLIC            0x00000077
#define TOKEN_RECORD            0x00000078
#define TOKEN_REPEAT            0x00000079
#define TOKEN_RETURN            0x0000007A
#define TOKEN_SIZEOF            0x0000007B
#define TOKEN_STATIC            0x0000007C
#define TOKEN_STDCALL           0x0000007D
#define TOKEN_STRUCT            0x0000007E
#define TOKEN_SWITCH            0x0000007F
#define TOKEN_THREAD_LOCAL      0x00000080
#define TOKEN_TRUE              0x00000081
#define TOKEN_TYPEINFO          0x00000082
#define TOKEN_TYPENAMEOF        0x00000083
#define TOKEN_UNDEF             0x00000084
#define TOKEN_UNION             0x00000085
#define TOKEN_UNLESS            0x00000086
#define TOKEN_UNTIL             0x00000087
#define TOKEN_USING             0x00000088
#define TOKEN_VA_ARG            0x00000089
#define TOKEN_VA_COPY           0x0000008A
#define TOKEN_VA_END            0x0000008B
#define TOKEN_VA_START          0x0000008C
#define TOKEN_VERBATIM          0x0000008D
#define TOKEN_WHILE             0x0000008E
#define TOKEN_BIT_AND           0x00000021

#define MAX_LEX_TOKEN 0x0000008E
#define BEGINNING_OF_KEYWORD_TOKENS 0x0000004B

#define TOKEN_EXTRA_DATA_FORMAT_ID_ONLY    0x00000061
#define TOKEN_EXTRA_DATA_FORMAT_C_STRING   0x00000062
#define TOKEN_EXTRA_DATA_FORMAT_LEN_STRING 0x00000063
#define TOKEN_EXTRA_DATA_FORMAT_MEMORY     0x00000064

extern const char *global_token_name_table[];
extern const char global_token_extra_format_table[];

extern const char *global_token_keywords_list[];
extern unsigned long long global_token_keywords_list_length;

// DEPRECATED: Pre-lexed files will probably be removed in the future.
// Used in place of common sequences in packages.
// Not recognized by parser.
#define TOKEN_PKG_MIN         TOKEN_PKG_WBOOL
#define TOKEN_PKG_WBOOL       0x0000000D0
#define TOKEN_PKG_WBYTE       0x0000000D1
#define TOKEN_PKG_WDOUBLE     0x0000000D2
#define TOKEN_PKG_WFLOAT      0x0000000D3
#define TOKEN_PKG_WINT        0x0000000D4
#define TOKEN_PKG_WLONG       0x0000000D5
#define TOKEN_PKG_WSHORT      0x0000000D6
#define TOKEN_PKG_WUBYTE      0x0000000D7
#define TOKEN_PKG_WUINT       0x0000000D8
#define TOKEN_PKG_WULONG      0x0000000D9
#define TOKEN_PKG_WUSHORT     0x0000000DA
#define TOKEN_PKG_WUSIZE      0x0000000DB
#define TOKEN_PKG_MAX         TOKEN_PKG_WUSIZE

#endif // _ISAAC_TOKEN_DATA_H
