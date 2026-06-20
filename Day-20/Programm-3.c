#include<stdio.h>

int main(){
    int rows,columns;

    printf("Enter the number of rows and columns:");
    scanf("%d %d",&rows,&columns);

    int matrix[rows][columns];
    printf("Enter the elements of the matrix:\n");
    for(int i=0;i<rows;i++){
        for(int j=0;j<columns;j++){
            printf("Element [%d][%d]:",i,j);
            scanf("%d",&matrix[i][j]);
        }
    }
    printf("\n ---Row-wise Sum Results---\n");
    for(int i=0;i<rows;i++){
        int rowsum = 0;

        for(int j=0;j<columns;j++){
            rowsum += matrix[i][j];
        }
        printf("Sum of elements in Row %d = %d\n",i+1,rowsum);
    }
    return 0;
}