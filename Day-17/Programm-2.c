#include<stdio.h>

int isPresent(int element,int arr[],int size){
    for(int i=0;i<size;i++){
        if(arr[i] == element){
            return 1;
        }
    }
    return 0;
}
int main(){
    int arr1[] = {1,2,3,2,1};
    int arr2[] = {3,2,5,6,3};

    int n1= sizeof(arr1)/sizeof(arr1[0]);
    int n2 = sizeof(arr2)/sizeof(arr2[0]);

    int unionArr[n1+n2];
    int k = 0;
    for(int i=0;i<n1;i++){
        if(!isPresent(arr1[i],unionArr,k)){
            unionArr[k++] = arr1[i];
        }
    }
    for(int i=0;i<n2;i++){
        if(!isPresent(arr2[i],unionArr,k)){
            unionArr[k++] = arr2[i];
        }
    }
    printf("Array 1: ");
    for(int i=0;i<n1;i++)printf("%d",arr1[i]);

    printf("Array 2: ");
    for(int i=0;i<n2;i++)printf("%d",arr2[i]);

    printf("\nUnion of the two array:");
    for(int i=0;i<k;i++){
        printf("%d",unionArr[i]);
    }
    printf("\n");

    return 0;
}