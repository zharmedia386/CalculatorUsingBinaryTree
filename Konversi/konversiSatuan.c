#include <stdio.h>
#include <conio.h>
#include <stdbool.h>
#include "konversiGridLayout.c"
#include "sistemBilangan.c"
#include "konversiWaktu.c"
#include "suhu.c"

void konversiMenu() {
  system("cls");
  printf("\n\n\t================================\n");
  printf("\n\t\t  KONVERSI\n\n");
  printf(" \t================================\n\n");
  printf("                 [1] Suhu     \n");
  printf("                 [2] Sistem Bilangan     \n");
  printf("                 [3] Waktu     \n");
  // printf("                 [4] History     \n");
  // printf("                 [5] Konversi     \n");
  // printf("                 [6] Credit     \n");
  printf("                 [0] Back to Main Menu     \n\n");
  printf("                Choose one : ");
}

void konversiSatuan() {
  // Batas Konversi
  char batasKonversi;
  // Menu Konversi
  int choiceKonversi = 0;
  // Grid Layout
//  konversiGridLayout();
   konversiMenu();
  // KonversiMenu
  scanf("%d", &choiceKonversi);

  while (true) {
    switch (choiceKonversi) {
      case 1:
        suhu();
        printf("\n\n\n  Press any keys on your keyboard to main menu");
        getch();
        konversiSatuan();
        break;
      case 2:
        sistemBilangan();
        printf("\n\n\n  Press any keys on your keyboard to main menu");
        getch();
        konversiSatuan();
        break;
      case 3:
        konversiWaktu();
        printf("\n\n\n  Press any keys on your keyboard to main menu");
        getch();
        konversiSatuan();
        break;
      case 0 :
        break;
      default:
        break;
    }
    if(choiceKonversi == 0){
      system("cls");
      printf("\n\n\n  Press HOME on your keyboard to main menu");
    }
    break;
  }
}
