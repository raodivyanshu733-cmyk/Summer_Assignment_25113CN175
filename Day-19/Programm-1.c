#include<stdio.h>

int main(){
    int rows,columns,i,j;

    printf("Enter rows and columns:");
    scanf("%d %d",&rows,&columns);

    int m1[rows][columns],m2[rows][columns],sum[rows][columns];

    printf("Enter Matrix 1 elements :\n");
    for(i=0;i<rows;i++){
        for(j=0;j<columns;j++)scanf("%d",&m1[i][j]);
    }
    printf("Enter Matrix 2 elements:\n");
    for(i=0;i<rows;i++){
        for(j=0;j<columns;j++)scanf("%d",&m2[i][j]);
    }
    printf("Sum of Matrix:\n");
    for(i=0;i<rows;i++){
        for(j=0;j<columns;j++){
            sum[i][j] = m1[i][j]+m2[i][j];
            printf("%d\t",sum[i][j]);
        }
        printf("\n");
    }
    return 0;
}