#include <stdio.h>

int main(void){
    int i;
    int table;
    printf("Please enter the number you wish to see the times table for: ");
    scanf("%d", &table);
    for(i = 0; i < 11; i++)
        printf("%dx%d = %d\n", i, table, i*table);
    return 0;
}