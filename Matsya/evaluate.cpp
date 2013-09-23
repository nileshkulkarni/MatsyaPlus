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

 int  Evaluate :: _executeExpression(tree_t *t){
	
	if(t==NULL){
		std::cout<<"error: Received a null here\n";
		return 0;
	}
		
	std::string type(t->type); 
	if(type =="INT"){	
			return t->value;
	
	}
	if(type=="VARIABLE"){
		
	
	}
	if(type 

	return 0;
}


 int Evaluate ::   _executePrint(tree_t *t){


	if(t== NULL){
			std::cout<<"error: expected a tree of type PRINT received NULL\n";
		return 0;
	}
	int nb_links = t->nb_links;
	tree_t** links = t->links;
	int a  = _executeExpression(links[0]);
	std::cout<<a<<"\n";		

}
 int Evaluate :: _executeIfOnly(tree_t *t){

	if(t== NULL){
		std::cout<<"error: expected a tree of type IF received NULL\n";
		return 0;
	}
	int nb_links = t->nb_links;
	tree_t** links = t->links;
	int a  = _executeExpression(links[0]);
	std::cout<<a<<"\n";		


}
 int Evaluate :: _executeIf(tree_t *t){

	if(t== NULL){
			std::cout<<"error: expected a tree of type IF received NULL\n";
		return 0;
	}
	int nb_links = t->nb_links;
	tree_t** links = t->links;
	int a  = _executeExpression(links[0]);
	std::cout<<a<<"\n";		




}
int Evaluate :: _executeWhile(tree_t *t){
	if(t== NULL){
			std::cout<<"error: expected a tree of type IF received NULL\n";
		return 0;
	}
	int nb_links = t->nb_links;
	tree_t** links = t->links;
	int a  = _executeExpression(links[0]);
	std::cout<<a<<"\n";		




}
 int Evaluate :: _executeAssign(tree_t *t){



}


