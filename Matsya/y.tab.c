#ifndef lint
static const char yysccsid[] = "@(#)yaccpar	1.9 (Berkeley) 02/21/93";
#endif

#define YYBYACC 1
#define YYMAJOR 1
#define YYMINOR 9
#define YYPATCH 20110908

#define YYEMPTY        (-1)
#define yyclearin      (yychar = YYEMPTY)
#define yyerrok        (yyerrflag = 0)
#define YYRECOVERING() (yyerrflag != 0)

#define YYPREFIX "yy"

#define YYPURE 0


#ifndef YYSTYPE
typedef int YYSTYPE;
#endif

/* compatibility with bison */
#ifdef YYPARSE_PARAM
/* compatibility with FreeBSD */
# ifdef YYPARSE_PARAM_TYPE
#  define YYPARSE_DECL() yyparse(YYPARSE_PARAM_TYPE YYPARSE_PARAM)
# else
#  define YYPARSE_DECL() yyparse(void *YYPARSE_PARAM)
# endif
#else
# define YYPARSE_DECL() yyparse(void)
#endif

/* Parameters sent to lex. */
#ifdef YYLEX_PARAM
# define YYLEX_DECL() yylex(void *YYLEX_PARAM)
# define YYLEX yylex(YYLEX_PARAM)
#else
# define YYLEX_DECL() yylex(void)
# define YYLEX yylex()
#endif

/* Parameters sent to yyerror. */
#define YYERROR_DECL() yyerror(const char *s)
#define YYERROR_CALL(msg) yyerror(msg)

extern int YYPARSE_DECL();

