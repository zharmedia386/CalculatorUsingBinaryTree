/*
    POLITEKNIK NEGERI BANDUNG
    D4 Teknik Informatika - 1A
    Developer : 
        - Muhammad Azhar Alauddin (201524013)
        - Muhammad Fauzi Rizki Hamdalah (201524015) 
        - Rifatia Yumna Salma (201524024)
    Program     : Calculator Using Binary Tree
    File        : sistemBilangan.c
    IDE         : DevC++, VS Code
    Compiler    : GCC 4.9.2 
-------------------------------------- */

#include "sistemBilangan.h"

void cls(){
  int i;
  for (i = 0; i < 100; i++){
    printf("\n");
  }
}

void biner(int n){
  if (n > 0) {
    biner(n / 2);
    printf("%d", n % 2);
  }
}

int pangkat(int n, int x){
  int nilai = 1, i;
  for (i = 0; i < x; i++){
    nilai = nilai * n;
  }
  return nilai;
}

int cekdesimal(int x) {
  //checking
  if (x < 0) { //no minus
    return 1;
  }
  //end of checking, all is right
  return 0;
}

int cekbiner(char str[], int * x) {
  int i, dec = 0;
  //checking
  for (i = 0; i < strlen(str); i++) {
    if ((str[i] - '0' != 1) && (str[i] - '0' != 0)) {
      return 1;
    }
  }
  //end of checking, all is right
  for (i = 0; i < strlen(str); i++) {
    if (str[i] - '0' == 1) {
      dec = dec + pangkat(2, strlen(str) - 1 - i);
    }
  }
  * x = dec;
  return 0;
}

int cekoktal(char str[], int * x) {
  int i, dec = 0;
  //checking
  if ((strlen(str) >= 6) && (str[0] > 49)) {
    return 1;
  }
  for (i = 0; i < strlen(str); i++) {
    if (!((str[i] > 47) && (str[i] < 56))) {
      return 1;
    }
  }
  //end of checking, all is right
  for (i = 0; i < strlen(str); i++) {
    dec = dec + (str[i] - '0') * pangkat(8, strlen(str) - 1 - i);
  }
  * x = dec;
  return 0;
}

int cekhexa(char str[], int * x) {
  int i, dec = 0;
  //checking
  for (i = 0; i < strlen(str); i++) {
    if (!(((str[i] > 47) && (str[i] < 58)) || ((str[i] > 96) && (str[i] < 103)) || ((str[i] > 64) && (str[i] < 71)))) {
      return 1;
    }
  }
  //end of checking, all is right
  for (i = 0; i < strlen(str); i++) {
    if ((str[i] >= '0') && (str[i] <= '9')) {
      dec = dec + (str[i] - '0') * pangkat(16, strlen(str) - 1 - i);
    } else if ((str[i] > '@') && (str[i] < 'G')) {
      dec = dec + (str[i] - 55) * pangkat(16, strlen(str) - 1 - i);
    } else if ((str[i] > 96) && (str[i] < 'g')) {
      dec = dec + (str[i] - 87) * pangkat(16, strlen(str) - 1 - i);
    }
  }

  * x = dec;
  return 0;
}

void sistemBilangan() {
  char batasKonversi_bil;
  int x;
  Bilangan number;

  // Anchor
  bilangan_anchor :
  while (true) {
    system("cls");
    printf("\n\n    Basis Angka Masukan\n     1. Desimal\n     2. Biner\n     3. Oktal\n     4. Heksadesimal\n     0. Back to menu konversi\n\n     Choose: ");
    scanf("%d", & x);
    switch (x) {
      case 1:
        system("cls");
        printf("\n\n     Masukan angka desimal (Maksimal 65535): ");
        scanf("%d", &number.dec);
        if (cekdesimal(number.dec) != 0) {
          printf("     Input salah");
          break;
        }
        printf("     Biner: ");
        biner(number.dec);
        printf("\n     Oktal: %o", number.dec);
        printf("\n     Hexa: %X", number.dec);
        break;

      case 2:
        system("cls");
        printf("\n\n     Masukan angka biner (Maksimal 16 bit): ");
        scanf("%s", number.bin);
        if (cekbiner(number.bin, &number.dec) != 0) {
          printf("     Input salah");
          break;
        }
        printf("\n     Desimal: %d", number.dec);
        printf("\n     Oktal: %o", number.dec);
        printf("\n     Hexa: %X", number.dec);
        break;

      case 3:
        system("cls");
        printf("\n\n     Masukan angka Oktal (Maksimal 177777): ");
        scanf("%s", number.oct);
        if (cekoktal(number.oct, &number.dec) != 0) {
          printf("     Input salah");
          break;
        }
        printf("     Desimal: %d", number.dec);
        printf("\n     Biner: ");
        biner(number.dec);
        printf("\n     Hexa: %X", number.dec);
        break;
      
      case 4:
        system("cls");
        printf("\n\n     Masukan angka hexa (Maksimal FFFF): ");
        scanf("%s", number.hex);
        if (cekhexa(number.hex, &number.dec) != 0) {
          printf("     Input salah");
          break;
        }
        printf("     Desimal: %d", number.dec);
        printf("\n     Biner: ");
        biner(number.dec);
        printf("\n     Oktal: %o", number.dec);
        break;
      case 0 :
        break;
      default:
        goto bilangan_anchor;
    }

    if(x == 0)
      break;
    while (true) {
      printf("\n\n  Continue? (y/n) : ");
      fflush(stdin);
      scanf("%c", &batasKonversi_bil);

      if (batasKonversi_bil == 'y' || batasKonversi_bil == 'n') {
        break;
      } else {
        printf("  Please input a valid input\n");
        sleep(1);
      }
    }
    if (batasKonversi_bil == 'n') {
      break;
    }
  }
}
