#include<stdio.h>

int main(){
    int n,i,sum=0;
    float average;

    printf("Enter the number of elements in the array: ");
    scanf("%d",&n);

    if(n <= 0){
        printf("Enter a valid of elements greater then 0.\n");
        return 1;
    }
    int arr[n];
    printf("Enter %d elemernts:\n",n);
    for(i=0;i<n;i++){
        printf("Elements %d : ",i+1);
        scanf("%d",&arr[i]);
    }
    for(i=0;i<n;i++){
        sum += arr[i];
    }
    average = (float)sum/n;

    printf("\n Result \n");
    printf("Sum of array elements = %d\n",sum);
    printf("Average of array elements = %.2f\n",average);

    return 0;
}