/*
    POLITEKNIK NEGERI BANDUNG
    D4 Teknik Informatika - 1A
    Developer : 
        - Muhammad Azhar Alauddin (201524013)
        - Muhammad Fauzi Rizki Hamdalah (201524015) 
        - Rifatia Yumna Salma (201524024)
    Program     : Calculator Using Binary Tree
    File        : suhu.c
    IDE         : DevC++, VS Code
    Compiler    : GCC 4.9.2 
-------------------------------------- */

#include "suhu.h"

void printInfoKonversi(Suhu suhu){
    printf(" -----------------------------------------------------\n");
    printf(" |                 KONVERSI SUHU                     |\n");
    printf(" -----------------------------------------------------\n");
    printf(" |  Celcius  |  Reamur   |   Fahrenheit |   Kelvin   |\n");
    printf(" -----------------------------------------------------\n");
    printf(" |  %.2f    |  %.2f    |   %.2f      |   %.2f   |\n", suhu.celcius, suhu.reamur, suhu.fahrenheit, suhu.kelvin);
    printf(" -----------------------------------------------------\n");
}

void suhu(){
    char batasKonversi_suhu;
    int pilihan;
    Suhu suhu;
    // Anchor
    suhu_anchor :
    while(true){
        system("cls");
        printf("\n\n    Basis suhu masukan\n\n     [1] Celcius\n     [2] Reamur\n     [3] Fahrenheit\n     [4] Kelvin\n     [0] Back to menu konversi\n\n     Choose: ");
        scanf("%d", &pilihan);

        switch(pilihan){
            case 1 :
                system("cls");
                printf("\n\n     Masukan nilai Celcius: ");
                scanf("%f", &suhu.celcius);
                
                suhu.reamur = suhu.celcius * 4/5;
                suhu.fahrenheit = (suhu.celcius * 9/5) + 32;
                suhu.kelvin = suhu.celcius + 273.15;
                
                printInfoKonversi(suhu);

                break;

            case 2 :
                system("cls");
                printf("\n\n     Masukan nilai Reamur: ");
                scanf("%f", &suhu.reamur);

                suhu.celcius = suhu.reamur * 5/4;
                suhu.fahrenheit = (suhu.reamur * 9/4) + 32;
                suhu.kelvin = (suhu.reamur * 5/4) + 273.15;
                
                printInfoKonversi(suhu);

                break;

            case 3 :
                system("cls");
                printf("\n\n     Masukan nilai Fahrenheit: ");
                scanf("%f", &suhu.fahrenheit);

                suhu.celcius = (suhu.fahrenheit-32) * 5/9;
                suhu.reamur = (suhu.fahrenheit-32) * 4/9;
                suhu.kelvin = ((suhu.fahrenheit-32) * 5/9) + 273.15;
                
                printInfoKonversi(suhu);

                break;
            
            case 4 :
                system("cls");
                printf("\n\n     Masukan nilai Kelvin: ");
                scanf("%f", &suhu.kelvin);

                suhu.celcius =  suhu.kelvin - 273.15;
                suhu.reamur = (suhu.kelvin - 273.15) * 4/5;
                suhu.fahrenheit =  ((suhu.kelvin - 273.15) * 9/5) + 32;
                
                printInfoKonversi(suhu);

                break;
            case 0 :
                break;
            default :
                goto suhu_anchor;
        }
        if(pilihan == 0)
            break;
        while (true) {
            printf("\n\n  Continue? (y/n) : ");
            fflush(stdin);
            scanf("%c", &batasKonversi_suhu);

            if (batasKonversi_suhu == 'y' || batasKonversi_suhu == 'n') {
                break;
            } else {
                printf("  Please input a valid input\n");
                sleep(1);
            }
        }
        if (batasKonversi_suhu=='n'){
            break;
        }

    }
}