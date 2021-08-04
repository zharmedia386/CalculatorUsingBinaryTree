/*
    POLITEKNIK NEGERI BANDUNG
    D4 Teknik Informatika - 1A
    Developer : 
        - Muhammad Azhar Alauddin (201524013)
        - Muhammad Fauzi Rizki Hamdalah (201524015) 
        - Rifatia Yumna Salma (201524024)
    Program     : Calculator Using Binary Tree
    File        : calculatorGridLayout.c
    IDE         : DevC++, VS Code
    Compiler    : GCC 4.9.2 
-------------------------------------- */
#ifndef applicationUI_C
#define applicationUI_C

#include <stdio.h>
#include <conio.h>
#include <unistd.h>

#define KEYBOARD_TAB 9
#define KEYBOARD_ENTER 13
#define KEYBOARD_ESCAPE 27
#define KEYBOARD_BACKSPACE 8
#define KEYBOARD_F1 59
#define KEYBOARD_HOME 71

//SPLASH SCREEN
// ROS THREE
const char teamTxt[] =
"\t    ______     ______     ______        ______   __  __     ______     ______     ______\n\
\t   /\\  == \\   /\\  __ \\   /\\  ___\\      /\\__  _\\ /\\ \\_\\ \\   /\\  == \\   /\\  ___\\   /\\  ___\n\
\t   \\ \\  __<   \\ \\ \\/\\ \\  \\ \\ \\____     \\/_/\\ \\/ \\ \\  __ \\  \\ \\  __<   \\ \\  __\\   \\ \\  __\\ \n\
\t    \\ \\_\\ \\_\\  \\ \\_____\\  \\ \\_____\\       \\ \\_\\  \\ \\_\\ \\_\\  \\ \\_\\ \\_\\  \\ \\_____\\  \\ \\_____\\\n\
\t     \\/_/ /_/   \\/_____/   \\/_____/        \\/_/   \\/_/\\/_/   \\/_/ /_/   \\/_____/   \\/_____/\n\
";

// PRESENT
const char presentTxt[] =
"\t\t\t\t  ______   ______     ______     ______     ______     __   __     ______\n\
\t\t\t\t /\\  == \\ /\\  == \\   /\\  ___\\   /\\  ___\\   /\\  ___\\   /\\ \"-.\\ \\   /\\__  _\\\n\
\t\t\t\t \\ \\  _-/ \\ \\  __<   \\ \\  __\\   \\ \\___  \\  \\ \\  __\\   \\ \\ \\-.  \\  \\/_/\\ \\/\n\
\t\t\t\t  \\ \\_\\    \\ \\_\\ \\_\\  \\ \\_____\\  \\/\\_____\\  \\ \\_____\\  \\ \\_\\\\\"\\_\\    \\ \\_\\\n\
\t\t\t\t   \\/_/     \\/_/ /_/   \\/_____/   \\/_____/   \\/_____/   \\/_/ \\/_/     \\/_/\n\
";

void showSplashScreen() {
	int i, j;
	
	// lompat ke bagian bawah console
    for ( i = 0; i < 150; i++) 
		printf("\n"); 
	
	printf("%s\n", teamTxt);
	printf("%s\n", presentTxt);
	
	// [modified] from http://HelloACM.com, http://CodingForSpeed.com
    j = 300000;
    for (i = 0; i < 28; i ++) {
        usleep(j); // bergerak lebih cepat
        j = (int)(j * 0.9); // mengurangi durasi sleep setiap perulangan
        printf("\n"); // bergerak sebaris keatas
    }
}

//MAIN MENU
void mainMenu(){
		system("cls");
		printf("\n\n\t================================\n");
		printf("\n\t\t  MAIN MENU\n\n");
		printf(" \t================================\n\n");
		printf("                 [1] Start     \n");
		printf("                 [2] Help     \n");
		printf("                 [3] Color Theme     \n");
		printf("                 [4] History     \n");
        printf("                 [5] Konversi     \n");
        printf("                 [6] Credit     \n");
		printf("                 [7] Exit     \n\n");
		printf("                Choose one : ");
}

//CALCULATOR

