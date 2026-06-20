#include<stdio.h>

int main(){
    int rows,columns,matrix[100][100];

    printf("Enter the number of rows and columns:");
    scanf("%d %d",&rows,&columns);

    printf("Enter elements of the matrix:\n");
    for(int i=0;i<rows;i++){
        for(int j=0;j<columns;j++){
            printf("Elements [%d][%d]:",i,j);
            scanf("%d",&matrix[i][j]);
        }
    }
    printf("\n The input matrix:\n");
    for(int i=0;i<rows;i++){
        for(int j=0;j<columns;j++){
            printf("%d\t",matrix[i][j]);
        }
        printf("\n");
    }
    printf("\n");

    printf("Column-wise sums:\n");
    for(int j=0;j<columns;j++){
        int col_sum = 0;
        for(int i=0;i<rows;i++){
            col_sum += matrix[i][j];
        }
        printf("Sum of columns %d = %d\n",j+1,col_sum);
    }
    return 0;
}