/* Your job is to find the length of the longest word in a text with no punctuation or special characters of any kind - only contains
words. To do so, please write a C-program that takes as a input first the number of words in a text, followed by all of the words
in the text. The output of your program should be the length of the longest word in the text.

To simplify your program, you can assume that the longest word will not exceed 100 characters.

 

Examples
Input:
14
This is a simple example text
we have to find the largest word length
Output:
7
Input:
7
All cats are grey in the dark
Output:
4 */

#include <stdio.h>

int main(void){

    int numberOFWords, i, longest = 0, j = 0, length;
    char word[101];
    scanf("%d", &numberOFWords);
    for(i = 0; i < numberOFWords; i++){
        scanf("%s", word);

        while(word[j] != '\0'){
            j++;
        }

        if(j > longest){
            longest = j;
        }
    }

    printf("%d", longest);

    return 0;
}