//Calculator Grid Layout
void gridLayout(){
	char a = 37;
	// Frame
	printf("  \xDA\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xBF\n");
	printf("  \xB3                                            \xB3\n");
		// Frame For Result Expression
		printf("  \xB3  \xDA\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xBF   \xB3\n");
		printf("  \xB3  \xB3                                     \xB3   \xB3\n");
		printf("  \xB3  \xB3                                     \xB3   \xB3\n");
		printf("  \xB3  \xB3                                     \xB3   \xB3\n");

		
		printf("  \xB3  \xB3                                     \xB3   \xB3\n");
		printf("  \xB3  \xC0\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xD9   \xB3\n");
		
		
		printf("  \xB3                                            \xB3\n");
		

		// Baris 1 : Delete, %, /, *
		printf("  \xB3  \xDA\xC4\xC4\xC4\xC4\xC4\xBF    \xDA\xC4\xC4\xC4\xC4\xC4\xBF    \xDA\xC4\xC4\xC4\xC4\xC4\xBF    \xDA\xC4\xC4\xC4\xC4\xC4\xBF");
		printf("  \xB3\n");
		printf("  \xB3  \xB3 Del \xB3    \xB3  %c  \xB3    \xB3  /  \xB3    \xB3  *  \xB3",a);
		printf("  \xB3\n");
		printf("  \xB3  \xC0\xC4\xC4\xC4\xC4\xC4\xD9    \xC0\xC4\xC4\xC4\xC4\xC4\xD9    \xC0\xC4\xC4\xC4\xC4\xC4\xD9    \xC0\xC4\xC4\xC4\xC4\xC4\xD9");
		printf("  \xB3\n");
		
		// Baris 2 : 7, 8, 9, +
		printf("  \xB3  \xDA\xC4\xC4\xC4\xC4\xC4\xBF    \xDA\xC4\xC4\xC4\xC4\xC4\xBF    \xDA\xC4\xC4\xC4\xC4\xC4\xBF    \xDA\xC4\xC4\xC4\xC4\xC4\xBF");
		printf("  \xB3\n");
		printf("  \xB3  \xB3  7  \xB3    \xB3  8  \xB3    \xB3  9  \xB3    \xB3  +  \xB3");
		printf("  \xB3\n");
		printf("  \xB3  \xC0\xC4\xC4\xC4\xC4\xC4\xD9    \xC0\xC4\xC4\xC4\xC4\xC4\xD9    \xC0\xC4\xC4\xC4\xC4\xC4\xD9    \xC0\xC4\xC4\xC4\xC4\xC4\xD9");
		printf("  \xB3\n");
		
		// Baris 3 : 4, 5, 6, -
		printf("  \xB3  \xDA\xC4\xC4\xC4\xC4\xC4\xBF    \xDA\xC4\xC4\xC4\xC4\xC4\xBF    \xDA\xC4\xC4\xC4\xC4\xC4\xBF    \xDA\xC4\xC4\xC4\xC4\xC4\xBF");
		printf("  \xB3\n");
		printf("  \xB3  \xB3  4  \xB3    \xB3  5  \xB3    \xB3  6  \xB3    \xB3  -  \xB3");
		printf("  \xB3\n");
		printf("  \xB3  \xC0\xC4\xC4\xC4\xC4\xC4\xD9    \xC0\xC4\xC4\xC4\xC4\xC4\xD9    \xC0\xC4\xC4\xC4\xC4\xC4\xD9    \xC0\xC4\xC4\xC4\xC4\xC4\xD9");
		printf("  \xB3\n");
		
		// Baris 4 : 1, 2, 3, ^
		printf("  \xB3  \xDA\xC4\xC4\xC4\xC4\xC4\xBF    \xDA\xC4\xC4\xC4\xC4\xC4\xBF    \xDA\xC4\xC4\xC4\xC4\xC4\xBF    \xDA\xC4\xC4\xC4\xC4\xC4\xBF");
		printf("  \xB3\n");
		printf("  \xB3  \xB3  1  \xB3    \xB3  2  \xB3    \xB3  3  \xB3    \xB3  ^  \xB3");
		printf("  \xB3\n");
		printf("  \xB3  \xC0\xC4\xC4\xC4\xC4\xC4\xD9    \xC0\xC4\xC4\xC4\xC4\xC4\xD9    \xC0\xC4\xC4\xC4\xC4\xC4\xD9    \xC0\xC4\xC4\xC4\xC4\xC4\xD9");
		printf("  \xB3\n");
		
		// Baris 5 : 0, . , = , v
		printf("  \xB3  \xDA\xC4\xC4\xC4\xC4\xC4\xBF    \xDA\xC4\xC4\xC4\xC4\xC4\xBF    \xDA\xC4\xC4\xC4\xC4\xC4\xBF    \xDA\xC4\xC4\xC4\xC4\xC4\xBF");
		printf("  \xB3\n");
		printf("  \xB3  \xB3  0  \xB3    \xB3  .  \xB3    \xB3  =  \xB3    \xB3  v  \xB3");
		printf("  \xB3\n");
		printf("  \xB3  \xC0\xC4\xC4\xC4\xC4\xC4\xD9    \xC0\xC4\xC4\xC4\xC4\xC4\xD9    \xC0\xC4\xC4\xC4\xC4\xC4\xD9    \xC0\xC4\xC4\xC4\xC4\xC4\xD9");
		printf("  \xB3\n");
		
	printf("  \xC0\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xD9");
	
    printf("\n\n");
}

