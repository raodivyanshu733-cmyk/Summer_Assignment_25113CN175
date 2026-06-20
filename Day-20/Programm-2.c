#include<stdio.h>
#include<stdlib.h>

int main(){
    int rows,columns,i,j,isSymmetric = 1;

    printf("Enter number of rows and columns:");
    if(scanf("%d %d",&rows,&columns) != 2){
        printf("Invalid Input.\n");
        return 1;
    }
    if(rows != 2){
        printf("The matrix is Not symmetric (Rows and columns must be  equal).\n");
        return 0;
    }
    int matrix[rows][columns];

    printf("Enter elements of the matrix (%dX%d):\n",rows,columns);
    for(i=0;i<rows;i++){
        for(j=0;j<columns;j++){
            if(scanf("%d",&matrix[i][j]) != 1){
                printf("Invalid Input.\n");
                return 1;
            }
        }
    }
    for(i=0;i<rows;i++){
        for(j=0;j<columns;j++){
            if(matrix[i][j] != matrix[j][i]){
                isSymmetric = 0;
                break;
            }
        }
        if(!isSymmetric){
            break;
        }
    }
    if(isSymmetric){
        printf("\n The given matrix is a symmetric matrix.\n");
    }else{
        printf("\n The given matrix is not a symmetric matrix.\n");
    }
    return 0;
}