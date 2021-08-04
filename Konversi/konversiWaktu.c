/*
    POLITEKNIK NEGERI BANDUNG
    D4 Teknik Informatika - 1A
    Developer : 
        - Muhammad Azhar Alauddin (201524013)
        - Muhammad Fauzi Rizki Hamdalah (201524015) 
        - Rifatia Yumna Salma (201524024)
    Program     : Calculator Using Binary Tree
    File        : konversiWaktu.c
    IDE         : DevC++, VS Code
    Compiler    : GCC 4.9.2 
-------------------------------------- */

#include "konversiWaktu.h"

// Modul untuk menentukan apakah continue
bool isContinue()
{
	char exit = 'n';
	
	while (true) {
	    printf("\n\n  Continue? (y/n) : ");
	    fflush(stdin);
	    scanf("%c", &exit);
	
	    if (exit == 'y')
	    	return true;
	    else if(exit == 'n')
	    	return false;
	    else
	    	printf("Please input an invalid command; y(yes), n(no)\n");
	      
    }
}

// modul untuk menentukan validasi input konversi
bool isValidInput(float input)
{
	return (input >= 0) ? true : false;
}

// modul untuk menentukan format print dari hasil konversi
void printFormat(float number)
{
	if(ceil(number) > number)
		printf("%f", number);
	else
		printf("%d", (int)number);
	
}

// modul untuk mengkonversi jam ke satuan waktu lain
void fromHour(Waktu time)
{
	// validation until correct input
	while(true)
	{
		printf("\n    Masukan Jam : ");
		scanf("%f", &time.hour);
		
		if(isValidInput(time.hour))
			break;
		else
			printf("    Your input is not valid\n");
	}
	
	printf("\n    ");
	printFormat(time.hour);
	printf(" Jam : \n");
	
	time.minute = time.hour * 60.0;
	printf("       \xB3\n       \xC0\xC4 ");
	printFormat(time.minute);
	printf(" menit\n");
	
	time.second = time.hour * 3600.0;
	printf("       \xB3\n       \xC0\xC4 ");
	printFormat(time.second);
	printf(" detik\n");
}

// modul untuk mengkonversi menit ke satuan waktu lain
void fromMinute(Waktu time)
{
	
	// validation until correct input
	while(true)
	{
		printf("\n    Masukan Menit : ");
		scanf("%f", &time.minute);
		
		if(isValidInput(time.minute))
			break;
		else
			printf("    Your input is not valid\n");
	}
	
	printf("\n    ");
	printFormat(time.minute);
	printf(" Menit : \n");
	
	time.hour = time.minute / 60.0;
	printf("       \xB3\n       \xC0\xC4 ");
	printFormat(time.hour);
	printf(" jam\n");
	
	time.second = time.minute * 60.0;
	printf("       \xB3\n       \xC0\xC4 ");
	printFormat(time.second);
	printf(" detik\n");
}

// modul untuk mengkonversi detik ke satuan waktu lain
void fromSecond(Waktu time)
{
	
	// validation until correct input
	while(true)
	{
		printf("\n    Masukan Detik : ");
		scanf("%f", &time.second);
		
		if(isValidInput(time.minute))
			break;
		else
			printf("    Your input is not valid\n");
	}
	
	printf("\n    ");
	printFormat(time.second);
	printf(" Detik : \n");
	
	time.hour = time.second / 3600.0;
	printf("       \xB3\n       \xC0\xC4 ");
	printFormat(time.hour);
	printf(" jam\n");
	
	time.minute = time.second / 60.0;
	printf("       \xB3\n       \xC0\xC4 ");
	printFormat(time.minute);
	printf(" menit\n");
}

// Modul untuk mengkonversikan waktu
void konversiWaktu()
{   
	Waktu time;
	int choice;
	// Anchor
	waktu_anchor :
	while(true)
	{
		system("ClS");
		printf("\n\n    Konversikan Waktu Dari Satuan\n     1. Jam\n     2. Menit\n     3. Detik\n     0. Back to menu konversi\n        Choose: ");
		scanf("%d", &choice);
		
		// perform convertion
		switch(choice)
		{
			case HOUR :
				fromHour(time);
				break;
			
			case MINUTE :
				fromMinute(time);
				break;
			
			case SECOND :
				fromSecond(time);
				break;
			case EXIT :
				break;
			default :
				goto waktu_anchor;
		}
    if(choice == 0)
			break;
    // ask user to continue
	  if (!isContinue())
	    break;
	}
}
