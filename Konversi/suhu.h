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

#ifndef suhu_H
#define suhu_H

#include <stdio.h>
#include <string.h>
#include <conio.h>
#include <stdbool.h>
#include <math.h>
#include <time.h>

typedef struct {
	float celcius, reamur, fahrenheit, kelvin;	
}Suhu;

void printInfoKonversi(Suhu suhu);
/*
- Menampilkan hasil konversi
- IS : layar kosong
- FS : tampil hasil perhitungan konversi suhu
*/

void suhu();
/*
- Menghitung pengkonversian suhu
- IS : nilai suhu belum teridentifikasi ke satuan lainnya
- FS : nilai suhu teridentifikasi ke satuan lainnya
*/

#endif