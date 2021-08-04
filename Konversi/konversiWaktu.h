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

#ifndef konversiWaktu_H
#define konversiWaktu_H

#include <stdio.h>
#include <stdbool.h>
#include <math.h>

#define HOUR 1
#define MINUTE 2
#define SECOND 3
#define EXIT 0

typedef struct {
	float hour, minute, second;
    float timeInput;
}Waktu;

bool isContinue();
/*
- mengecek apakah pengguna mengulang proses kalkulasi
- Mengembalikan true jika iya
- Mengembalikan false jika tidak
*/

bool isValidInput(float input);
/*
- Mengecek apakah inputan sudah tepat yaitu bernilai positif, karena waktu tidak bernilai negatif
- Mengembalikan true jika iya
- Mengembalikan false jika tidak
*/

void printFormat(float number);
/*
- Menampilkan hasil konversi sesuai dengan format yang diinginkan
- layar kosong
- layar berisi isi variable dengan format yang telah ditentukan
*/

void fromHour(Waktu time);
/*
- Mengkonversi satuan jam ke satuan waktu lainnya dan menampilkannya ke layar
- layar kosong
- layar ditampilkan hasil konversi satuan jam ke satuan waktu lainnya
*/

void fromMinute(Waktu time);
/*
- Mengkonversi satuan menit ke satuan waktu lainnya dan menampilkannya ke layar
- layar kosong
- layar ditampilkan hasil konversi satuan menit ke satuan waktu lainnya
*/

void fromSecond(Waktu time);
/*
- Mengkonversi satuan detik ke satuan waktu lainnya dan menampilkannya ke layar
- layar kosong
- layar ditampilkan hasil konversi satuan detik ke satuan waktu lainnya
*/ 

void konversiWaktu();
/*
- Melakukan konversi dari satuan waktu ke satuan waktu lainnya
- layar kosong
- menampilkan hasil konversi satuan waktu ke satuan waktu lainnya
*/


#endif