#include "tree.h"
#include "tree.c"

int main(int argc, char** argv) {
    while(1){
        char a[200];
        printf("Please enter an expression:");
        fflush(stdin);
        scanf("%s",a);
        printf("The expression you entered is: %s\n",a);
        struct TNode* b=(struct TNode *)malloc(sizeof(struct TNode));
        b=buildTree(a,0,strlen(a)-1);
        printf("ssss");
        double result = cal(b);
        printf("%.2f",result);
        if(ceil(result) > result)
        	printf("Your result is %.2f\n",result); 
		else
			printf("Your result is %d\n",(int)result);   
    }

    return 0;
}