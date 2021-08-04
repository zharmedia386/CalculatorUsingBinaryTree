/*
    POLITEKNIK NEGERI BANDUNG
    D4 Teknik Informatika - 1A
    Developer : 
        - Muhammad Azhar Alauddin (201524013)
        - Muhammad Fauzi Rizki Hamdalah (201524015) 
        - Rifatia Yumna Salma (201524024)
    Program     : Calculator Using Binary Tree
    File        : calculator.c
    IDE         : DevC++, VS Code
    Compiler    : GCC 4.9.2 
-------------------------------------- */


#include "calculator.h"

#ifndef calculator_C
#define calculator_C

void createCalculator(Calculator *calculator) {
	// pemberian nilai default
	memset(calculator->expression, '\0', sizeof(calculator->expression));
	calculator->result = 0;
	calculator->expressionTree = (struct TNode *)malloc(sizeof(struct TNode));
}

bool isValidExpression(char *expression) {
	int i;
	
	// Check apakah pada string terdapat simbol yang bukan operator atau tidak valid
	for(i=strlen(expression)-1 ; i>=0 ; i--){
        if(!isdigit(expression[i]) 	&& expression[i] != MINUS && expression[i] != PLUS 
							&& expression[i] != DIVISION && expression[i] != MULTIPLY 
							&& expression[i] != POWER && expression[i] != PERCENTAGE && expression[i] != SQUARE_ROOT 
							&& expression[i] != DECIMAL && expression[i] != OPEN_BRACKET && expression[i] != CLOSE_BRACKET) {
			printf("  Please input a valid input\n");		
			return false;				
		}
    }
    
    return true;
}

void checkFirstChar(char *expression) {
	int i;
	
	// Menambahkan 0 di awal string, jika inputan indeks pertama negatif
    if(expression[0] == '-'){
        for(i=strlen(expression)-1 ; i>=0 ; i--){
                expression[i+1] = expression[i];
        }

        expression[0] = '0';
    }
}

void insertExpression(Calculator *calculator) {
	// melakukan proses insertion
	printf("\n\n");
    gridLayout();
    printf("  Please enter an expression:");
    fflush(stdin);
    scanf("%s", calculator->expression);
    printf("\n\n");
}

bool calculateExpression(Calculator *calculator, addrNode root) {
	bool isSuccess = true;
	
	// hitung hasil dari ekspresi pada tree
	calculator->result = calculate(root,&isSuccess);
	
	// kembalikan status perhitungan
	return isSuccess;
}

void printResult(Calculator calculator, bool isSuccess) {
	system("cls");
	
	// print calculator sesuai dengan format
    if(!isSuccess){
    	// jika proses kalkulasi tidak berhasil
        printf("\n\n");
        gridLayout1();
        printf("  \xB3  \xB3");
        printf("  %-35s",calculator.expression);
        printf("\xB3   \xB3\n");
        printf("  \xB3  \xB3");
        printf("  = %-33s","Math Error: Can't Divide by Zero");
        printf("\xB3   \xB3\n");
        gridLayout2();
        sleep(2);
    }
    else if (ceil(calculator.result) > calculator.result){
    	// jika proses kalkulasi berhasil dan hasilnya adalah bilangan desimal
        printf("\n\n");
        gridLayout1();
        printf("  \xB3  \xB3");
        printf("  %-35s",calculator.expression);
        printf("\xB3   \xB3\n");
        printf("  \xB3  \xB3");
        printf("  = %-33f",calculator.result);
        printf("\xB3   \xB3\n");
        gridLayout2();
    }
	else{
		// jika proses kalkulasi berhasil dan hasilnya adalah bilangan bulat
        printf("\n\n");
        gridLayout1();
        printf("  \xB3  \xB3");
        printf("  %-35s",calculator.expression);
        printf("\xB3   \xB3\n");
        printf("  \xB3  \xB3");
        printf("  = %-33d",(int)calculator.result);
        printf("\xB3   \xB3\n");
        gridLayout2();
    }
}

bool isContinueCalculator() {
	char choice;
	
	// tentukan apakah user mengulang proses atau tidak
	while(true){

    	printf("  Continue? (y/n) : ");
        fflush(stdin);
        scanf("%c", &choice);
            
        if(choice == 'y'){
            return true;
        }else if(choice == 'n') {
        	return false;
		}else {
            printf("Please input an invalid command; y(yes), n(no)\n");
        }
    }
}
#endif
