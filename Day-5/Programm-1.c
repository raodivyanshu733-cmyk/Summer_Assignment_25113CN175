#include<stdio.h>
int main(){
    int num,i,sum=0;

    printf("Enter a positive integer:");
    scanf("%d",&num);

    if (num <= 1){
        printf("%d is Not a positive integer:");
        return 0;
    }
    for (i=1;i<=num/2; i++) {
        if (num % i == 0) {
            sum += i;
        }
    }
    if (sum == num){
        printf("%d is a Perfect number.\n",num);    
    } else {
        printf("%d is Not a Perfect number.\n",num);
    }
    return 0;
}