#include<stdio.h>
unsigned long long findFactorial(int n);

int main(){
    int number;

    printf("Enter a positive integer:");
    if (scanf("%d",&number)!=1){
        printf("Invalid input");
        return 1;
    }
    if (number < 0){
        printf("Error:factorial is not defined for negative numbers.\n");
    }else{
        unsigned long long result = findFactorial(number);
        printf("Factorial of %d = %llu",number,result); 
    }
    return 0;
}
unsigned long long findFactorial(int n){
    unsigned long long fact = 1;

    for(int i=1; i <= n;i++){
        fact *= i;
    }
    return fact;
}