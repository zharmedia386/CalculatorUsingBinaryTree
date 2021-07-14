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

#define OPEN_BRACKET '('
#define CLOSE_BRACKET ')'
#define DECIMAL '.'
#define PLUS '+'
#define MINUS '-'
#define MULTIPLY '*'
#define DIVISION '/'
#define SQUARE_ROOT 'v'
#define POWER '^'
#define PERCENTAGE '%'

#ifndef tree_H
#define tree_H

typedef struct TNode* addrNode;

typedef struct  TNode{
    bool isSymbol;
    double number;
    char symbol; 
    addrNode leftChild;
    addrNode rightChild;
}Node;

double calculate(addrNode root);
/**
 * [Modified] From https://www.programmersought.com/article/95294413292/
 * Melakukan perhitungan terhadap suatu sub-tree
 * Mengembalikan hasil perhitungan jika terdapat operator (root berisi operator)
 * Mengembalikan nilai number jika tidak terdapat operator (root berisi number)
 */

double checkString(char str[],int start,int end);
/**
 * [Modified] From https://www.programmersought.com/article/95294413292/
 * Melakukan pengecekan terhadap suatu string
 * Mengembalikan hasil konversi number jika tidak ditemukan operator pada string
 * Mengembalikan nilai MAX jika terdapat operator pada string
 */

int findOperator(char str[],int start,int end);
/**
 * Menemukan operator dengan aturan derajat yang telah ditentukan
 *  1. PLUS or MINUS
 *  2. MULTIPLY or DIVISION
 *  3. SQUARE_ROOT or PERCENTAGE or POWER
 * Mengembalikan posisi operator tersebut dalam string
 */

addrNode constructTree(char str[],int start,int end);
/**
 * [Modified] From https://www.programmersought.com/article/95294413292/
 * Membuat expression tree
 * Mengembalikan tree yang telah berisi expression
 */

#endif
