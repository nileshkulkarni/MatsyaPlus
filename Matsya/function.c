#include <stdio.h>
#include <string.h>
#include "function.h"
#include "header.h"
#include "y.tab.h"

extern tree_t* _treeRoot;

tree_t* createTree(tree_t* root){
								_treeRoot=root;
								return _treeRoot;
}




tree_t * print(tree_t* expr){
								tree_t* t =  malloc(sizeof(tree_t));

								t->nb_links = 1;
								t->links =  malloc(sizeof(tree_t*)*1);
								t->links[0] = expr;
								t->type = "PRINT"; 
								return t;

}


tree_t * ifstmt(tree_t* cond,tree_t* expr1,tree_t* expr2){
								tree_t* t =  malloc(sizeof(tree_t));

								t->nb_links = 3;
								t->links =  malloc(sizeof(tree_t*)*3);
								t->links[0] = cond;
								t->links[1] = expr1;
								t->links[2] = expr2;
								t->type = "IFELSE"; 
								return t;

}

tree_t * ifOnlystmt(tree_t* cond,tree_t* expr1){
								tree_t* t =  malloc(sizeof(tree_t));

								t->nb_links = 2;
								t->links =  malloc(sizeof(tree_t*)*2);
								t->links[0] = cond;
								t->links[1] = expr1;
								t->type = "IF"; 
								return t;

}



tree_t * whilestmt(tree_t* cond  ,tree_t* expr ){
								tree_t* t =  malloc(sizeof(tree_t));

								t->nb_links = 2;
								t->links =  malloc(sizeof(tree_t*)*2);
								t->links[0] = cond;
								t->links[1] = expr;
								t->type = "WHILE"; 
								return t;

}

tree_t* assignment(tree_t* variable, tree_t* expr){
								tree_t* t =  malloc(sizeof(tree_t));

								t->type ="ASSIGN"; 
								t->nb_links = 2;
								t->links =  malloc(sizeof(tree_t*)*2);
								t->links[0] = variable;
								t->links[1] = expr;
								return t;
}

tree_t* seq( tree_t* stmtseq, tree_t* stmt){
								tree_t* t =  malloc(sizeof(tree_t));

								t->type ="STMTSEQ";
								t->nb_links=2;
								t->links =  malloc(sizeof(tree_t*)*2);
								t->links[0] = stmtseq;
								t->links[1] = stmt;
								return t;
}



tree_t* operators(char *op, tree_t* lOperand, tree_t* rOperand){
								tree_t* t =  malloc(sizeof(tree_t));

								t->type  = malloc (sizeof(char)*2);
								strcpy(t->type,op);
								t->nb_links=2;
								t->links =  malloc(sizeof(tree_t*)*2);
								t->links[0] = lOperand;
								t->links[1] = rOperand;
								return t;
}

tree_t* variable(char* symbol){
								tree_t* t=  malloc(sizeof(tree_t));
								t->type="VARIABLE";
								t->symbol = malloc(sizeof(char) * 10);
								strcpy(t->symbol,symbol);
								return t;
}

tree_t* integer(int value){
								tree_t* t=   malloc(sizeof(tree_t));
								t->type="INT";
								t->value = value;

								return t;
}