#define EQ 257
#define NE 258
#define LT 259
#define LE 260
#define GT 261
#define GE 262
#define PLUS 263
#define MINUS 264
#define MULT 265
#define DIVIDE 266
#define RPAREN 267
#define LPAREN 268
#define ASSIGN 269
#define SEMICOLON 270
#define IF 271
#define THEN 272
#define ELSE 273
#define FI 274
#define WHILE 275
#define DO 276
#define OD 277
#define PRINT 278
#define INT 279
#define FLOAT 280
#define VARIABLE 281
#define TEXT 282
#define YYERRCODE 256
static const short yylhs[] = {                           -1,
    0,    2,    2,    2,    2,    2,    1,    1,    4,    4,
    4,    4,    4,    4,    4,    5,    5,    5,    6,    6,
    6,    7,    7,    7,    7,    7,    7,    7,    8,    3,
};
static const short yylen[] = {                            2,
    1,    3,    2,    7,    5,    5,    3,    1,    1,    3,
    3,    3,    3,    3,    3,    1,    3,    3,    1,    3,
    3,    2,    2,    3,    1,    1,    1,    1,    1,    1,
};
static const short yydefred[] = {                         0,
    0,    0,    0,   30,    0,    0,    8,    0,    0,    0,
    0,   25,   26,   29,   27,    0,    0,    0,   19,   28,
    0,    3,    0,    0,   22,   23,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    7,
    2,   24,    0,    0,    0,    0,    0,    0,    0,    0,
    0,   20,   21,    0,    0,    5,    6,    0,    4,
};
static const short yydgoto[] = {                          5,
    6,    7,   15,   16,   17,   18,   19,   20,
};
static const short yysindex[] = {                      -261,
 -245, -245, -245,    0,    0, -254,    0, -256, -245, -245,
 -245,    0,    0,    0,    0, -251, -157, -257,    0,    0,
 -252,    0, -261, -245,    0,    0, -227, -261, -245, -245,
 -245, -245, -245, -245, -245, -245, -245, -245, -261,    0,
    0,    0, -220, -225, -225, -225, -225, -225, -225, -257,
 -257,    0,    0, -265, -261,    0,    0, -241,    0,
};
static const short yyrindex[] = {                         0,
    0,    0,    0,    0,    0,   26,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,   51,    1,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,   59,   67,   75,   83,   91,   99,   22,
   43,    0,    0,    0,    0,    0,    0,    0,    0,
};
static const short yygindex[] = {                         0,
  -28,   19,    2,    4,   15,   20,   -6,    0,
};
#define YYTABLESIZE 376
static const short yytable[] = {                         43,
   16,    8,   25,   26,   23,   21,   22,   37,   38,    1,
   54,   57,   24,    2,   27,   23,    3,    9,   10,    4,
   28,   17,   11,   39,    8,    1,   58,   41,   23,    8,
   52,   53,   59,   12,   13,    4,   14,   35,   36,   42,
    8,   40,   18,   44,   45,   46,   47,   48,   49,   23,
    9,    0,   55,   56,   50,   51,    8,    0,   10,    0,
    0,    0,    0,    0,    0,    0,   11,    0,    0,    0,
    0,    0,    0,    0,   12,    0,    0,    0,    0,    0,
    0,    0,   13,    0,    0,    0,    0,    0,    0,    0,
   14,    0,    0,    0,    0,    0,    0,    0,   15,   29,
   30,   31,   32,   33,   34,   35,   36,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,   16,   16,   16,
   16,   16,   16,   16,   16,    0,    0,   16,    0,    0,
   16,    0,   16,   16,   16,    0,   16,   16,   17,   17,
   17,   17,   17,   17,   17,   17,    0,    0,   17,    0,
    0,   17,    0,   17,   17,   17,    0,   17,   17,   18,
   18,   18,   18,   18,   18,   18,   18,    0,    0,   18,
    0,    0,   18,    0,   18,   18,   18,    9,   18,   18,
    9,    0,    9,    9,    9,   10,    9,    9,   10,    0,
   10,   10,   10,   11,   10,   10,   11,    0,   11,   11,
   11,   12,   11,   11,   12,    0,   12,   12,   12,   13,
   12,   12,   13,    0,   13,   13,   13,   14,   13,   13,
   14,    0,   14,   14,   14,   15,   14,   14,   15,    0,
   15,   15,   15,    0,   15,   15,
};
static const short yycheck[] = {                         28,
    0,    0,    9,   10,  270,    2,    3,  265,  266,  271,
   39,  277,  269,  275,   11,  270,  278,  263,  264,  281,
  272,    0,  268,  276,   23,    0,   55,   24,  270,   28,
   37,   38,  274,  279,  280,  281,  282,  263,  264,  267,
   39,   23,    0,   29,   30,   31,   32,   33,   34,  270,
    0,   -1,  273,  274,   35,   36,   55,   -1,    0,   -1,
   -1,   -1,   -1,   -1,   -1,   -1,    0,   -1,   -1,   -1,
   -1,   -1,   -1,   -1,    0,   -1,   -1,   -1,   -1,   -1,
   -1,   -1,    0,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
    0,   -1,   -1,   -1,   -1,   -1,   -1,   -1,    0,  257,
  258,  259,  260,  261,  262,  263,  264,   -1,   -1,   -1,
   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
   -1,   -1,   -1,   -1,   -1,   -1,   -1,  257,  258,  259,
  260,  261,  262,  263,  264,   -1,   -1,  267,   -1,   -1,
  270,   -1,  272,  273,  274,   -1,  276,  277,  257,  258,
  259,  260,  261,  262,  263,  264,   -1,   -1,  267,   -1,
   -1,  270,   -1,  272,  273,  274,   -1,  276,  277,  257,
  258,  259,  260,  261,  262,  263,  264,   -1,   -1,  267,
   -1,   -1,  270,   -1,  272,  273,  274,  267,  276,  277,
  270,   -1,  272,  273,  274,  267,  276,  277,  270,   -1,
  272,  273,  274,  267,  276,  277,  270,   -1,  272,  273,
  274,  267,  276,  277,  270,   -1,  272,  273,  274,  267,
  276,  277,  270,   -1,  272,  273,  274,  267,  276,  277,
  270,   -1,  272,  273,  274,  267,  276,  277,  270,   -1,
  272,  273,  274,   -1,  276,  277,
};
#define YYFINAL 5
#ifndef YYDEBUG
#define YYDEBUG 0
#endif
#define YYMAXTOKEN 282
#if YYDEBUG
static const char *yyname[] = {

"end-of-file",0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,"EQ","NE","LT","LE","GT","GE",
"PLUS","MINUS","MULT","DIVIDE","RPAREN","LPAREN","ASSIGN","SEMICOLON","IF",
"THEN","ELSE","FI","WHILE","DO","OD","PRINT","INT","FLOAT","VARIABLE","TEXT",
};
static const char *yyrule[] = {
"$accept : ROOT",
"ROOT : stmtseq",
"statement : designator ASSIGN expression",
"statement : PRINT expression",
"statement : IF expression THEN stmtseq ELSE stmtseq FI",
"statement : IF expression THEN stmtseq FI",
"statement : WHILE expression DO stmtseq OD",
"stmtseq : stmtseq SEMICOLON statement",
"stmtseq : statement",
"expression : expr2",
"expression : expr2 EQ expr2",
"expression : expr2 NE expr2",
"expression : expr2 LT expr2",
"expression : expr2 LE expr2",
"expression : expr2 GT expr2",
"expression : expr2 GE expr2",
"expr2 : expr3",
"expr2 : expr2 PLUS expr3",
"expr2 : expr2 MINUS expr3",
"expr3 : expr4",
"expr3 : expr3 MULT expr4",
"expr3 : expr3 DIVIDE expr4",
"expr4 : PLUS expr4",
"expr4 : MINUS expr4",
"expr4 : LPAREN expression RPAREN",
"expr4 : INT",
"expr4 : FLOAT",
"expr4 : designator",
"expr4 : text",
"text : TEXT",
"designator : VARIABLE",

};
#endif

