#ifndef HEADER_H
#define HEADER_H


struct tree_t  {
    struct tree_t **links;
    int nb_links;
				char* symbol;
				int value;
    char* type; // the grammar rule
};

#endif
