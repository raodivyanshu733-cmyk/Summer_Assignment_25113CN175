#include<stdio.h>

int linearSearch(int arr[],int size,int target){
    for(int i = 0;i<size;i++){
        if (arr[i] == target){
            return i;
        }
    }
    return -1;
}
int main(){
    int n,target,result;

    printf("Enter number of elements in the array:");
    scanf("%d",&n);

    int arr[n];

    printf("Enter %d integers:\n",n);
    for(int i = 0; i < n; i++){
        scanf("%d",&arr[i]);
    }
    printf("Enter the number to search for:");
    scanf("%d",&target);

    result = linearSearch(arr,n,target);

    if(result != -1){
        printf("Elements %d found at index %d.\n",target,result);
    }else{
        printf("Elements %d not found in the array .\n",target);
    }
    return 0;
}