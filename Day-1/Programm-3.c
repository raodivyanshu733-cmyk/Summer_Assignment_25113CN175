#include<stdio.h>
int main(){
    int n,i;
    unsigned long long fact =1;
    printf("Enter the Number:");
    scanf("%d",&n);
    if(n<0)
     printf("Factorial of negative number does not exist");
    else{
        for(i=1;i<=n;i++){
            fact *= i;
        }
        printf("Factorial of %d = %11u",n,fact);
    } 
    return 0;
}