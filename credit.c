/*
    POLITEKNIK NEGERI BANDUNG
    D4 Teknik Informatika - 1A
    Developer : 
        - Muhammad Azhar Alauddin (201524013)
        - Muhammad Fauzi Rizki Hamdalah (201524015) 
        - Rifatia Yumna Salma (201524024)
    Program     : Calculator Using Binary Tree
    File        : credit.c
    IDE         : DevC++, VS Code
    Compiler    : GCC 4.9.2 
-------------------------------------- */
#include <stdio.h>
#include <conio.h>

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
}