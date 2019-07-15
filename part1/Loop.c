#include <stdio.h>
int main(void){
    //Declaring iterator outside is the 'C' way to do things
    int i;
    for(i = 0; i < 3; i++)
        printf("C is fun!\n");
    printf("\n");
    for(i = 0; i < 5; i++)
        printf("We can do everythin with it!\n");
    return 0;
}