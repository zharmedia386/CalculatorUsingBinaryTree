#include <stdio.h>
#include <stdbool.h>
#include <math.h>

#define HOUR 1
#define MINUTE 2
#define SECOND 3
#define EXIT 0

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
void fromHour()
{
	float hour, minute, second; 
	
	// validation until correct input
	while(true)
	{
		printf("\n    Masukan Jam : ");
		scanf("%f", & hour);
		
		if(isValidInput(hour))
			break;
		else
			printf("    Your input is not valid\n");
	}
	
	printf("\n    ");
	printFormat(hour);
	printf(" Jam : \n");
	
	minute = hour * 60.0;
	printf("       \xB3\n       \xC0\xC4 ");
	printFormat(minute);
	printf(" menit\n");
	
	second = hour * 3600.0;
	printf("       \xB3\n       \xC0\xC4 ");
	printFormat(second);
	printf(" detik\n");
}

// modul untuk mengkonversi menit ke satuan waktu lain
void fromMinute()
{
	float hour, minute, second;
	
	// validation until correct input
	while(true)
	{
		printf("\n    Masukan Menit : ");
		scanf("%f", & minute);
		
		if(isValidInput(minute))
			break;
		else
			printf("    Your input is not valid\n");
	}
	
	printf("\n    ");
	printFormat(minute);
	printf(" Menit : \n");
	
	hour = minute / 60.0;
	printf("       \xB3\n       \xC0\xC4 ");
	printFormat(hour);
	printf(" jam\n");
	
	second = minute * 60.0;
	printf("       \xB3\n       \xC0\xC4 ");
	printFormat(second);
	printf(" detik\n");
}

// modul untuk mengkonversi detik ke satuan waktu lain
void fromSecond()
{
	float hour, minute, second;
	
	// validation until correct input
	while(true)
	{
		printf("\n    Masukan Detik : ");
		scanf("%f", & second);
		
		if(isValidInput(minute))
			break;
		else
			printf("    Your input is not valid\n");
	}
	
	printf("\n    ");
	printFormat(second);
	printf(" Detik : \n");
	
	hour = second / 3600.0;
	printf("       \xB3\n       \xC0\xC4 ");
	printFormat(hour);
	printf(" jam\n");
	
	minute = second / 60.0;
	printf("       \xB3\n       \xC0\xC4 ");
	printFormat(minute);
	printf(" menit\n");
}

// Modul untuk mengkonversikan waktu
void konversiWaktu()
{   
	int choice;
	// Anchor
	waktu_anchor :
	while(true)
	{
		system("ClS");
		printf("\n\n    Konversikan Waktu Dari Satuan\n     1. Jam\n     2. Menit\n     3. Detik\n        0. Back to menu konversi\n        Choose: ");
		scanf("%d", &choice);
		
		// perform convertion
		switch(choice)
		{
			case HOUR :
				fromHour();
				break;
			
			case MINUTE :
				fromMinute();
				break;
			
			case SECOND :
				fromSecond();
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
