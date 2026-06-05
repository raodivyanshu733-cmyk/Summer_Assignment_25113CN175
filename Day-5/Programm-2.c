#include<stdio.h>
int main(){
    int num,temp,reminder,i;
    long Factorial,Sum = 0;

    printf("Enter a number:");
    scanf("%d",&num);

    temp = num;
    for (temp = num; temp > 0;temp = temp/10){
        Factorial = 1;
        reminder = temp % 10;
        for (i = 1;i <= reminder;i++){
            Factorial = Factorial * i;
        }
        printf("Fact of %d = %ld\n",reminder,Factorial);
        Sum = Sum + Factorial;
    }
    printf("\n Sum of  the factorial of %d is = %ld\n",num,Sum);
    if (num == Sum)
       printf("%d is a strong number.\n",num);
    else
       printf("%d is not strong number,\n",num);
       
    return 0;   

}