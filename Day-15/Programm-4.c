#include<stdio.h>

void moveZeroesToEnd(int arr[],int size){
    int count = 0;

    for(int i=0;i<size;i++){
        if (arr[i] != 0){
            arr[count++] = arr[i];
        }
    }
    while (count < size){
        arr[count++] = 0;
    }
}
int main(){
    int arr[]={1,0,3,0,12,0,5};
    int size = sizeof(arr)/sizeof(arr[0]);

    printf("Oiginal array:");
    for(int i=0;i<size;i++){
        printf("%d",arr[i]);
    }
    printf("\n");

    moveZeroesToEnd(arr,size);

    printf("Modified array:");
    for(int i=0;i< size;i++){
        printf("%d",arr[i]);
    }
    printf("\n");

    return 0;
}