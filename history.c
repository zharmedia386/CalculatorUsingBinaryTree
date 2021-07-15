#include <stdio.h>
#include <string.h>
#include <time.h>
#include "tree.h"

struct history{
		char ekspresi[200];
    double fresult;
		char time[100];
}Record;

int saveHistory(){
    FILE* pFile = 0;
    struct history Record;
    time_t _time;
    
    time (&_time);
    struct tm *tmi;
	  tmi = localtime (&_time);
    strftime (Record.time,100,"%d %b %Y %H:%M",tmi);
        
    strcpy(Record.ekspresi, a);
    Record.fresult = result;

    fopen_s(&pFile,"history.dat","ab+"); // append and update binary, can be read
    if(!pFile)
    return 1; //fopen error

    fwrite(&Record,sizeof(Record),1,pFile);
    fclose(pFile);
        
    return 0;
}

int readHistory(){  //
    system("cls");
    FILE* pFile = 0;
    int i = 1;
    pFile = fopen("history.dat","ab+"); // append and update binary, can be read
    if(!pFile)
      return 1; //fopen error
    printf("\n\n\t===============================================\n");
    printf("\n\t\t          History\n\n");
		printf(" \t===============================================\n\n");
    printf( "  \xDA\xC4\xC4\xC2\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC2\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC2\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xBF\n" );
    printf( "  \xB3%-2s\xB3%-20s\xB3%-40s\xB3%-20s\xB3\n", "No","Time", "Arithmetic Expression", "Result");
    printf( "  \xC3\xC4\xC4\xC5\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC5\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC5\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xB4\n" );

    do{
        fseek(pFile,(-i)*sizeof(Record),SEEK_END);
        fread(&Record,sizeof(Record),1,pFile);
        if(!feof(pFile) && i <= 18){
            if (ceil(result) > result)
                printf("  \xB3%-2d\xB3%-20s\xB3%-40s\xB3%-20f\xB3\n", i++, Record.time, Record.ekspresi, Record.fresult);
            else
                printf("  \xB3%-2d\xB3%-20s\xB3%-40s\xB3%-20d\xB3\n", i++, Record.time, Record.ekspresi, (int)Record.fresult);
        }
    }while(!feof(pFile) && i <= 18);
    printf( "  \xC0\xC4\xC4\xC1\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC1\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC1\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xD9" );
        
    fclose(pFile);

    printf("\n\n\n  Press F1 on your keyboard to main menu"); 

    return 0;
}