#include<stdio.h>
int main(){
    int i,n,term1=0,term2=1,nextTerm;

    printf("Enter the number of terms:");
    scanf("%d",&n);

    printf("Fibonacci Series:");

    for (i = 1; i <= n; ++i ){
        printf("%d",term1);
        nextTerm = term1 + term2;
        term1 = term2;
        term2 = nextTerm;
    }
    return 0;
}