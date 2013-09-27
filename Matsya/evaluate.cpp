#include "evaluate.h"
#include <iostream>
#include <map>
#include <cstring>

Evaluate:: Evaluate(tree_t * t){
	_root  =t;
}

int Evaluate:: execute(){
	return _executeStmtseq(_root);
}


int Evaluate :: _executeStmtseq(tree_t * t){

	if(t==NULL){
		std::cout<<"error: Tree not of correct type, expected STMTSEQ, received NULL \n";
		return 0;
	}
	std:: string type(t->type);

	if(type == "STMTSEQ"){
			int nb_links= t->nb_links;
			tree_t **links = t->links;
			for(int i=0;i<nb_links;i++){
				if(links[i] == NULL){
					continue;
				}
				std::string linkType( links[i]->type) ;
				if(linkType == "STMTSEQ"){
						_executeStmtseq(links[i]);
				}
				else{
						_executeStatement(links[i]);
				}	

			}
		return 1;
	}
	else{
		std::cout<<"error: Tree not of correct type, expected STMTSEQ \n";
		return 0;
	}	

}


int Evaluate :: _executeStatement(tree_t * t){

	if(t==NULL){
		std::cout<<"error: Expected a statmenet here, received a NULL\n";
		return 0;
	}
	std::string type( t->type);
		
	if(type=="PRINT"){
		_executePrint(t);				
	}
	else if(type=="IFELSE"){
		_executeIf(t);
	}
	else if(type=="IF"){
		_executeIfOnly(t);
	}
	else if(type=="WHILE"){
		_executeWhile(t);
	}
	else if(type=="ASSIGN"){
		_executeAssign(t);
	}
	else{
		std::cout<<"error: none of the statmenet types seem to match\n";
		return 0;
	}
	return 1;

}	

 int  Evaluate :: _evaluateExpression(tree_t *t){
	
	if(t==NULL){
		std::cout<<"error: Received a null here\n";
		return 0;
	}
		
	std::string type(t->type); 
	if(type =="INT"){	
		return _getInt(t);
	
	}
	else if(type=="VARIABLE"){
		// check if the entry exist in the environment;
		std::string variable = _getVariable(t);
		if(_environment.find(variable)!=_environment.end()){
			return _getVariableVal(variable);			
		}	
		else{
			std::cout<<"error: previously undefined variable " + variable + "\n"; 
		}

	}

	else if(type=="=" || type=="<" || type ==">" || type== "<=" || type==">="|| type=="+"||type=="-"|| type=="*"|| type=="/" ){
		return	_evaluateOperand(t);	
	}
	
	else{
				
	}

	return 0;
}

int Evaluate:: _evaluateOperand(tree_t * t){
		tree_t* loperand = t->links[0];
		tree_t* roperand = t->links[1];
		int lval = _evaluateExpression(loperand);  
		int rval = _evaluateExpression(roperand);
		std::string type(t->type);
		if(type== "="){
					if(rval == lval){
							return 1;
					}
					else{
							return 0;
					}
		}
		else if(type== "<"){

					if(lval< rval){
							return 1;
					}
					else{
							return 0;
					}
		}
		else if(type== ">"){


					if(lval> rval){
							return 1;
					}
					else{
							return 0;
					}
		}			
		else if (type =="<="){
					if(lval <= rval){
							return 1;
					}
					else{
							return 0;
					}
		}	

		else if (type==">="){
					if(lval>= rval){
							return 1;
					}
					else{
							return 0;
					}
				
		}
		else if(type== "+"){
						return lval+rval;
		}
		else if(type== "-"){

						return lval-rval;
		}
		else if(type== "*"){
						return lval*rval;
		}
		else if(type== "/"){
					if(rval==0){
						std::cout<<"Division by zero no permitted";
						return 0;
					}
					else{
						return lval/rval;
					}
		
		}
		else{
					std::cout<<"error: wrong operator \n";
		}
}


int Evaluate:: _getVariableVal(string variable){
	//try to search value in map	
	std::map<string,int>::iterator it	= _environment.find(variable);
	return it->second;
	
	
}

int Evaluate ::   _executePrint(tree_t *t){


	if(t== NULL){
			std::cout<<"error: expected a tree of type PRINT received NULL\n";
		return 0;
	}
	int nb_links = t->nb_links;
	tree_t** links = t->links;
	int a  = _evaluateExpression(links[0]);
	std::cout<<a<<"\n";		

}

int Evaluate :: _executeIfOnly(tree_t *t){

	int nb_links = t->nb_links;
	tree_t** links = t->links;
	
	tree_t* cond = t->links[0];
	tree_t* ifPart = t->links[1];
	
	int condVal = _evaluateExpression(cond);
	
	if(condVal == 1){
		_executeStmtseq(ifPart);
	}
	return 1;	
}

int Evaluate :: _executeIf(tree_t *t){

	if(t== NULL){
			std::cout<<"error: expected a tree of type IF received NULL\n";
		return 0;
	}
	int nb_links = t->nb_links;
	tree_t** links = t->links;
	
	tree_t* cond = t->links[0];
	tree_t* ifPart = t->links[1];
	tree_t* elsePart = t->links[2];
	
	int condVal = _evaluateExpression(cond);
	
	if(condVal == 1){
		_executeStmtseq(ifPart);
		return 1;

	}
	else if(condVal == 0){
		_executeStmtseq(elsePart);
		return 1;	
	}
	else{
		std::cout<<"error: if didnot evaluate as expexted\n";
		return 0;
	}
	
}

int Evaluate :: _executeWhile(tree_t *t){
	if(t== NULL){
			std::cout<<"error: expected a tree of type IF received NULL\n";
		return 0;
	}
	int nb_links = t->nb_links;
	tree_t** links = t->links;
	
	tree_t* cond = t->links[0];
	tree_t* loopPart = t->links[1];

	int condVal = _evaluateExpression(cond);
	while(condVal==1){
		_executeStmtseq(loopPart);
		condVal = _evaluateExpression(cond);
	}
	return 1;

}

string Evaluate:: _getVariable(tree_t *t){
	if(t == NULL){
			std::cout<<"error: excepted a type variable, received a NULL";
			return 0;
	}
	std::string type(t->type);
	if(type=="VARIABLE"){
		std::string variable(t->symbol);
		return variable;
	}
	else{
		return  "null";	
	}
		

}
int Evaluate:: _getInt(tree_t *t){
	if(t == NULL){
			std::cout<<"error: excepted a type INT, received a NULL";
			return 0;
	}
	std::string type(t->type);
	if(type=="INT"){
		int val = t->value;
		return val;
	}
	else{
		return  0;	
	}
		

}


int Evaluate :: _executeAssign(tree_t *t){

	if(t == NULL){
			std::cout<<"error: excepted a type assign, received a NULL";
			return 0;
	}
	
	std::string variable = _getVariable(t->links[0]);
	int val = _evaluateExpression(t->links[1]);	
	std::map<std::string,int>::iterator it= _environment.find(variable);
	if(it!= _environment.end()){
		_environment.erase(it);
		_environment.insert(std::pair<std::string,int>(variable,val));
	}
	else{
		_environment.insert(std::pair<std::string,int>(variable,val));
	}	
}

