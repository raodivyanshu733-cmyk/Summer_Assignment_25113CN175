#include<stdio.h>

int main(){
    int m,n,p,q,i,j,k;
    int a[10][10],b[10][10],result[10][10];

    printf("Enter rows and columnsfor first matrix:");
    scanf("%d %d",&m,&n);

    printf("Enter rows and columns for second matrix:");
    scanf("%d %d",&p,&q);

    if(n != p){
        printf("Matrix multiplication is not pssible .Column of the first matrix must match rows of the second.\n");
    }else{
        printf("\n Entre elements of first matrix:\n");
        for(i=0;i<m;i++){
            for(j=0;j<n;j++){
                printf("Enter a[%d][%d]:",i,j);
                scanf("%d",&a[i][j]);
            }
        }
        printf("\nEnter elements of second matrix:\n");
        for(i=0;i<p;i++){
            for(j=0;j<q;j++){
                printf("Enter b[%d][%d]:",i,j);
                scanf("%d",&b[i][j]);
            }
        }
        for(i=0;i<m;i++){
            for(j=0;j<q;j++){
                result[i][j] = 0;
            }
        }
        for (i=0;i<m;i++){
            for(j=0;j<q;j++){
                for(k=0;k<n;k++){
                    result[i][j] += a[i][k] * b[k][j];
                }
            }
        }
        printf("\nResultant matrix:\n");
        for(i=0;i<m;i++){
            for(j=0;j<q;j++){
                printf("%d\t",result[i][j]);
            }
            printf("\n");
        }
    }
    return 0;
}