#include<stdio.h>
#include<string.h>

void findCommonCharacters(char str1[],char str2[]){
    int charTracker[256] = {0};
    int found = 0;

    for(int i=0;str1[i] != '\0';i++){
        charTracker[(unsigned char)str1[i]] = 1;
    }
    printf("Common characters are:");

    for(int i=0;str2[i] != '\0';i++){
        unsigned char ch = (unsigned char)str2[i];

        if(charTracker[ch] == 1){
            printf("%c",ch);

            charTracker[ch] = 2;
            found = 1;
        }
    }
    if(!found){
        printf("None");
    }
    printf("\n");
}
int main(){
    char str1[100],str2[100];

    printf("Enter first string:");
    fgets(str1,sizeof(str1),stdin);

    str1[strcspn(str1,"\n")] = '\0';

    printf("Enter second string:");
    fgets(str2,sizeof(str2),stdin);
    str2[strcspn(str2,"\n")]='\0';

    findCommonCharacters(str1,str2);

    return 0;
}