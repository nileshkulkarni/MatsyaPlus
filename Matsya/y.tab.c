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

#line 2 "matsya.y"
#include <stdio.h>
#include "y.tab.h"
#include "function.h"
#include "header.h"

/*extern "C" int yylex();*/
extern  int yylex();
extern "C" int yyparse();
extern "C" FILE *yyin;

void yyerror(const char *s);

tree_t * _treeRoot;
#line 46 "matsya.y"
#ifdef YYSTYPE
#undef  YYSTYPE_IS_DECLARED
#define YYSTYPE_IS_DECLARED 1
#endif
#ifndef YYSTYPE_IS_DECLARED
#define YYSTYPE_IS_DECLARED 1
typedef union{
	int ival;
	float fval;
	char* svalVar;
	struct tree_t* node;
} YYSTYPE;
#endif /* !YYSTYPE_IS_DECLARED */
#line 47 "y.tab.c"

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
#define ENDL 282
#define YYERRCODE 256
static const short yylhs[] = {                           -1,
    0,    1,    1,    1,    1,    1,    2,    3,    3,    4,
    4,    4,    4,    4,    4,    4,    5,    5,    5,    6,
    6,    6,    7,    7,    7,    7,    7,    8,
};
static const short yylen[] = {                            2,
    2,    1,    2,    7,    5,    5,    3,    3,    1,    1,
    3,    3,    3,    3,    3,    3,    1,    3,    3,    1,
    3,    3,    2,    2,    3,    1,    1,    1,
};
static const short yydefred[] = {                         0,
    0,    0,    0,   28,    0,    9,    2,    0,    0,    0,
    0,    0,   26,    0,    0,    0,   20,   27,    0,    3,
    0,    0,   23,   24,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    8,    7,   25,
    0,    0,    0,    0,    0,    0,    0,    0,    0,   21,
   22,    0,    0,    0,    5,    6,    0,    4,
};
static const short yydgoto[] = {                          5,
    6,    7,    8,   14,   15,   16,   17,   18,
};
static const short yysindex[] = {                      -264,
 -245, -245, -245,    0,    0,    0,    0, -260, -238, -245,
 -245, -245,    0, -248,  -95, -190,    0,    0, -250,    0,
 -264, -245,    0,    0, -234, -264, -245, -245, -245, -245,
 -245, -245, -245, -245, -245, -245, -264,    0,    0,    0,
 -233, -243, -243, -243, -243, -243, -243, -190, -190,    0,
    0, -261, -264, -264,    0,    0, -262,    0,
};
static const short yyrindex[] = {                         0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0, -164, -214,    0,    0,    0,    0,
   35,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0, -156, -148, -140, -132, -124, -116, -193, -172,    0,
    0,    0,    0,    0,    0,    0,    0,    0,
};
static const short yygindex[] = {                         0,
  -21,    0,  -24,    3,  143,   18,   -7,    1,
};
#define YYTABLESIZE 175
static const short yytable[] = {                         38,
    9,   41,   23,   24,   19,   20,    1,   53,   53,   21,
    2,   58,   52,    3,   25,   56,    4,   10,   11,   33,
   34,    9,   12,   26,   39,   37,    9,   50,   51,   57,
   22,   38,   40,   13,    1,    4,   53,    9,    0,   54,
   55,    0,   17,   17,   17,   17,   17,   17,   17,   17,
   48,   49,   17,    9,    9,   17,    0,   17,   17,   17,
    0,   17,   17,   18,   18,   18,   18,   18,   18,   18,
   18,    0,    0,   18,   35,   36,   18,    0,   18,   18,
   18,    0,   18,   18,   19,   19,   19,   19,   19,   19,
   19,   19,    0,    0,   19,    0,    0,   19,    0,   19,
   19,   19,   10,   19,   19,   10,    0,   10,   10,   10,
   11,   10,   10,   11,    0,   11,   11,   11,   12,   11,
   11,   12,    0,   12,   12,   12,   13,   12,   12,   13,
    0,   13,   13,   13,   14,   13,   13,   14,    0,   14,
   14,   14,   15,   14,   14,   15,    0,   15,   15,   15,
   16,   15,   15,   16,    0,   16,   16,   16,    0,   16,
   16,   27,   28,   29,   30,   31,   32,   33,   34,   42,
   43,   44,   45,   46,   47,
};
static const short yycheck[] = {                         21,
    0,   26,   10,   11,    2,    3,  271,  270,  270,  270,
  275,  274,   37,  278,   12,  277,  281,  263,  264,  263,
  264,   21,  268,  272,   22,  276,   26,   35,   36,   54,
  269,   53,  267,  279,    0,  281,  270,   37,   -1,  273,
  274,   -1,  257,  258,  259,  260,  261,  262,  263,  264,
   33,   34,  267,   53,   54,  270,   -1,  272,  273,  274,
   -1,  276,  277,  257,  258,  259,  260,  261,  262,  263,
  264,   -1,   -1,  267,  265,  266,  270,   -1,  272,  273,
  274,   -1,  276,  277,  257,  258,  259,  260,  261,  262,
  263,  264,   -1,   -1,  267,   -1,   -1,  270,   -1,  272,
  273,  274,  267,  276,  277,  270,   -1,  272,  273,  274,
  267,  276,  277,  270,   -1,  272,  273,  274,  267,  276,
  277,  270,   -1,  272,  273,  274,  267,  276,  277,  270,
   -1,  272,  273,  274,  267,  276,  277,  270,   -1,  272,
  273,  274,  267,  276,  277,  270,   -1,  272,  273,  274,
  267,  276,  277,  270,   -1,  272,  273,  274,   -1,  276,
  277,  257,  258,  259,  260,  261,  262,  263,  264,   27,
   28,   29,   30,   31,   32,
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
"THEN","ELSE","FI","WHILE","DO","OD","PRINT","INT","FLOAT","VARIABLE","ENDL",
};
static const char *yyrule[] = {
"$accept : ROOT",
"ROOT : stmtseq SEMICOLON",
"statement : assignment",
"statement : PRINT expression",
"statement : IF expression THEN stmtseq ELSE stmtseq FI",
"statement : IF expression THEN stmtseq FI",
"statement : WHILE expression DO stmtseq OD",
"assignment : designator ASSIGN expression",
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
"expr4 : designator",
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
#line 109 "matsya.y"

int main(){
	//FILE *myfile = fopen("in.matsya","r");
	//if(!myfile){
			//		printf(" I cant open in.matsya\n");
//	}
	//yyin = myfile;
	do{
//			yyparse();
	}while(!feof(yyin));


}

void yyerror(const char* s){
	return;
}

#line 288 "y.tab.c"

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
#line 61 "matsya.y"
	{yyval.node=createTree(yystack.l_mark[-1].node);}
break;
case 2:
#line 64 "matsya.y"
	{ yyval.node=yystack.l_mark[0].node;}
break;
case 3:
#line 65 "matsya.y"
	{ yyval.node= print(yystack.l_mark[0].node);}
break;
case 4:
#line 66 "matsya.y"
	{yyval.node= ifstmt(yystack.l_mark[-5].node,yystack.l_mark[-3].node,yystack.l_mark[-1].node);}
break;
case 5:
#line 67 "matsya.y"
	{yyval.node= ifOnlystmt(yystack.l_mark[-3].node,yystack.l_mark[-1].node);}
break;
case 6:
#line 68 "matsya.y"
	{yyval.node= whilestmt(yystack.l_mark[-3].node,yystack.l_mark[-1].node);}
break;
case 7:
#line 71 "matsya.y"
	{ yyval.node = assignment(yystack.l_mark[-2].node,yystack.l_mark[0].node); }
break;
case 8:
#line 74 "matsya.y"
	{yyval.node = seq(yystack.l_mark[-2].node,yystack.l_mark[0].node);}
break;
case 9:
#line 75 "matsya.y"
	{yyval.node=yystack.l_mark[0].node;}
break;
case 10:
#line 78 "matsya.y"
	{yyval.node=yystack.l_mark[0].node;}
break;
case 11:
#line 79 "matsya.y"
	{ yyval.node= operators("=",yystack.l_mark[-2].node,yystack.l_mark[0].node);}
break;
case 12:
#line 80 "matsya.y"
	{ yyval.node=  operators("!=",yystack.l_mark[-2].node,yystack.l_mark[0].node);}
break;
case 13:
#line 81 "matsya.y"
	{ yyval.node= operators("<",yystack.l_mark[-2].node,yystack.l_mark[0].node);}
break;
case 14:
#line 82 "matsya.y"
	{ yyval.node= operators("<=",yystack.l_mark[-2].node,yystack.l_mark[0].node);}
break;
case 15:
#line 83 "matsya.y"
	{ yyval.node= operators(">",yystack.l_mark[-2].node,yystack.l_mark[0].node);}
break;
case 16:
#line 84 "matsya.y"
	{ yyval.node= operators(">=",yystack.l_mark[-2].node,yystack.l_mark[0].node);}
break;
case 17:
#line 86 "matsya.y"
	{ yyval.node == yystack.l_mark[0].node;}
break;
case 18:
#line 87 "matsya.y"
	{ yyval.node = operators("+",yystack.l_mark[-2].node,yystack.l_mark[0].node);}
break;
case 19:
#line 88 "matsya.y"
	{ yyval.node= operators("-",yystack.l_mark[-2].node,yystack.l_mark[0].node);}
break;
case 20:
#line 90 "matsya.y"
	{ yyval.node=yystack.l_mark[0].node;}
break;
case 21:
#line 91 "matsya.y"
	{yyval.node = operators("*",yystack.l_mark[-2].node,yystack.l_mark[0].node);}
break;
case 22:
#line 92 "matsya.y"
	{yyval.node = operators("/",yystack.l_mark[-2].node,yystack.l_mark[0].node);}
break;
case 23:
#line 96 "matsya.y"
	{yyval.node = yystack.l_mark[0].node;}
break;
case 24:
#line 97 "matsya.y"
	{yyval.node = yystack.l_mark[0].node;}
break;
case 25:
#line 98 "matsya.y"
	{yyval.node = yystack.l_mark[-1].node;}
break;
case 26:
#line 99 "matsya.y"
	{ yyval.node = integer(yystack.l_mark[0].ival);}
break;
case 27:
#line 100 "matsya.y"
	{yyval.node =yystack.l_mark[0].node;}
break;
case 28:
#line 105 "matsya.y"
	{ yyval.node = variable(yystack.l_mark[0].svalVar); }
break;
#line 606 "y.tab.c"
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
