#include<stdio.h>

int main(){
    int n,matrix[10][10];
    int main_diagonal_sum=0;
    int skew_diagonal_sum=0;

    printf("Enter the size of the square matrix(max 10):");
    scanf("%d",&n);

    if(n>10||n<=0){
        printf("Invalid size ! Enter a size between 1 and 10.\n");
        return 1;
    }
    printf("Enter the elements of the matrix:\n");
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            printf("Element [%d][%d]:",i,j);
            scanf("%d",&matrix[i][j]);
        }
    }
    for(int i=0;i<n;i++){
        main_diagonal_sum += matrix[i][i];
        skew_diagonal_sum += matrix[i][n-i-1];
    }
    printf("\n The entered matrix is:\n");
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            printf("%d\t",matrix[i][j]);
        }
        printf("\n");
    }
    printf("\n Sum of main Diagonal elements:%d\n",main_diagonal_sum);
    printf("Sum of skew diagonal elements:%d\n",skew_diagonal_sum);

    return 0;
}