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
    // Anchor
    calculator_anchor :
    system("cls");

    // Enter Expression and Show The Result
    while(true){
        system("cls");
        
        char batas;
        int i;
        int inputKind = 0 ;

        printf("\n\n");
        gridLayout();
        printf("  Please enter an expression:");
        fflush(stdin);
        scanf("%s", a);
        printf("\n\n");

        for(i=strlen(a)-1 ; i>=0 ; i--){
            if(!isdigit(a[i]))
                inputKind++;
        }
        if(inputKind > 0){
            printf("  Please input a valid input\n");
            sleep(1);
            goto calculator_anchor;
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
        result = calculate(b);

        system("cls");
        if (ceil(result) > result){
            printf("\n\n");
            gridLayout1();
            printf("  \xB3  \xB3");
            printf("  %-35s",a);
            printf("\xB3   \xB3\n");
            printf("  \xB3  \xB3");
            printf("  = %-33f",result);
            printf("\xB3   \xB3\n");
            gridLayout2();
        }
		else{
            printf("\n\n");
            gridLayout1();
            printf("  \xB3  \xB3");
            printf("  %-35s",a);
            printf("\xB3   \xB3\n");
            printf("  \xB3  \xB3");
            printf("  = %-33d",(int)result);
            printf("\xB3   \xB3\n");
            gridLayout2();
        }
        
        saveHistory();

        while(true){

            printf("  Continue? (y/n) : ");
            fflush(stdin);
            scanf("%c",&batas);
            
            if(batas=='y' || batas=='n'){
                break;
            } else{
                printf("Please input an invalid command; y(yes), n(no)\n");
            }
        }
        if(batas=='n'){
            break;
        }

    }
    printf("\n\n\n  Press ESCAPE on your keyboard to main menu");
}