int      yydebug;
int      yynerrs;

int      yyerrflag;
int      yychar;
YYSTYPE  yyval;
YYSTYPE  yylval;

/* define the initial stack-sizes */
#ifdef YYSTACKSIZE
#undef YYMAXDEPTH
#define YYMAXDEPTH  YYSTACKSIZE
#else
#ifdef YYMAXDEPTH
#define YYSTACKSIZE YYMAXDEPTH
#else
#define YYSTACKSIZE 500
#define YYMAXDEPTH  500
#endif
#endif

#define YYINITSTACKSIZE 500

typedef struct {
    unsigned stacksize;
    short    *s_base;
    short    *s_mark;
    short    *s_last;
    YYSTYPE  *l_base;
    YYSTYPE  *l_mark;
} YYSTACKDATA;
/* variables for the parser stack */
static YYSTACKDATA yystack;

#if YYDEBUG
#include <stdio.h>		/* needed for printf */
#endif

#include <stdlib.h>	/* needed for malloc, etc */
#include <string.h>	/* needed for memset */

/* allocate initial stack or double stack size, up to YYMAXDEPTH */
static int yygrowstack(YYSTACKDATA *data)
{
    int i;
    unsigned newsize;
    short *newss;
    YYSTYPE *newvs;

    if ((newsize = data->stacksize) == 0)
        newsize = YYINITSTACKSIZE;
    else if (newsize >= YYMAXDEPTH)
        return -1;
    else if ((newsize *= 2) > YYMAXDEPTH)
        newsize = YYMAXDEPTH;

    i = data->s_mark - data->s_base;
    newss = (short *)realloc(data->s_base, newsize * sizeof(*newss));
    if (newss == 0)
        return -1;

    data->s_base = newss;
    data->s_mark = newss + i;

    newvs = (YYSTYPE *)realloc(data->l_base, newsize * sizeof(*newvs));
    if (newvs == 0)
        return -1;

    data->l_base = newvs;
    data->l_mark = newvs + i;

    data->stacksize = newsize;
    data->s_last = data->s_base + newsize - 1;
    return 0;
}

#if YYPURE || defined(YY_NO_LEAKS)
static void yyfreestack(YYSTACKDATA *data)
{
    free(data->s_base);
    free(data->l_base);
    memset(data, 0, sizeof(*data));
}
#else
#define yyfreestack(data) /* nothing */
#endif

#define YYABORT  goto yyabort
#define YYREJECT goto yyabort
#define YYACCEPT goto yyaccept
#define YYERROR  goto yyerrlab

