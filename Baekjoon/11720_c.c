#include <stdio.h>

int main(void){
    int count = 0;
    char numarr[100];
    int i = 0;
    int output = 0;
    
    //input
    scanf("%d", &count);
    scanf("%s", numarr);
    
    for(i=0; i<count; i++){
        output += *(numarr+i) - '0';
    }
    //output
    printf("%d", output);
    
    return 0;
}