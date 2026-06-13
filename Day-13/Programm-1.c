#include<stdio.h>
int main(){
    int n,i;

    printf("enter the size of array:");
    scanf("%d",&n);

    int arr[n];

    printf("Enter %d of elements:\n",n);
    for(i=0;i<n;i++){
        printf("Element %d:",i+1);
        scanf("%d",&arr[i]);
    }
    printf("\n The elements in the array are:\n ");
    for(i=0;i<n;i++){
        printf("%d",arr[i]);
    }
    printf("\n");

    return 0;
}