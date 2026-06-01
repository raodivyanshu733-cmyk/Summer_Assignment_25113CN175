#include<stdio.h>
int main(){
    int n ,sum=0;
    printf("Enter the number:");
    scanf("%d",&n);
    for(int i=1; i<=n;i++){
        sum=sum+1;

    }
    printf("Sum of first N natural numbers=%d\n",n,sum);
    return 0;
}