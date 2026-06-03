#include<stdio.h>
#include<math.h>
int main(){
    int lower,upper ,i,j,prime;
    printf("Enter lower bond of the range:");
    scanf("%d",&lower);
    printf("Enter upper bond of the range:");
    scanf("%d",&upper);
    
    printf("Prime number between %d and %d are:\n",lower,upper);
    
    for(i=lower;i<=upper;i++){
        if(i < 2){
            continue;
        }
        prime = 1;
        
        for(j=2;j<=sqrt(i);j++){
            if(i % j==0){
                prime = 0;
                break;
            }
        }
        if(prime == 1){
            printf("%d",i);
        }
    }
    printf("\n");
    return 0;
}