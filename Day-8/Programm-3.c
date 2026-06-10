#include<stdio.h>

int main(){
    int rows;

    printf("Enter number of character rows:");
    scanf("%d",&rows);

    printf("character triangle pattern\n");
    int alphabet=65;
    for(int i=1;i<=rows;i++){
        for(int j=0;j<=(2*i-2);j++){
            printf("%c",alphabet+j);
        }
        printf("\n");
    }
    return 0;
}