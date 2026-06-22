#include<stdio.h>

void removeSpace(char *str){
    int read = 0;
    int write = 0;

    while(str[read] != '\0'){
        if(str[read] !=' '){
            str[write] = str[read];
            write++;
        }
        read++;
    }
    str[write] = '\0';
}
int main(){
    char str[150];

    printf("Enter a string:");
    fgets(str,sizeof(str),stdin);

    for(int i=0;str[i] != '\0';i++){
        if(str[i] == '\n'){
            str[i] = '\0';
            break;
        }
    }
    printf("Original string:'%s'\n",str);
    removeSpace(str);

    printf("Processed String:'%s'\n",str);

    return 0;
}