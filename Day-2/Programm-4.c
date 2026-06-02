#include<stdio.h>
int main(){
    int num , originalNum, reminder,reversedNum=0;
    printf("Enter the Number:");
    scanf("%d",&num);

    originalNum = num;

    while (num !=0){
        reminder = num % 10;
        reversedNum = reversedNum * 10 + reminder;
        num /= 10;
    }
    if (originalNum == reversedNum){
        printf("%d is a palindrome number .\n",originalNum);
    } else{
        printf("%d is not a palindrome number .\n", originalNum);
    }
    return 0;

}