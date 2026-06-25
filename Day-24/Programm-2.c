#include<stdio.h>
#include<string.h>

void compressString(const char *input,char*output){
    int i=0;
    int j=0;
    int len = strlen(input);

    while (i<len){
        int count = 1;

        while(i+1<len && input[i] == input[i+1]){
            count++;
            i++;
        }
        output[j++] = input[i];
        j += sprintf(&output[j],"%d",count);

        i++;
    }
    output[j] = '\0';
}
int main(){
    char inputStr[100];
    char compressedStr[200];

    printf("Enter a string to compress:");
    if(scanf("%99s",inputStr) == 1){
        compressString(inputStr,compressedStr);

        printf("Original string: %s\n",inputStr);
        printf("Compressed String: %s\n",compressedStr);
    }else{
        printf("Invalid Input.\n");
    }
    return 0;
}