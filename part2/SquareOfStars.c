/* Create a program that displays on the screen a square of n x n stars, with the integer n given as an input.

Examples
Input:
5
Output:
*****
*****
*****
*****
*****
 
Input:
3
Output:
***
***
***

 */

#include <stdio.h>

int main(void){

    int square, i, j;
    scanf("%d", &square);

    for(i = 0; i < square; i++){
        for(j = 0; j < square; j++){
            printf("*");
        }
        printf("\n");
    }

    return 0;
}