#include<stdio.h>

int isDuplicate(int arr[],int size,int element){
    for(int i=0;i<size;i++){
        if(arr[i] == element){
            return 1;;
        }
    }
    return 0;
}
int main(){
    int arr1[] = {4,9,3,4,2,8};
    int arr2[] = {9,4,7,5,1,3};

    int size1 = sizeof(arr1)/sizeof(arr1[0]);
    int size2 = sizeof(arr2)/sizeof(arr2[0]);

    int minSize = (size1 < size2) ? size1 : size2;
    int intersectArr[minSize];
    int k = 0;

    for(int i=0;i<size1;i++){
        for(int j=0;j<size2;j++){
            if(arr1[i] == arr2[j]){
                if(!isDuplicate(intersectArr,k,arr1[i])) {
                    intersectArr[k] = arr1[i];
                    k++;
                }
                break;
            }
        }
    }
    printf("Array 1 :");
    for(int i=0;i<size1;i++)printf("%d",arr1[i]);

    printf("\nArray 2 :");
    for(int i=0;i<size2;i++)printf("%d",arr2[i]);

    printf("\n Intersection :");
    if(k == 0){
        printf("No common elements found");
    }else{
        for(int i=0;i<k;i++){
            printf("%d",intersectArr[i]);
        }
    }
    printf("\n");

    return 0;
}