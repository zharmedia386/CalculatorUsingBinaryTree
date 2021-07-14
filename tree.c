/*
    POLITEKNIK NEGERI BANDUNG
    D4 Teknik Informatika - 1A
    Developer : 
        - Muhammad Azhar Alauddin (201524013)
        - Muhammad Fauzi Rizki Hamdalah (201524015) 
        - Rifatia Yumna Salma (201524024)
    Program     : Calculator Using Binary Tree
    File        : tree.c
    IDE         : DevC++, VS Code
    Compiler    : GCC 4.9.2 
-------------------------------------- */

#include "tree.h"

#ifndef tree_C
#define tree_C

double calculate(addrNode root) {
	
	// root adalah operator
    if(root->isSymbol){
    	// Tentukan operand dan hitung
        switch(root->symbol){
            case PLUS:{
                return calculate(root->leftChild) + calculate(root->rightChild);
                break;
            }
            case MINUS:{
                return calculate(root->leftChild) - calculate(root->rightChild);
                break;
            }
            case DIVISION:{
                if(calculate(root->rightChild) == 0)
                    printf("Math Error: Can't Divide by Zero\n");
                else
                    return calculate(root->leftChild) / calculate(root->rightChild);
                break;
            }
            case MULTIPLY:{
                return calculate(root->leftChild) * calculate(root->rightChild);
                break;
            }
            case POWER:{
                return pow(calculate(root->leftChild),calculate(root->rightChild));
                break;
            }
            case PERCENTAGE:{
                return (calculate(root->leftChild)*calculate(root->rightChild))/100;
                break;
            }
            case SQUARE_ROOT:{
                return pow(calculate(root->leftChild),1/calculate(root->rightChild));
                break;
            }
        }
    }
    
    // root adalah operator
    return root->number;
}

double checkString(char str[],int start,int end){
	int i;
    int flag=1; // postive or negative flag
    int doubleFlag = 0;
    double sum=0; // hasil konversi
    double divFactor = 10.0; // bertambah 10x lipat semakin ke posisi kanan dari simbol desimal
    
    
    // Check apakah bilangan negatif
    if (str[start] == MINUS){
        flag=-1;
        start++;
    }
    
    // Parsing string ke number
    for (i = start; i <= end; i++){
    	// Jika char adalah simbol operand dan bukan desimal
        if (!isdigit(str[i]) && str[i] != DECIMAL) 
            return MAX;
        
        // Check apakah bilangan desimal
        if (str[i] == DECIMAL){
            doubleFlag++;
            i++;
        }
        
        // konversi char ke number
        if (!doubleFlag)
            sum=sum*10+str[i]-'0';
        else{
            sum = sum + (str[i] - '0')/divFactor;
            divFactor *= 10;
        }
    }
    
    return sum*flag;
}

int findOperator(char str[],int start,int end) {
	int posPlusOrSub=0;//Position of plus and minus signs 
    int numPlusOrSub=0;//Number of plus and minus signs 
    int posDivOrMul=0;//Multiply and divide sign position 
    int numDivOrMul=0;//Number of multiplication and division numbers
    int posPowOrPercent = 0; // Power and Percent sign position
    int numPowOrPercent = 0; // Number of the result after powering or percenting
 
    int in_brackets=0; //Identifiers not in parentheses 
    int k;
    
    // Tentukan jumlah dan posisi semua operator pada string
    for(k = start; k <= end; k++){
        if(str[k] == OPEN_BRACKET)
            in_brackets++;
        else if(str[k] == CLOSE_BRACKET)
            in_brackets--;
        
        // Jika diluar tanda kurung
        if(!in_brackets){
            if(str[k] == PLUS || str[k] == MINUS){
                posPlusOrSub=k;
                numPlusOrSub++;
            }
            else if(str[k] == MULTIPLY || str[k] == DIVISION){
                posDivOrMul=k;
                numDivOrMul++; 
            }
            else if(str[k] == POWER || str[k] == PERCENTAGE || str[k] == SQUARE_ROOT){
                posPowOrPercent=k;
                numPowOrPercent++;
            }
        }
    }
    
    // posisi operator yang diprioritaskan
    int posOperator = -1;
    
    //Temukan posisi root node dimulai dengan urutan operator derajat terendah
    if(numPlusOrSub)
        posOperator=posPlusOrSub;
    else if(numDivOrMul)
        posOperator=posDivOrMul;
    else if(numPowOrPercent)
        posOperator=posPowOrPercent;
    
    return posOperator;
}

addrNode constructTree(char str[],int start,int end){
    addrNode root=(addrNode)malloc(sizeof(struct TNode));

	// if there is no char left in s[]
    if(start>end) 
		return NULL;
    
    double num = checkString(str,start,end);
	
	// Jika string hanya berisi operand  
    if(num!=0x3f3f3f3f){
        root->isSymbol = false;
        root->number = num;
        root->leftChild = NULL;
        root->rightChild = NULL;
        return root;
    }
    
    // Temukan posisi operator prioritas
    int pos_root = findOperator(str, start, end);
    
    // Jika tidak ada operator
    if(pos_root == -1) 
        return constructTree(str,start+1,end-1);
    
    // membuat root berisi operator
    root->isSymbol = true;
    root->symbol = str[pos_root];
    root->leftChild = constructTree(str,start,pos_root-1);
    root->rightChild = constructTree(str,pos_root+1,end);
    
    return root;
}

#endif
