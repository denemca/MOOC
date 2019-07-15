/*Write a C-program that reads an input character (using scanf) and displays the following pyramid pattern using the character read: 

Examples
Input
#
Output
++++#++++
+++###+++
++#####++
+#######+
#########
Input
o
Output
++++o++++
+++ooo+++
++ooooo++
+ooooooo+
ooooooooo
*/

#include <stdio.h>

int main(void){
    char buildingBlock, plus = '+';
    int i, j;
    scanf("%c", &buildingBlock);
    for(i = 0; i < 5; i++){
        //Generate LH pluses - Need 4 to begin with and then one less per level down
        for(j = 4; j > i; j--)
            printf("%c", plus);
        //Generate characters - Need 2*i + 1 per row
        for(j = 0; j < (2*i + 1); j++)
            printf("%c", buildingBlock);
        //Generate RH pluses
        for(j = 4; j > i; j--)
            printf("%c", plus);
        printf("\n");
    }
    return 0;
}