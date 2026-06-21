#include<stdio.h>
#include<ctype.h>

int main(){
    char str[150];
    int vowels = 0,Consonants = 0;

    printf("Enter a string:");
    fgets(str,sizeof(str),stdin);

    for(int i=0;str[i] != '\0';i++){
        char ch = tolower(str[i]);

        if(ch >= 'a' && ch <= 'z'){
            if(ch == 'a'||ch == 'e'||ch =='i'||ch =='o'||ch == 'u'){
                vowels++;
            }else{
                Consonants++;
            }
        }
    }
    printf("\n Total vowels:%d\n",vowels);
    printf("Total Consonants:%d\n",Consonants);

    return 0;
}