#include<stdio.h>
#include<stdbool.h>

bool isprime(int n);

int main(){
    int num;
    
    printf("Enter a positive number :");
    if(scanf("%d",&num)!=1){
        printf("Invalid input.\n");
        return 1;
    }
    if (isprime(num)){
        printf("%d is a prime number.\n",num);
    }else{
        printf("%d is not prime number.\n",num);
    }
    return 0;
}
bool isprime(int n){
    if (n <= 1){
        return false;
    }
    if (n==2){
        return false;
    }
    for(int i =3;i*1<=n;i+=2){
        if(n%i==0){
            return false;
        }
    }
    return true;
}