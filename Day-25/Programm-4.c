#include<stdio.h>
#include<string.h>

#define MAX_WORDS 100
#define MAX_LENGTH 50

int main(){
    char sentence[500];
    char words[MAX_WORDS][MAX_LENGTH];
    char temp[MAX_LENGTH];
    int count = 0;

    printf("Enter a sentence:");
    if(fgets(sentence,sizeof(sentence),stdin)==NULL){
        return 1;
    }
    sentence[strcspn(sentence,"\n")] = '\0';

    char *token = strtok(sentence," ");
    while(token != NULL && count <MAX_WORDS){
        strncpy(words[count],token,MAX_LENGTH-1);
        words[count][MAX_LENGTH-1] = '\0';
        count++;
        token = strtok(NULL," ");
    }
    for(int i=0;i<count-1;i++){
        for(int j=0;j<count-i-1;j++){
            if(strlen(words[j])>strlen(words[j+1])){
                strcpy(temp,words[j]);
                strcpy(words[j],words[j+1]);
                strcpy(words[j+1],temp);
            }
        }
    }
    printf("\nWords sorted by length:\n");
    for(int i=0;i<count;i++){
        printf("%s(length: %zu)\n",words[i],strlen(words[i]));
    }
    return 0;
}