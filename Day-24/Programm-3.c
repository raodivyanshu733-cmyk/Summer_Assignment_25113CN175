#include<stdio.h>
#include<string.h>

int main(){
    char sentence[256];
    char longest_word[256] = " ";
    int max_length = 0;

    printf("Enter a sentence:");

    if(fgets(sentence,sizeof(sentence),stdin) == NULL){
        printf("Error reading input.\n");
        return 1;
    }
    char *word = strtok(sentence,"\n");

    while(word != NULL){
        int current_length = strlen(word);

        if(current_length > max_length){
            max_length = current_length;
            strcpy(longest_word,word);
        }
        word = strtok(NULL,"\n");
    }
    if(max_length>0){
        printf("The longest word is : \"%s\"\n",longest_word);
        printf("Length : %d characters\n",max_length);
    }else{
        printf("NO valid word foud.\n");
    }
    return 0;
}