#include <stdio.h>
#include <string.h>

int main(void){
    char input[100];
    int alphabet[26];
    int i = 0;
    //input
    scanf("%s", input);
    
    memset(alphabet,-1,sizeof(alphabet));
    for(i=0; i<strlen(input); i++){
        if (alphabet[*(input+i)-'a'] == -1)
            alphabet[*(input+i)-'a'] = i;
    }

    // output
    for(i=0; i<26; i++)
        printf("%d ", alphabet[i]);
    
    return 0;
}