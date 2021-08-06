#include <stdio.h>
#include <string.h>

int main(void){
    int trycnt = 0;
    char word[20] = {0};
    int repeat = 0;
    int i = 0;
    int j = 0;
    
    //input
    scanf("%d", &trycnt);
    for(trycnt; trycnt>0; trycnt--){
        scanf("%d", &repeat);
        scanf("%s", word);
        
        //output
        for(i=0; i<strlen(word); i++){
            for(j=0; j<repeat; j++)
                printf("%c", *(word+i));
        }
        printf("\n");
    }
    
    return 0;
}