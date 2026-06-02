#include<stdio.h>
int main(){
    int n,Reminder,Product;
    printf("\n Enter the number:");
    scanf("%d",&n);

    for (Product=1;n>0;n=n/10){
        Reminder = n % 10;
        Product = Product * Reminder;
    }
    printf("\n Product of digits is = %d",Product);
    return 0;

}