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
#include "applicationUI.c"

void chooseColorTheme() {

	char kodeWarna[2];
	char temp[255];

	showColorList();
	scanf("%s", &kodeWarna);
	showColorTheme(kodeWarna);
}
