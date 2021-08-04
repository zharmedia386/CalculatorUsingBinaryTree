/*
    POLITEKNIK NEGERI BANDUNG
    D4 Teknik Informatika - 1A
    Developer : 
        - Muhammad Azhar Alauddin (201524013)
        - Muhammad Fauzi Rizki Hamdalah (201524015) 
        - Rifatia Yumna Salma (201524024)
    Program     : Calculator Using Binary Tree
    File        : calculator.h
    IDE         : DevC++, VS Code
    Compiler    : GCC 4.9.2 
-------------------------------------- */

#ifndef sistemBilangan_H
#define sistemBilangan_H

#include <stdio.h>
#include <string.h>
#include <conio.h>
#include <stdbool.h>
#include <time.h>

typedef struct {
    int dec;
    char oct[6], bin[16], hex[4];
}Bilangan;

void biner(int n);
/*
- Menampilkan hasil bilangan biner
- IS : layar kosong
- FS : layar menjadi tampilan hasil perhitungan bilangan biner
*/

int pangkat(int n, int x);
/*
- Mengembalikkan nilai yang dipangkatkan
*/

int cekdesimal(int dec);
/*
- Mengecek desimal atau tidaknya suatu bilangan
- Mengembalikan 1 jika tidak ada bilangan negatif dan 0 jika positif
*/

int cekbiner(char bin[], int * dec);
/*
- Mengecek biner atau tidaknya suatu bilangan
- Mengembalikan 1 jika bilangan yang dicek adalah bilangan biner dan 0 jika bukan
*/

int cekoktal(char oct[], int * dec);
/*
- Mengecek oktal atau tidaknya suatu bilangan
- Mengembalikan 1 jika bilangan yang dicek adalah bilangan oktal dan 0 jika bukan
*/

int cekhexa(char hex[], int * dec);
/*
- Mengecek hexa atau tidaknya suatu bilangan
- Mengembalikan 1 jika bilangan yang dicek adalah bilangan hexa dan 0 jika bukan
*/

void sistemBilangan();
/*
- Menampilkan pilihan konversi bilangan
- IS : tampilan konversi menu
- FS : tampilan memilih bilangan yang akan dikonversikan
*/

#endif