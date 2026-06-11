#include<stdio.h>

int getMax(int num1, int num2);

int main(){
    int a,b,maximum;

    printf("Enter two integer:");
    scanf("%d %d",&a,&b);

    maximum = getMax(a,b);

    printf("The maximum vaue is:%d\n",maximum);
    return 0;
}
int getMax(int num1, int num2){
    return (num1>num2)? num1:num2;
}