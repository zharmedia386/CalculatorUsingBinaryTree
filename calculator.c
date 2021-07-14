/*
    POLITEKNIK NEGERI BANDUNG
    D4 Teknik Informatika - 1A
    Developer : 
        - Muhammad Azhar Alauddin (201524013)
        - Muhammad Fauzi Rizki Hamdalah (201524015) 
        - Rifatia Yumna Salma (201524024)
    Program     : Calculator Using Binary Tree
    File        : calculator.c
    IDE         : DevC++, VS Code
    Compiler    : GCC 4.9.2 
-------------------------------------- */

#include "tree.h"
#include "tree.c"

void calculator(){
    system("cls");
    while(1){
        char a[200];
        int i;
        printf("Please enter an expression:");
        fflush(stdin);

        scanf("%s",a);
        // Menambahkan 0 di awal string, jika inputan indeks pertama negatif
        if(a[0] == '-'){
            for(i = strlen(a)-1; i >= 0; i--){
                a[i+1] = a[i];
            }
            a[0] = '0';
        }
            
        printf("The expression you entered is: %s\n",a);
        struct TNode* b=(struct TNode *)malloc(sizeof(struct TNode));
        b=buildTree(a,0,strlen(a)-1);
        double result = cal(b);
        if(ceil(result) > result)
        	printf("Your result is %.2f\n",result); 
		else
			printf("Your result is %d\n",(int)result);   
    }
}