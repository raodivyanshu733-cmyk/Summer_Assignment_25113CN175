#include<stdio.h>

int main(){
    int c,r,i,j;
    int a[100][100],b[100][100],sub[100][100];

    printf("Enter rows and columns:");
    scanf("%d %d",&r,&c);

    printf("\nEnter elements of matrix 1:\n");
    for(i=0;i<r;++i){
        for(j=0;j<c;++j){
            scanf("%d",&a[i][j]);
        }
    }
    printf("Enter elements of matrix 2:\n");
    for(i=0;i<r;++i){
        for(j=0;j<c;++j){
            scanf("%d",&b[i][j]);
        }
    }
    for(i=0;i<r;++i){
        for(j=0;j<c;++j){
            sub[i][j] = a[i][j] - b[i][j];
        }
    }
    printf("\n Resultant matrix:\n");
    for(i=0;i<r;++i){
        for(j=0;j<c;++j){
            printf("%d",sub[i][j]);
            if(j==c-1)printf("\n");
        }
    }
    return 0;
}