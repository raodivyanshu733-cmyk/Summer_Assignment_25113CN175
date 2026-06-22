#include<stdio.h>
#include<stdbool.h>

int main(){
    char sentence[100];
    int word_count = 0;
    int i=0;
    int in_word = false;

    printf("Enter a sentences:");
    fgets(sentence,sizeof(sentence),stdin);

    while(sentence[i] != '\0'){
        if(sentence[i] !=' ' && sentence[i] != '\t' && sentence[i] !='\n' && sentence[i] !='\r'){
            if(!in_word){
                word_count++;
                in_word = true;
            }
        }else{
            in_word = false;
        }
        i++;
    }
    printf("Total number of words:%d\n",word_count);

    return 0;
}