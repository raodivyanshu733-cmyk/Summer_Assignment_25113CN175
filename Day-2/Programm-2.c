#include<stdio.h>
int main(){
    int n,reminder,reverse;
    printf("Please enter the Number to reverse:");
    scanf("%d",&n);

    while(n>0){
        reminder=n%10;
        reverse=reverse*10+reminder;
        n=n/10;
    }
    printf("Reverse of number is =%d\n",reverse);
    return 0;
}