/*You are helping a teacher average grades. You get bored computing averages by hand, so you decide to write a computer program
to do the work for you.

Your program must first read an integer indicating the number of grades to be averaged. Next, your program will read the grades
one by one, all of which are integers as well. Finally, your program will calculate and print the average of the grades to two
decimal places.

Example
Input:
4
10
8
16
9
Output:
10.75 */

#include <stdio.h>

int main(void){
    int numberOfGrades, i, total, temp;
    double average;
    scanf("%d", &numberOfGrades);
    for(i = 0; i < numberOfGrades; i++){
        scanf("%d", &temp);
        total += temp;
    }
    average = (double) total;
    printf("%.2lf", average/numberOfGrades);

    return 0;
}