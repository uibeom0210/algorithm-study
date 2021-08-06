#include <stdio.h>
#include <string.h>

int main(void){
    int wordcnt[26] = {0};
    int max = 0;
    char maxword = '?';
    char word[1000000] = {0};
    int i = 0;
    int length = 0;
    //input
    scanf("%s", word);
    
    length = strlen(word);
    for(i=0; i<length; i++){
        if(*(word+i) >= 'a'){
            wordcnt[*(word+i) - 'a']++;
            if(wordcnt[*(word+i)-'a']>max){
                max++;
                maxword = 'A' + *(word+i)-'a';
            }
            else if(wordcnt[*(word+i)-'a'] == max){
                maxword = '?';
            }
        }else{
            wordcnt[*(word+i) - 'A']++;
            if(wordcnt[*(word+i)-'A']>max){
                max++;
                maxword = 'A' + *(word+i)-'A';
            }
            else if(wordcnt[*(word+i)-'A'] == max){
                maxword = '?';
            }            
        }
    }
    
    //output
    printf("%c", maxword);
    
    return 0;
}