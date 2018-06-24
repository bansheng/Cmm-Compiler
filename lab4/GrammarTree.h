/*************************************************************************
    > File Name: GrammarTree.h
    > Author: GuanyuLi
    > Mail: guanyuli@hustunique.com
    > Created Time: Mon 21 Nov 2016 11:41:37 PM CST
 ************************************************************************/

#ifndef _GRAMMARTREE_H
#define _GRAMMARTREE_H

#define MAXSTRING 36
#define VOIDLINE -1

#include<stdio.h>
#include<stdlib.h>
#include<stdarg.h>
#include<string.h>
#include"SymbolTable.h"

extern char* yytext;
extern FILE* yyin;
extern int yylineno;
extern int yyparse();

typedef struct GrammarTreeNode* GrammarTree;

/* Create GrammarTree Using Chile-Brother representation
 * name: the name of the grammar unit
 * num: the number of grammar unit in the varible parameter list
*/
GrammarTree CreateGrammarTree(char* name, int num, ...);

/* Traverse GrammarTree Using Pre-Order
 * tree: the grammar tree
 * level: the number of the level
 */
void TraverseGrammerTree(GrammarTree gmtree, int level);

#endif
