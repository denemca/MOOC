#include <stdio.h>

int main(void){
    int i;
    int table = 8;
    for(i = 0; i < 11; i++)
        printf("%dx%d = %d\n", i, table, i*table);
    return 0;
}