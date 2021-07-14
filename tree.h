/*
	POLITEKNIK NEGERI BANDUNG
	D4 Teknik Informatika - 1A
	Developer		: 
    - Muhammad Azhar Alauddin (201524013)
		- Muhammad Fauzi Rizki Hamdalah (201524015) 
    - Rifatia Yumna Salma (201524024)
	Program			: Calculator Using Binary Tree
  File        : tree.h
	IDE     		: DevC++, VS Code
  Compiler    : GCC 4.9.2 
-------------------------------------- */

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <stdbool.h>
#include <time.h>
#include <malloc.h>
#include <ctype.h>
#include <math.h>
#define MAX 0x3f3f3f3f
#define DECIMAL_FLAG '.'

#ifndef tree_H
#define tree_H

typedef struct  TNode{
    int flag;
    double data; //flag=0 
    char ch; //flag=1
    struct TNode * lChild;//Left child 
    struct  TNode * rChild;//Right child 
}Node;

double cal(struct TNode *root);

double check(char s[],int start,int end);

void postOrder(struct TNode *root);

struct TNode * buildTree(char s[],int start,int end);

void mainDriver();

#endif