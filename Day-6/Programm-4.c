#include<stdio.h>

int main(){
    int i ,number,exponent;
    long Power = 1;

    printf("Enter any number:");
    scanf("%d",&number);

    printf("\n Enter the exponent value:");
    scanf("%d",&exponent);

    for(i=1;i<=exponent ;i++){
        Power = Power * number; 
    }
    printf("\n The final result of %d power %d = %ld ",number,exponent,Power);
    return 0;
}