#include<stdio.h>
#include<string.h>
#include<stdlib.h>

int areRotations(const char * str1,const char * str2){
    int len1 = strlen(str1);
    int len2 = strlen(str2);

    if(len1 != len2){
        return 0;
    }
    char *temp = (char *)malloc(sizeof(char)*(len1 * 2+1));
    if(temp == NULL){
        printf("Memory allocation failed.\n");
        return 0; 
    }
    temp[0] = '\0';
    strcat(temp,str1);
    strcat(temp,str1);

    char*match_ptr = strstr(temp,str2);

    free(temp);

    return (match_ptr != NULL) ? 1:0;
}
int main(){
    char str1[] = "ABCD";
    char str2[] = "CDAB";

    printf("String 1: %s\n",str1);
    printf("String 2: %s\n",str2);

    if(areRotations(str1,str2)){
        printf("Result: String are rotations of each other.\n");
    }else{
        printf("Result: String are NOT rotations of each other.\n");
    }
    return 0;
}