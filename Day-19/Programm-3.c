#include<stdio.h>

int main(){
    int r,c;

    printf("Enter number of rows and columns:");
    scanf("%d %d",&r,&c);

    int matrix[r][c];
    int transpose[c][r];

    printf("\n Enter matrix elements:\n");
    for(int i=0;i<r;++i){
        for(int j=0;j<c;++j){
            printf("Enter elements [%d][%d]:",i+1,j+1);
            scanf("%d",&matrix[i][j]);
        }
    }
    printf("\n Original Mtarix:\n");
    for(int i=0;i<r;++i){
        for(int j=0;j<c;++j){
            printf("%d\t",matrix[i][j]);
        }
        printf("\n");
    }
    for(int i=0;i<r;++i){
        for(int j=0;j<c;++j){
            transpose[j][i] = matrix[i][j];
        }
    }
    printf("\n Transpose of the matrix:\n");
    for(int i=0;i<c;++i){
        for(int j=0;j<r;++j){
            printf("%d\t",transpose[i][j]);
        }
        printf("\n");
    }
    return 0;
}