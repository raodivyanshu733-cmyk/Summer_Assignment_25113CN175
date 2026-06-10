#include<stdio.h>

int main(){
    int rows;
    char star_char = 'A';

    printf("Enter number of rows:");
    scanf("%d",&rows);

    for(int i=1;i<=rows;i++){
        for(int j=1;j<=i;j++){
            printf("%c", star_char);
        }
        star_char++;

        printf("\n");
    }
    return 0;
}