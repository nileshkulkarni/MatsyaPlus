#ifndef HEADER_H
#define HEADER_H


typedef struct  {
    struct tree_t **links;
    int nb_links;
				char* symbol;
				int value;
    char* type; // the grammar rule
}tree_t;

#endif
