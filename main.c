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
    mainMenu();

    // Memilih mainMenu
    int choice = 0;
    scanf("%c",&choice);

    while(true){
        switch(choice){
            case '1' :
                calculator();
                break;
            case '2' :
                // help();
                break;
            case '3' :
                // colorTheme();
                break;
            case '4' :
                // credit();
                break;
            case '5' :
                exit(0);
                break;
        }
    }

    return 0;
}