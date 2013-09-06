#define SNAZZLE 257
#define TYPE 258
#define END 259
#define ENDL 260
#define INT 261
#define FLOAT 262
#define STRING 263
#ifdef YYSTYPE
#undef  YYSTYPE_IS_DECLARED
#define YYSTYPE_IS_DECLARED 1
#endif
#ifndef YYSTYPE_IS_DECLARED
#define YYSTYPE_IS_DECLARED 1
typedef union {
								int ival;
								float fval;
								char *sval;
} YYSTYPE;
#endif /* !YYSTYPE_IS_DECLARED */
extern YYSTYPE yylval;
