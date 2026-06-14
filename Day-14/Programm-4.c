#include<stdio.h>

int main(){
    int arr[10],i,j,size,count=0;

    printf("\n Enter number of elements in the array:");
    scanf("%d",&size);

    printf("\n Enter %d elements of an array :",size);
    for(i = 0;i < size; i++){
        scanf("%d",&arr[i]);
    }
    for(i = 0; i< size;i++){
        for(j = i+1;j<size;j++){
            if (arr[i] == arr[j]){
                count++;
                break;
            }
        }
    }
    printf("\n Total Number of Duplicate Elements in the array = %d",count);

    return 0;
}