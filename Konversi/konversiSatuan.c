/*
    POLITEKNIK NEGERI BANDUNG
    D4 Teknik Informatika - 1A
    Developer : 
        - Muhammad Azhar Alauddin (201524013)
        - Muhammad Fauzi Rizki Hamdalah (201524015) 
        - Rifatia Yumna Salma (201524024)
    Program     : Calculator Using Binary Tree
    File        : konversiSatuan.c
    IDE         : DevC++, VS Code
    Compiler    : GCC 4.9.2 
-------------------------------------- */

#include <stdio.h>
#include <conio.h>
#include <stdbool.h>
#include "konversiUI.c"
#include "sistemBilangan.c"
#include "konversiWaktu.c"
#include "suhu.c"


void konversiSatuan() {
  // Batas Konversi
  char batasKonversi;
  // Menu Konversi
  int choiceKonversi = 0;
  // Grid Layout
//  konversiGridLayout();
   konversi_anchor :
   konversiMenu();
  // KonversiMenu
  scanf("%d", &choiceKonversi);

  while (true) {
    switch (choiceKonversi) {
      case 1:
        suhu();
        printf("\n\n\n  Press any keys on your keyboard to conversion menu");
        getch();
        goto konversi_anchor;
        break;
      case 2:
        sistemBilangan();
        printf("\n\n\n  Press any keys on your keyboard to conversion menu");
        getch();
        goto konversi_anchor;
        break;
      case 3:
        konversiWaktu();
        printf("\n\n\n  Press any keys on your keyboard to conversion menu");
        getch();
        goto konversi_anchor;
        break;
      case 0 :
        break;
      default:
        goto konversi_anchor;
    }
    if(choiceKonversi == 0){
      printf("\n\n\n  Press HOME on your keyboard to conversion menu");
    }
    break;
  }
}