void gridLayout1(){
	// Frame
	printf("  \xDA\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xBF\n");
	printf("  \xB3                                            \xB3\n");
		// Frame For Result Expression
		printf("  \xB3  \xDA\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xBF   \xB3\n");
		printf("  \xB3  \xB3                                     \xB3   \xB3\n");
		printf("  \xB3  \xB3                                     \xB3   \xB3\n");
}

void gridLayout2(){
	char a = 37;
	printf("  \xB3  \xB3                                     \xB3   \xB3\n");
	printf("  \xB3  \xB3                                     \xB3   \xB3\n");
		printf("  \xB3  \xC0\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xD9   \xB3\n");
		
		
		printf("  \xB3                                            \xB3\n");
		
		
		// Baris 1 : Delete, %, /, *
		printf("  \xB3  \xDA\xC4\xC4\xC4\xC4\xC4\xBF    \xDA\xC4\xC4\xC4\xC4\xC4\xBF    \xDA\xC4\xC4\xC4\xC4\xC4\xBF    \xDA\xC4\xC4\xC4\xC4\xC4\xBF");
		printf("  \xB3\n");
		printf("  \xB3  \xB3 Del \xB3    \xB3  %c  \xB3    \xB3  /  \xB3    \xB3  *  \xB3",a);
		printf("  \xB3\n");
		printf("  \xB3  \xC0\xC4\xC4\xC4\xC4\xC4\xD9    \xC0\xC4\xC4\xC4\xC4\xC4\xD9    \xC0\xC4\xC4\xC4\xC4\xC4\xD9    \xC0\xC4\xC4\xC4\xC4\xC4\xD9");
		printf("  \xB3\n");
		
		// Baris 2 : 7, 8, 9, +
		printf("  \xB3  \xDA\xC4\xC4\xC4\xC4\xC4\xBF    \xDA\xC4\xC4\xC4\xC4\xC4\xBF    \xDA\xC4\xC4\xC4\xC4\xC4\xBF    \xDA\xC4\xC4\xC4\xC4\xC4\xBF");
		printf("  \xB3\n");
		printf("  \xB3  \xB3  7  \xB3    \xB3  8  \xB3    \xB3  9  \xB3    \xB3  +  \xB3");
		printf("  \xB3\n");
		printf("  \xB3  \xC0\xC4\xC4\xC4\xC4\xC4\xD9    \xC0\xC4\xC4\xC4\xC4\xC4\xD9    \xC0\xC4\xC4\xC4\xC4\xC4\xD9    \xC0\xC4\xC4\xC4\xC4\xC4\xD9");
		printf("  \xB3\n");
		
		// Baris 3 : 4, 5, 6, -
		printf("  \xB3  \xDA\xC4\xC4\xC4\xC4\xC4\xBF    \xDA\xC4\xC4\xC4\xC4\xC4\xBF    \xDA\xC4\xC4\xC4\xC4\xC4\xBF    \xDA\xC4\xC4\xC4\xC4\xC4\xBF");
		printf("  \xB3\n");
		printf("  \xB3  \xB3  4  \xB3    \xB3  5  \xB3    \xB3  6  \xB3    \xB3  -  \xB3");
		printf("  \xB3\n");
		printf("  \xB3  \xC0\xC4\xC4\xC4\xC4\xC4\xD9    \xC0\xC4\xC4\xC4\xC4\xC4\xD9    \xC0\xC4\xC4\xC4\xC4\xC4\xD9    \xC0\xC4\xC4\xC4\xC4\xC4\xD9");
		printf("  \xB3\n");
		
		// Baris 4 : 1, 2, 3, ^
		printf("  \xB3  \xDA\xC4\xC4\xC4\xC4\xC4\xBF    \xDA\xC4\xC4\xC4\xC4\xC4\xBF    \xDA\xC4\xC4\xC4\xC4\xC4\xBF    \xDA\xC4\xC4\xC4\xC4\xC4\xBF");
		printf("  \xB3\n");
		printf("  \xB3  \xB3  1  \xB3    \xB3  2  \xB3    \xB3  3  \xB3    \xB3  ^  \xB3");
		printf("  \xB3\n");
		printf("  \xB3  \xC0\xC4\xC4\xC4\xC4\xC4\xD9    \xC0\xC4\xC4\xC4\xC4\xC4\xD9    \xC0\xC4\xC4\xC4\xC4\xC4\xD9    \xC0\xC4\xC4\xC4\xC4\xC4\xD9");
		printf("  \xB3\n");
		
		// Baris 5 : 0, . , = , v
		printf("  \xB3  \xDA\xC4\xC4\xC4\xC4\xC4\xBF    \xDA\xC4\xC4\xC4\xC4\xC4\xBF    \xDA\xC4\xC4\xC4\xC4\xC4\xBF    \xDA\xC4\xC4\xC4\xC4\xC4\xBF");
		printf("  \xB3\n");
		printf("  \xB3  \xB3  0  \xB3    \xB3  .  \xB3    \xB3  =  \xB3    \xB3  v  \xB3");
		printf("  \xB3\n");
		printf("  \xB3  \xC0\xC4\xC4\xC4\xC4\xC4\xD9    \xC0\xC4\xC4\xC4\xC4\xC4\xD9    \xC0\xC4\xC4\xC4\xC4\xC4\xD9    \xC0\xC4\xC4\xC4\xC4\xC4\xD9");
		printf("  \xB3\n");
		
	printf("  \xC0\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xD9");
	
    printf("\n\n");
}