int
YYPARSE_DECL()
{
    int yym, yyn, yystate;
#if YYDEBUG
    const char *yys;

    if ((yys = getenv("YYDEBUG")) != 0)
    {
        yyn = *yys;
        if (yyn >= '0' && yyn <= '9')
            yydebug = yyn - '0';
    }
#endif

    yynerrs = 0;
    yyerrflag = 0;
    yychar = YYEMPTY;
    yystate = 0;

#if YYPURE
    memset(&yystack, 0, sizeof(yystack));
#endif

    if (yystack.s_base == NULL && yygrowstack(&yystack)) goto yyoverflow;
    yystack.s_mark = yystack.s_base;
    yystack.l_mark = yystack.l_base;
    yystate = 0;
    *yystack.s_mark = 0;

yyloop:
    if ((yyn = yydefred[yystate]) != 0) goto yyreduce;
    if (yychar < 0)
    {
        if ((yychar = YYLEX) < 0) yychar = 0;
#if YYDEBUG
        if (yydebug)
        {
            yys = 0;
            if (yychar <= YYMAXTOKEN) yys = yyname[yychar];
            if (!yys) yys = "illegal-symbol";
            printf("%sdebug: state %d, reading %d (%s)\n",
                    YYPREFIX, yystate, yychar, yys);
        }
#endif
    }
    if ((yyn = yysindex[yystate]) && (yyn += yychar) >= 0 &&
            yyn <= YYTABLESIZE && yycheck[yyn] == yychar)
    {
#if YYDEBUG
        if (yydebug)
            printf("%sdebug: state %d, shifting to state %d\n",
                    YYPREFIX, yystate, yytable[yyn]);
#endif
        if (yystack.s_mark >= yystack.s_last && yygrowstack(&yystack))
        {
            goto yyoverflow;
        }
        yystate = yytable[yyn];
        *++yystack.s_mark = yytable[yyn];
        *++yystack.l_mark = yylval;
        yychar = YYEMPTY;
        if (yyerrflag > 0)  --yyerrflag;
        goto yyloop;
    }
    if ((yyn = yyrindex[yystate]) && (yyn += yychar) >= 0 &&
            yyn <= YYTABLESIZE && yycheck[yyn] == yychar)
    {
        yyn = yytable[yyn];
        goto yyreduce;
    }
    if (yyerrflag) goto yyinrecovery;

    yyerror("syntax error");

    goto yyerrlab;

yyerrlab:
    ++yynerrs;

yyinrecovery:
    if (yyerrflag < 3)
    {
        yyerrflag = 3;
        for (;;)
        {
            if ((yyn = yysindex[*yystack.s_mark]) && (yyn += YYERRCODE) >= 0 &&
                    yyn <= YYTABLESIZE && yycheck[yyn] == YYERRCODE)
            {
#if YYDEBUG
                if (yydebug)
                    printf("%sdebug: state %d, error recovery shifting\
 to state %d\n", YYPREFIX, *yystack.s_mark, yytable[yyn]);
#endif
                if (yystack.s_mark >= yystack.s_last && yygrowstack(&yystack))
                {
                    goto yyoverflow;
                }
                yystate = yytable[yyn];
                *++yystack.s_mark = yytable[yyn];
                *++yystack.l_mark = yylval;
                goto yyloop;
            }
            else
            {
#if YYDEBUG
                if (yydebug)
                    printf("%sdebug: error recovery discarding state %d\n",
                            YYPREFIX, *yystack.s_mark);
#endif
                if (yystack.s_mark <= yystack.s_base) goto yyabort;
                --yystack.s_mark;
                --yystack.l_mark;
            }
        }
    }
    else
    {
        if (yychar == 0) goto yyabort;
#if YYDEBUG
        if (yydebug)
        {
            yys = 0;
            if (yychar <= YYMAXTOKEN) yys = yyname[yychar];
            if (!yys) yys = "illegal-symbol";
            printf("%sdebug: state %d, error recovery discards token %d (%s)\n",
                    YYPREFIX, yystate, yychar, yys);
        }
#endif
        yychar = YYEMPTY;
        goto yyloop;
    }

yyreduce:
#if YYDEBUG
    if (yydebug)
        printf("%sdebug: state %d, reducing by rule %d (%s)\n",
                YYPREFIX, yystate, yyn, yyrule[yyn]);
#endif
    yym = yylen[yyn];
    if (yym)
        yyval = yystack.l_mark[1-yym];
    else
        memset(&yyval, 0, sizeof yyval);
    switch (yyn)
    {
case 1:
#line 32 "matsya.y"
	{execute(yystack.l_mark[0]);}
break;
case 2:
#line 35 "matsya.y"
	{ yyval = assignment(yystack.l_mark[-2],yystack.l_mark[0]); }
break;
case 3:
#line 36 "matsya.y"
	{ yyval print(yystack.l_mark[0]);}
break;
case 4:
#line 37 "matsya.y"
	{yyval= ifstmt(yystack.l_mark[-5],yystack.l_mark[-3],yystack.l_mark[-1]);}
break;
case 5:
#line 38 "matsya.y"
	{yyval= ifstmt(yystack.l_mark[-3],yystack.l_mark[-1],empty());}
break;
case 6:
#line 39 "matsya.y"
	{yyval= whilestmt(yystack.l_mark[-3],yystack.l_mark[-1]);}
break;
case 7:
#line 43 "matsya.y"
	{yyval = seq(yystack.l_mark[-2],yystack.l_mark[0]);}
break;
case 8:
#line 44 "matsya.y"
	{yyval==yystack.l_mark[0];}
break;
case 9:
#line 47 "matsya.y"
	{yyval=yystack.l_mark[0];}
break;
case 10:
#line 48 "matsya.y"
	{ yyval= eq(yystack.l_mark[-2],yystack.l_mark[0]);}
break;
case 11:
#line 49 "matsya.y"
	{ yyval= ne(yystack.l_mark[-2],yystack.l_mark[0]);}
break;
case 12:
#line 50 "matsya.y"
	{ yyval= lt(yystack.l_mark[-2],yystack.l_mark[0]);}
break;
case 13:
#line 51 "matsya.y"
	{ yyval= le(yystack.l_mark[-2],yystack.l_mark[0]);}
break;
case 14:
#line 52 "matsya.y"
	{ yyval= gt(yystack.l_mark[-2],yystack.l_mark[0]);}
break;
case 15:
#line 53 "matsya.y"
	{ yyval= ge(yystack.l_mark[-2],yystack.l_mark[0]);}
break;
case 16:
#line 56 "matsya.y"
	{ yyval == yystack.l_mark[0];}
break;
case 17:
#line 57 "matsya.y"
	{ yyval = plus(yystack.l_mark[-2],yystack.l_mark[0]);}
break;
case 18:
#line 58 "matsya.y"
	{ yyval= MINUS(yystack.l_mark[-2],yystack.l_mark[0]);}
break;
case 19:
#line 61 "matsya.y"
	{ yyval=yystack.l_mark[0];}
break;
case 20:
#line 62 "matsya.y"
	{yyval = mult(yystack.l_mark[-2],yystack.l_mark[0]);}
break;
case 21:
#line 63 "matsya.y"
	{yyval = divide(yystack.l_mark[-2],yystack.l_mark[0]);}
break;
case 22:
#line 67 "matsya.y"
	{yyval = yystack.l_mark[0];}
break;
case 23:
#line 68 "matsya.y"
	{yyval = neq(yystack.l_mark[0]);}
break;
case 24:
#line 69 "matsya.y"
	{yyval = yystack.l_mark[-1];}
break;
case 25:
#line 70 "matsya.y"
	{ yyval = integer(yystack.l_mark[0]);}
break;
case 26:
#line 71 "matsya.y"
	{ yyval = floating(yystack.l_mark[0]);}
break;
case 27:
#line 72 "matsya.y"
	{yyval =yystack.l_mark[0];}
break;
case 28:
#line 73 "matsya.y"
	{yyval =yystack.l_mark[0];}
break;
case 29:
#line 77 "matsya.y"
	{yyval = text(yystack.l_mark[0]);}
break;
case 30:
#line 81 "matsya.y"
	{ yyval = variable(yystack.l_mark[0]); }
break;
#line 611 "y.tab.c"
    }
    yystack.s_mark -= yym;
    yystate = *yystack.s_mark;
    yystack.l_mark -= yym;
    yym = yylhs[yyn];
    if (yystate == 0 && yym == 0)
    {
#if YYDEBUG
        if (yydebug)
            printf("%sdebug: after reduction, shifting from state 0 to\
 state %d\n", YYPREFIX, YYFINAL);
#endif
        yystate = YYFINAL;
        *++yystack.s_mark = YYFINAL;
        *++yystack.l_mark = yyval;
        if (yychar < 0)
        {
            if ((yychar = YYLEX) < 0) yychar = 0;
#if YYDEBUG
            if (yydebug)
            {
                yys = 0;
                if (yychar <= YYMAXTOKEN) yys = yyname[yychar];
                if (!yys) yys = "illegal-symbol";
                printf("%sdebug: state %d, reading %d (%s)\n",
                        YYPREFIX, YYFINAL, yychar, yys);
            }
#endif
        }
        if (yychar == 0) goto yyaccept;
        goto yyloop;
    }
    if ((yyn = yygindex[yym]) && (yyn += yystate) >= 0 &&
            yyn <= YYTABLESIZE && yycheck[yyn] == yystate)
        yystate = yytable[yyn];
    else
        yystate = yydgoto[yym];
#if YYDEBUG
    if (yydebug)
        printf("%sdebug: after reduction, shifting from state %d \
to state %d\n", YYPREFIX, *yystack.s_mark, yystate);
#endif
    if (yystack.s_mark >= yystack.s_last && yygrowstack(&yystack))
    {
        goto yyoverflow;
    }
    *++yystack.s_mark = (short) yystate;
    *++yystack.l_mark = yyval;
    goto yyloop;

yyoverflow:
    yyerror("yacc stack overflow");

yyabort:
    yyfreestack(&yystack);
    return (1);

yyaccept:
    yyfreestack(&yystack);
    return (0);
}
