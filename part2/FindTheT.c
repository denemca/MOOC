/* You are conducting a linguistic study and are interested in finding words that contain the letter 't' or 'T' in the first half of the word (including the
middle letter if there is one). Specifically, if the first half of the word does contain a 't' or a 'T', your program should output a 1. If the first half
does not contain the letter 't' or 'T', but the second half does, then your program should output a 2. Otherwise, if there is no 't' or 'T' in the word at
all, your program's output should be -1. You may assume that the word entered does not have more than 50 letters.

 

Examples
Input:
apple
Output:
-1
 

Input:
raincoat
Output:
2
 

Input:
enter
Output:
1
 

Input:
Taylor
Output:
1 */

#include <stdio.h>

int main(void){

    int i = 0, letterCount = 0, posOfFirstT = -1;
    char word[51];
    scanf("%s", word);
    while(word[letterCount] != '\0'){
        letterCount++;
    }
    while(i < letterCount && posOfFirstT == -1){
        if(word[i] == 't' || word[i] == 'T') posOfFirstT = i;
        else i++;
    }
    
    if(posOfFirstT < ((letterCount/2)+1) && posOfFirstT >= 0){
        printf("1");
    } else if(posOfFirstT >= 0){
        printf("2");
    } else printf("-1");

    return 0;
}