// FILE PRINTING
//Help
void help(){
	system("cls");
	char buff[255];
	FILE *fptr;
		
    // membuka file
	if((fptr = fopen("Folder teks/Help.txt","r")) == NULL){
        printf("Error: File tidak ada!");
        exit(1); // Tutup program karena file gak ada.
    }

	while(fgets(buff, sizeof(buff), fptr))
		printf("%s", buff);
	fclose(fptr);
    printf("\n\n\n  Press TAB on your keyboard to main menu");
}

//Color Theme
void showColorList(){

	system("cls");
	char temp[255];
	FILE *pFile;
		
	pFile = fopen("Folder teks/ColorTheme.txt","r");
	while(fgets(temp, sizeof(temp), pFile))
		printf("%s", temp);
	fclose(pFile);

}

//Credit
void credit(){
	system("cls");
	char buff[255];
	FILE *fptr;
		
    // membuka file
	if ((fptr = fopen("Folder teks/Credit.txt","r")) == NULL){
        printf("Error: File tidak ada!");
        // Tutup program karena file gak ada.
        exit(1);
    }

	while(fgets(buff, sizeof(buff), fptr))
		printf("%s", buff);
	fclose(fptr);
    printf("\n\n\n  Press BACKSPACE on your keyboard to main menu");
}

#endif
