/*You are planning a car trip so you post on a carpooling website in order to share the cost of the trip.

If you have 0 passengers the carpool site does not charge anything and you alone pay the full cost of the trip. If you
have 1 or more passengers the carpool site adds a $1 fee to the cost of the trip and evenly divides the total cost
($1 fee + gas) among the passengers and you. You want to write a program that calculates the cost you have to pay.
The program should read the number of passengers (an integer) and the cost of gas for the trip (a decimal number). 
The program should then print the cost that you have to pay (a decimal number) with 2 digits after the decimal point.

 

Examples
Input
0 23.9
Output
23.90
 

Input
2 45.5
Output
15.50
 

Input
3 34.8
Output
8.95 */

#include <stdio.h>

int main(void){
    int passengers;
    double costOfGas;
    printf("Please enter the number of carpool passengers and the cost of gas:");
    scanf("%d%lf", &passengers, &costOfGas);
    if(passengers == 0) printf("%.2lf", costOfGas);
    else printf("%.2lf", ((costOfGas + 1)/(passengers + 1)));


    return 0;
}