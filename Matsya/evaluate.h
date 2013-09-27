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
		int _evaluateOperand(tree_t* t);	
		int _executeAssign(tree_t* t);
		int _executeStmtseq(tree_t*);
		int _executeStatement(tree_t*);
		int _executePrint(tree_t* t);
		int _executeIfOnly(tree_t* t);
		int _executeIf(tree_t* t);
		int _executeWhile(tree_t* t);
		int _evaluateExpression(tree_t*);
		int _getVariableVal(string variable);
		string _getVariable(tree_t * t);
		int _getInt(tree_t * t);
	public:
		Evaluate(tree_t* t);
		int execute();
};
#endif

