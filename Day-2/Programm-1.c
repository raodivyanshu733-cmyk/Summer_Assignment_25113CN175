#include<stdio.h>
int main(){
    int number,Reminder,Sum=0;
    printf("\n Enter the number:");
    scanf("%d",&number);
    while(number > 0){
        Reminder = number%10;
        Sum =Sum+Reminder;
        number = number/10;
    }
    printf("\n Sum of Digits is = %d",Sum);
    return 0;
}