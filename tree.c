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

double cal(struct TNode *root){
// fucntion to perform calculation of sub tree
    if(root->flag==1){
        switch(root->ch){
            case '+':{
                return cal(root->lChild)+cal(root->rChild);
                break;
            }
            case '-':{
                return cal(root->lChild)-cal(root->rChild);
                break;
            }
            case '/':{
                return cal(root->lChild)/cal(root->rChild);
                break;
            }
            case '*':{
                return cal(root->lChild)*cal(root->rChild);
                break;
            }
            case '^':{
                return pow(cal(root->lChild),cal(root->rChild));
                break;
            }
            case '%':{
                return (cal(root->lChild)*cal(root->rChild))/100;
                break;
            }
        }
    }
    return root->data;
}

double check(char s[],int start,int end){
    
    // Kamus Data
    int i;
    double sum=0;
    
    int flag=1; // postive or negative flag
    int doubleFlag = 0;
    
    double divFactor = 10.0; // bertambah 10x lipat semakin ke posisi kanan dari desimal
    
    /* Algoritma */
    
    // Check negative flag
    if(s[start]=='-'){
        flag=-1;
        start++;
    }
    
    // parse string ke number
    for(i=start;i<=end;i++){
        if(!isdigit(s[i]) && s[i] != '.') 
            return MAX;
        
        // chek apakah string merupakan bilangan decimal
        if(s[i] == DECIMAL_FLAG){
            doubleFlag++;
            i++;
        }
        
        if(!doubleFlag)
            sum=sum*10+s[i]-'0';
        else{
            sum = sum + (s[i] - '0')/divFactor;
            divFactor *= 10;
        }
    }
    
    return sum*flag;
}

void postOrder(struct TNode *root){
    if(root){
        postOrder(root->lChild);
        postOrder(root->rChild);
        if(root->flag==0)
            printf("%f ",root->data);
        else
            printf("%c ",root->ch);   
    }
} 

struct TNode * buildTree(char s[],int start,int end){
    struct TNode * root=(struct TNode *)malloc(sizeof(struct TNode));

	// if there is no char left in s[]
    if(start>end) return NULL;
    
    int posPlusOrSub=0;//Position of plus and minus signs 
    int numPlusOrSub=0;//Number of plus and minus signs 
    int posDivOrMul=0;//Multiply and divide sign position 
    int numDivOrMul=0;//Number of multiplication and division numbers
    int posPowOrPercent = 0; // Power and Percent sign position
    int numPowOrPercent = 0; // Number of the result after powering or percenting
    
    double num;
    num=check(s,start,end);     
    if(num!=0x3f3f3f3f){//Only numbers 
        root->flag=0;
        root->data=num;
        root->lChild=NULL;
        root->rChild=NULL;
        return root;
    }
    
    //There are operators 
    int in_brackets=0;//Identifiers not in parentheses 
    int k;
    for(k=start;k<=end;k++){
        if(s[k]=='(')
            in_brackets++;
        else if(s[k]==')')
            in_brackets--;
        if(!in_brackets){//Outside the brackets 
            if(s[k]=='+'||s[k]=='-'){
                posPlusOrSub=k;
                numPlusOrSub++;
            }
            else if(s[k]=='*'||s[k]=='/'){
                posDivOrMul=k;//Multiply and divide sign position 
                numDivOrMul++;//Number of multiplication and division numbers 
            }
            else if(s[k]=='^' || s[k]=='%'){
                posPowOrPercent=k;
                numPowOrPercent++;
            }
        }
    }
    
    int pos_root;
    //Find the root node with addition and subtraction 
    if(numPlusOrSub)
        pos_root=posPlusOrSub;
    else if(numDivOrMul)
        pos_root=posDivOrMul;
    else if(numPowOrPercent)
        pos_root=posPowOrPercent;
    else //The root cannot be found 
        return buildTree(s,start+1,end-1);
    
    root->flag=1;
    root->ch=s[pos_root];
    root->lChild = buildTree(s,start,pos_root-1);
    root->rChild = buildTree(s,pos_root+1,end);
    return root;
}

#endif
