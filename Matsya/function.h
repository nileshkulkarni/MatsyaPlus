#ifndef FUNCTIONS_H
#define FUNCTIONS_H
//#include "y.tab.h"
#include "header.h"

tree_t * print(tree_t* expr);
tree_t * ifstmt(tree_t* cond,tree_t* expr1,tree_t* expr2);

tree_t * ifOnlystmt(tree_t* cond,tree_t* expr1);
tree_t * whilestmt(tree_t* cond  ,tree_t* expr );
tree_t* assignment(tree_t* variable, tree_t* expr);
tree_t* seq( tree_t* stmtseq, tree_t* stmt);

tree_t* operators(char *op, tree_t* lOperand, tree_t* rOperand);
tree_t* variable(char* symbol);
tree_t* integer(int value);
tree_t* createTree(tree_t* t);
#endif
