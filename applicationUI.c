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

void showColorTheme(char kodeWarna[]){
	//Black
 		if(kodeWarna[0] == '0' && kodeWarna[1] == 'A') system("color 0A");
 		if(kodeWarna[0] == '0' && kodeWarna[1] == 'B') system("color 0B");
 		if(kodeWarna[0] == '0' && kodeWarna[1] == 'C') system("color 0C");
 		if(kodeWarna[0] == '0' && kodeWarna[1] == 'D') system("color 0D");
 		if(kodeWarna[0] == '0' && kodeWarna[1] == 'E') system("color 0E");
 		if(kodeWarna[0] == '0' && kodeWarna[1] == 'F') system("color 0F");
 	//Blue
 		if(kodeWarna[0] == '1' && kodeWarna[1] == 'A') system("color 1A");
 		if(kodeWarna[0] == '1' && kodeWarna[1] == 'B') system("color 1B");
 		if(kodeWarna[0] == '1' && kodeWarna[1] == 'C') system("color 1C");
 		if(kodeWarna[0] == '1' && kodeWarna[1] == 'D') system("color 1D");
 		if(kodeWarna[0] == '1' && kodeWarna[1] == 'E') system("color 1E");
 		if(kodeWarna[0] == '1' && kodeWarna[1] == 'F') system("color 1F");
 	//Green
 		if(kodeWarna[0] == '2' && kodeWarna[1] == 'A') system("color 2A");
 		if(kodeWarna[0] == '2' && kodeWarna[1] == 'B') system("color 2B");
 		if(kodeWarna[0] == '2' && kodeWarna[1] == 'C') system("color 2C");
 		if(kodeWarna[0] == '2' && kodeWarna[1] == 'D') system("color 2D");
 		if(kodeWarna[0] == '2' && kodeWarna[1] == 'E') system("color 2E");
 		if(kodeWarna[0] == '2' && kodeWarna[1] == 'F') system("color 2F");
	//Aqua
		if(kodeWarna[0] == '3' && kodeWarna[1] == 'A') system("color 3A");
 		if(kodeWarna[0] == '3' && kodeWarna[1] == 'B') system("color 3B");
 		if(kodeWarna[0] == '3' && kodeWarna[1] == 'C') system("color 3C");
 		if(kodeWarna[0] == '3' && kodeWarna[1] == 'D') system("color 3D");
 		if(kodeWarna[0] == '3' && kodeWarna[1] == 'E') system("color 3E");
 		if(kodeWarna[0] == '3' && kodeWarna[1] == 'F') system("color 3F");
	//Red
		if(kodeWarna[0] == '4' && kodeWarna[1] == 'A') system("color 4A");
 		if(kodeWarna[0] == '4' && kodeWarna[1] == 'B') system("color 4B");
 		if(kodeWarna[0] == '4' && kodeWarna[1] == 'C') system("color 4C");
 		if(kodeWarna[0] == '4' && kodeWarna[1] == 'D') system("color 4D");
 		if(kodeWarna[0] == '4' && kodeWarna[1] == 'E') system("color 4E");
 		if(kodeWarna[0] == '4' && kodeWarna[1] == 'F') system("color 4F");
	//Purple
		if(kodeWarna[0] == '5' && kodeWarna[1] == 'A') system("color 5A");
 		if(kodeWarna[0] == '5' && kodeWarna[1] == 'B') system("color 5B");
 		if(kodeWarna[0] == '5' && kodeWarna[1] == 'C') system("color 5C");
 		if(kodeWarna[0] == '5' && kodeWarna[1] == 'D') system("color 5D");
 		if(kodeWarna[0] == '5' && kodeWarna[1] == 'E') system("color 5E");
 		if(kodeWarna[0] == '5' && kodeWarna[1] == 'F') system("color 5F");
	//Yellow
		if(kodeWarna[0] == '6' && kodeWarna[1] == 'A') system("color 6A");
 		if(kodeWarna[0] == '6' && kodeWarna[1] == 'B') system("color 6B");
 		if(kodeWarna[0] == '6' && kodeWarna[1] == 'C') system("color 6C");
 		if(kodeWarna[0] == '6' && kodeWarna[1] == 'D') system("color 6D");
 		if(kodeWarna[0] == '6' && kodeWarna[1] == 'E') system("color 6E");
 		if(kodeWarna[0] == '6' && kodeWarna[1] == 'F') system("color 6F");
	//White
		if(kodeWarna[0] == '7' && kodeWarna[1] == 'A') system("color 7A");
 		if(kodeWarna[0] == '7' && kodeWarna[1] == 'B') system("color 7B");
 		if(kodeWarna[0] == '7' && kodeWarna[1] == 'C') system("color 7C");
 		if(kodeWarna[0] == '7' && kodeWarna[1] == 'D') system("color 7D");
 		if(kodeWarna[0] == '7' && kodeWarna[1] == 'E') system("color 7E");
 		if(kodeWarna[0] == '7' && kodeWarna[1] == 'F') system("color 7F");
	//Grey
		if(kodeWarna[0] == '8' && kodeWarna[1] == 'A') system("color 8A");
 		if(kodeWarna[0] == '8' && kodeWarna[1] == 'B') system("color 8B");
 		if(kodeWarna[0] == '8' && kodeWarna[1] == 'C') system("color 8C");
 		if(kodeWarna[0] == '8' && kodeWarna[1] == 'D') system("color 8D");
 		if(kodeWarna[0] == '8' && kodeWarna[1] == 'E') system("color 8E");
 		if(kodeWarna[0] == '8' && kodeWarna[1] == 'F') system("color 8F");
	//Light Blue
		if(kodeWarna[0] == '9' && kodeWarna[1] == 'A') system("color 9A");
 		if(kodeWarna[0] == '9' && kodeWarna[1] == 'B') system("color 9B");
 		if(kodeWarna[0] == '9' && kodeWarna[1] == 'C') system("color 9C");
 		if(kodeWarna[0] == '9' && kodeWarna[1] == 'D') system("color 9D");
 		if(kodeWarna[0] == '9' && kodeWarna[1] == 'E') system("color 9E");
 		if(kodeWarna[0] == '9' && kodeWarna[1] == 'F') system("color 9F");

	// Keluar
		printf("\n\n\n  Press ENTER on your keyboard to main menu");
 }
#endif
