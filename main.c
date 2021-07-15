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
#include "history.c"
#include "splashScreen.c"

int main(int argc, char** argv) {
	// Show Splash Scree
//	showSplashScreen();
	
    // Main Menu
    menu:
    mainMenu();

    // Memilih mainMenu
    int choice = 0;
    scanf("%d", &choice);

    while(true){
        switch(choice){
            case 1 :
                calculator();
                while(true){
                    fflush(stdin);
                    char input = getch();
                    if((int) input == KEYBOARD_ESCAPE) goto menu;
		        }
                break;
            
            case 2 :
                help();
                while(true){
                    fflush(stdin);
                    char input = getch();
                    if((int) input == KEYBOARD_TAB) goto menu;
		        }       
                break;
            
            case 3 :
                chooseColorTheme();
                scanf("%s",&kodeWarna);
                showColorTheme(kodeWarna);
                while(true){
                    fflush(stdin);
                    char input = getch();
                    if((int) input == KEYBOARD_ENTER) goto menu;
		        }    
                break;
            
            case 4 :
                readHistory();
                while(true){
                    fflush(stdin);
                    char input = getch();
                    if((int) input == KEYBOARD_F1) goto menu;
		        }    
                break;
            
            case 5 :
                credit();
                while(true){
                    fflush(stdin);
                    char input = getch();
                    if((int) input == KEYBOARD_BACKSPACE) goto menu;
		        }    
                break;
            
            case 6 :
                exit(0);
                break;
            default :
            	goto menu;
        }
    }

    return 0;
}
