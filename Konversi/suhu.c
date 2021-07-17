#include <stdio.h>
#include <string.h>
#include <conio.h>
#include <stdbool.h>
#include <math.h>

void printInfoKonversi(float celcius, float reamur, float fahrenheit, float kelvin){
    printf(" -----------------------------------------------------\n");
    printf(" |                 KONVERSI SUHU                     |\n");
    printf(" -----------------------------------------------------\n");
    printf(" |  Celcius  |  Reamur   |   Fahrenheit |   Kelvin   |\n");
    printf(" -----------------------------------------------------\n");
    printf(" |  %.2f    |  %.2f    |   %.2f      |   %.2f   |\n", celcius, reamur, fahrenheit, kelvin);
    printf(" -----------------------------------------------------\n");
}

void suhu(){
    char batasKonversi_suhu;
    int pilihan;
    float celcius, reamur, fahrenheit, kelvin;

    while(true){
        system("cls");
        printf("\n\n    Basis suhu masukan\n\n     [1] Celcius\n     [2] Reamur\n     [3] Fahrenheit\n     [4] Kelvin\n\n        Choose: ");
        scanf("%d", &pilihan);

        switch(pilihan){
            case 1 :
                system("cls");
                printf("\n\n     Masukan nilai Celcius: ");
                scanf("%f", &celcius);
                
                reamur = celcius * 4/5;
                fahrenheit = (celcius * 9/5) + 32;
                kelvin = celcius + 273.15;
                
                printInfoKonversi(celcius, reamur, fahrenheit, kelvin);

                break;

            case 2 :
                system("cls");
                printf("\n\n     Masukan nilai Reamur: ");
                scanf("%f", &reamur);

                celcius = reamur * 5/4;
                fahrenheit = (reamur * 9/4) + 32;
                kelvin = (reamur * 5/4) + 273.15;
                
                printInfoKonversi(celcius, reamur, fahrenheit, kelvin);

                break;

            case 3 :
                system("cls");
                printf("\n\n     Masukan nilai Fahrenheit: ");
                scanf("%f", &fahrenheit);

                celcius = (fahrenheit-32) * 5/9;
                reamur = (fahrenheit-32) * 4/9;
                kelvin = ((fahrenheit-32) * 5/9) + 273.15;
                
                printInfoKonversi(celcius, reamur, fahrenheit, kelvin);

                break;
            
            case 4 :
                system("cls");
                printf("\n\n     Masukan nilai Kelvin: ");
                scanf("%f", &kelvin);

                celcius =  kelvin - 273.15;
                reamur = (kelvin - 273.15) * 4/5;
                fahrenheit =  ((kelvin - 273.15) * 9/5) + 32;
                
                printInfoKonversi(celcius, reamur, fahrenheit, kelvin);

                break;
        }

        while (true) {
            printf("\n\n  Continue? (y/n) : ");
            fflush(stdin);
            scanf("%c", &batasKonversi_suhu);

            if (batasKonversi_suhu == 'y' || batasKonversi_suhu == 'n') {
                break;
            } else {
                printf("Please input an invalid command; y(yes), n(no)\n");
            }
        }
        if (batasKonversi_suhu=='n'){
            break;
        }

    }
}