/* 
* File        : parsetree.h
* Description : This file contains functions related to organised a Parse tree. 
*               The functions implemented are:
*               create_tree(), create_entry(), free_parse_tree(), display() 
*/


#include "../../token/tokenchar.h"
#include "../hash/symboltable.h"

struct parse_tree {
    char* token;
    int type;
    int line;
    struct parse_tree* child;
    struct parse_tree* sibling;
};


#define PARSING_ERROR -1
#define SUBTREE_OK 0
#define MEMORY_ERROR 1
#define STILL_CHILD 3

typedef struct parse_tree p_tree;


/* Create a new ParseTree. */
p_tree* create_tree(){
    
    p_tree* tree = NULL; // declare a pointer
	
	return tree;

}

/* Create a Entry for a token. */
p_tree* create_tree_entry(char* token, int type, int line) {
    p_tree* entry;

    /* Allocate space for entry */
	if( ( entry =(p_tree*) malloc( sizeof( p_tree ) ) ) == NULL ) {
		free(entry);
		return NULL;
	}

    if( ( entry->token = strdup( token ) ) == NULL ) {
		return NULL;
	}
	
	entry->type = type;
    entry->line = line;
	entry->child = NULL;
    entry->sibling = NULL;

	return entry;
}


/* Print the Parse Tree recursively. */
void print_PT(p_tree* tree, int indent) {
    if (tree == NULL)
        return;
    
    // This is a Depth-First print
    if (indent > 0) {
        indent += 1;
        char space[indent];
        memset(space, ' ', indent * sizeof(char));
        memset(space+indent, '\0', sizeof(char));
        printf("%s", space);
    }
    
    // Handler for Line Tokens and Program tokens
    if (tree->type) {
        printf("<%s, %d>\n", tree->token, tree->type);
    } else {
        printf("<%s>\n", tree->token);
    }

    p_tree* sibling;
    p_tree* child;
    sibling = tree->sibling;
    child = tree->child;
    print_PT(child, indent + 2);
    print_PT(sibling, indent);
}

/* Print the Parse Tree from the indent. */
void print_parse_tree(p_tree* tree) {
    print_PT(tree, 0);
}

/* Free memory for the ParseTree and all its internal data, including children and siblings. */
void free_parse_tree(p_tree* tree) {
    p_tree* sibling;
    p_tree* child;
    sibling = tree->sibling;
    child = tree->child;
    free(tree);

    if (sibling != NULL)
        free_parse_tree(sibling);
    if (child != NULL)
        free_parse_tree(child);
}


// int build_ParseTree (struct TokenList* head, struct ParseTree** tree);

// int build_ParseTree_FromFile (const char *fileName, struct ParseTree **tree);