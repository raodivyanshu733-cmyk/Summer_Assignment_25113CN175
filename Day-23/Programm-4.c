#include<stdio.h>
#include<string.h>

#define MAX_SIZE 100
#define ASCII_SIZE 256

int main(){
    char str[MAX_SIZE];
    int freq[ASCII_SIZE]={0};
    int i,max_count;
    char max_char;

    printf("Enter any string:");
    fgets(str,sizeof(str),stdin);

    str[strcspn(str,"\n")]='\0';

    for(i=0;str[i] !='\0';i++){
        freq[(unsigned char)str[i]]++;
    }

    max_count = 0;
    max_char = str[0];

    for(i=0;str[i] != '\0';i++){
        if(freq[(unsigned char)str[i]]>max_count){
            max_count = freq[(unsigned char)str[i]];
            max_char=str[i];
        }
    }
    if(max_count>0){
        printf("The maximum occuring character is '%c' and it appears %d times.\n",max_char,max_count);
    }else{
        printf("The string is empty.\n");
    }
    return 0;
}