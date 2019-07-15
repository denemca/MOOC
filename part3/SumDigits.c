/* Please write a C-program that uses a recursive function called "sumOfDigits()" to compute the sum of the digits of a number. To do so, your main function
should first read an integer number as input and then call sumOfDigits(), which should in turn call itself until there are no digits left to sum, at which
point the final sum should display to the user.

Here is the main idea of how the recursion in sumOfDigits() should work:

sumOfDigits(6452) = 2 + sumOfDigits(645)

sumOfDigits(645) = 5 + sumOfDigits(64)

...

sumOfDigits(6) = 6

Examples
Input
47253
Output
21
 

Input
643
Output
13 */

#include <stdio.h>

int sumOfDigits(int input);

int main(void){
    int input, res;
    scanf("%d", &input);
    res = sumOfDigits(input);
    printf("%d", res);
    return 0;
}

int sumOfDigits(int input){
    int res = 0, i = 0, j, alt = input, new, power = 1;
    while(alt/10 > 0){
        alt = alt/10;
        i++;
    }
    for(j = 0; j < i; j++){
        power = power * 10;
    }
    new = input - power*alt;
    if(new != 0){
        res = alt + sumOfDigits(new);
    } else {
        res = alt;
    }

    return res;
    
}