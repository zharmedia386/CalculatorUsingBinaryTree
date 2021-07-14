/*
    POLITEKNIK NEGERI BANDUNG
    D4 Teknik Informatika - 1A
    Developer : 
        - Muhammad Azhar Alauddin (201524013)
        - Muhammad Fauzi Rizki Hamdalah (201524015) 
        - Rifatia Yumna Salma (201524024)
    Program     : Calculator Using Binary Tree
    File        : colorTheme.c
    IDE         : DevC++, VS Code
    Compiler    : GCC 4.9.2 
-------------------------------------- */
#include <stdio.h>

char kodeWarna[1];

void chooseColorTheme(){
	system("cls");
	char temp[255];
	FILE*pFile;
		
	pFile = fopen("ColorTheme.txt","r");
	while(fgets(temp,sizeof(temp),pFile))
		printf("%s",temp);
	fclose(pFile);
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
	//Gray
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
 }