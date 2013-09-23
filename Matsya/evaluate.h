#ifndef EVALUATE_H
#define EVALUATE
#include "header.h"
#include  <map>
#include <iostream>
#include <cstring>
using namespace std;

class Evaluate{
	private:
		tree_t* _root;
		map<std::string, int> _environment;


		int _executePrint(tree_t* t);
		int _executeIfOnly(tree_t* t);
		int _executeIf(tree_t* t);
		int _executeWhile(tree_t* t);
		int _executeAssign(tree_t* t);
		int _executeStmtseq(tree_t*);
		int _executeStatement(tree_t*);
		int _executeExpression(tree_t*);
		
	public:
		Evaluate(tree_t* t);
		int execute();
};
#endif

