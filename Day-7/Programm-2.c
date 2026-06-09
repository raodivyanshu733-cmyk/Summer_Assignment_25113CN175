#include<stdio.h>
int fibonacci(int n){
    if (n <= 1){
        return n;
    }
    return fibonacci(n-1)+fibonacci(n-2);
}
int main(){
    int terms;
    printf("Enter the numberof terms : ");
    if(scanf("%d",&terms)!=1||terms<0){
        printf("Enter a valid non - negative integer.\n");
        return 1;
    }
    printf("fibonacci Seris:");
    for(int i=0;i<terms;i++){
        printf("%d",fibonacci(i));
    }
    printf("\n");
    return 0;
}