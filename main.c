/*
    POLITEKNIK NEGERI BANDUNG
    D4 Teknik Informatika - 1A
    Developer : 
        - Muhammad Azhar Alauddin (201524013)
        - Muhammad Fauzi Rizki Hamdalah (201524015) 
        - Rifatia Yumna Salma (201524024)
    Program     : Calculator Using Binary Tree
    File        : main.c
    IDE         : DevC++, VS Code
    Compiler    : GCC 4.9.2 
-------------------------------------- */

#include "tree.h"
#include "tree.c"
#include "mainMenu.c"
#include "calculator.c"
#include "help.c"
#include "colorTheme.c"
#include "credit.c"

int main(int argc, char** argv) {

    // Main Menu
    menu:
    mainMenu();

    // Memilih mainMenu
    int choice = 0;
    scanf("%d",&choice);

    while(true){
        switch(choice){
            case 1 :
                calculator();
                getch();
                goto menu;
                break;
            case 2 :
                help();
                getch();
                goto menu;
                break;
            case 3 :
                chooseColorTheme();
                scanf("%s",&kodeWarna);
                showColorTheme(kodeWarna);
                getch();
                goto menu;
                break;
            case 4 :
                credit();
                getch();
                goto menu;
                break;
            case 5 :
                exit(0);
                break;
        }
    }

    return 0;
}