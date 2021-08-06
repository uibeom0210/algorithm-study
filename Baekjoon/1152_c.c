#include <stdio.h>
#include <string.h>

int main(void){
    char word[1000005] = {0};
    int wordcnt = 0;
    int i = 0;
    int length = 0;
    //input
    fgets(word, sizeof(word), stdin);
    word[strlen(word)-1] = '\0';
    
    length = strlen(word);
    for(i=0; i<length; i++){
        if(length == 1){
            if (word[0] == ' ')
                wordcnt = 0;
            else
                wordcnt = 1;
        }
        else{
            if(wordcnt == 0)
                wordcnt++;
            if(i==0 || i==length-1)
                continue;
            else{
                if(word[i] == ' ')
                    wordcnt++;
            }
        }
    }
    
    //output
    printf("%d", wordcnt);
    
    return 0;
}