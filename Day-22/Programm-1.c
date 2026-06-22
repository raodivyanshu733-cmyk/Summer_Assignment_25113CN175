#include<stdio.h>
#include<string.h>

int main(){
    char str[100];
    int left=0,right,is_palindrome=1;

    printf("Enter a string:");
    scanf("%s",str);

    right = strlen(str) - 1;

    while (right > left){
        if(str[left] != str[right]){
            is_palindrome = 0;
            break;
        }
        left++;
        right--;
    }
    if(is_palindrome){
        printf("\"%s\"is a palindrome.\n",str);
    }else{
        printf("\"%s\"is NOT a palindrome.\n",str);
    }
    return 0;
}