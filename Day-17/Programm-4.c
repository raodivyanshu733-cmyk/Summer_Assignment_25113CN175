#include<stdio.h>

int main(){
    int arr1[] ={8,2,3,4,5,6,7,1,4};
    int arr2[] ={4,5,7,11,6,1,4};

    int size1=sizeof(arr1)/sizeof(arr1[0]);
    int size2=sizeof(arr2)/sizeof(arr2[0]);

    int result[100];
    int k=0;

    printf("Array1 :");
    for(int i=0;i<size1;i++)printf("%d",arr1[i]);
    printf("\n");

    printf("Array2 :");
    for(int i=0;i<size2;i++)printf("%d",arr2[i]);
    printf("\n\n");

    printf("Common elements are:");

    for(int i=0;i<size1;i++){
        for(int j=0;j<size2;j++){
            if(arr1[i] == arr2[j]){
                int isDuplicate = 0;

                for(int x=0;x<k;x++){
                    if(result[x] == arr1[i]){
                        isDuplicate = 1;
                        break;
                    }
                }
                if(!isDuplicate){
                    result[k] = arr1[i];
                    printf("%d",result[k]);
                    k++;
                }
            }
        }
    }
    printf("\n");

    return 0;
}