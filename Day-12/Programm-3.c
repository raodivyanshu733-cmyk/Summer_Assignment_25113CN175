#include<stdio.h>

void printFibonacci(int n){

    if (n <= 0){
        printf("Enter a positive integer greater than 0.\n");
        return ;
    }
    unsigned long long first = 0, second = 1,next;

    printf("Fibonacci series:");

    for (int i=0;i<n;i++){
        if (i == 0){
            printf("%llu",first);
        }else if(i==1){
            printf("%llu",second);
        }else{
            next = first + second;
            first = second;
            second = next;
            printf(",%llu",next);
        }
    }
    printf("\n");
}
int main (){
    int terms;

    printf("Enter the number of terms:");
    if (scanf("%d",&terms) !=1){
        printf("Invalid input.\n");
        return 1;
    }
    printFibonacci(terms);

    return 0;
}