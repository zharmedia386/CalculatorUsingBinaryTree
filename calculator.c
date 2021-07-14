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
#include "calculatorGridLayout.c"

void calculator(){
    system("cls");
    // Print Grid Calculator Layout
    // printf( "  \xDA\xC4\xC4\xC2\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC2\xC4\xC4\xC4\xC4\xC4\xC2\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC2\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xBF\n" );
    // printf( "  \n      \xDA\xC4\xC4\xC4\xC4\xC4");
    // printf( "  \xB3%-2s\xB3%-20s\xB3%-5s\xB3%-15s\xB3%-15s\xB3\n", "No", "Time", "Size", "Difficulty", "Winner" );
    // printf( "  \xC3\xC4\xC4\xC5\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC5\xC4\xC4\xC4\xC4\xC4\xC5\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC5\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xB4\n" );

    // Enter Expression and Show The Result
    while(true){
        char a[200] = "\0";
        char batas;
        int i;
        int inputKind = 0 ;

        printf("Please enter an expression:");
        fflush(stdin);
        scanf("%s", a);

        for(i=strlen(a)-1 ; i>=0 ; i--){

            if(!isdigit(a[i])){
                inputKind++;
            }
        }

        if(strlen(a) == (inputKind)){
            printf("Please input an invalid command\n");
            break;
        }
        // Menambahkan 0 di awal string, jika inputan indeks pertama negatif
        if(a[0] == '-'){
            for(i=strlen(a)-1 ; i>=0 ; i--){
                a[i+1] = a[i];
            }

            a[0] = '0';
        }
            
        // printf("The expression you entered is: %s\n",a);
        struct TNode* b = (struct TNode *)malloc(sizeof(struct TNode));
        b = constructTree(a,0,strlen(a)-1);
        double result = calculate(b);

        system("cls");
        if (ceil(result) > result){
            gridLayout1();
            printf("  \xB3  \xB3                             %f       \xB3   \xB3\n",result);
            gridLayout2();
        }
		else{
            gridLayout1();
            printf("  \xB3  \xB3                             %d       \xB3   \xB3\n",(int)result);
            gridLayout2();
        }
        printf("  Lanjut? (y/t) : ");
        fflush(stdin);
        scanf("%c",&batas);
        
        if(batas=='t')
            break;
    }
    printf("\n\n\n  Press ESCAPE on your keyboard to main menu");
}
