/* Your program should first read two integers representing the minimum and maximum safe temperatures. Next, your program
should continuously read temperatures (integers) that are being provided by the device. Once the chemical reaction is complete
the device will send a value of -999, indicating to you that temperature readins are done. For each recorded temperature that
is in the correct range (it could also be equal to the min or max values), your program should display the text "Nothing to
report". But as soon as a temperature reaches an unsafe level your program must display the text "Alert!" and stop reading
temperatures (although the device may continue sending temperature values).

 

Examples
Input:
10 20
15 10 20 0 15 -999
Output:
Nothing to report
Nothing to report
Nothing to report
Alert!
 

Input:
0 100
15 50 75 -999
Output:
Nothing to report
Nothing to report
Nothing to report */

#include <stdio.h>

int main(void){

    int lowerBound, upperBound, currentTemp, safe = 1;
    scanf("%d%d", &lowerBound, &upperBound);
    while(safe == 1){
        scanf("%d", &currentTemp);
        if(currentTemp >= lowerBound && currentTemp <= upperBound){
            printf("Nothing to report\n");
        } else if(currentTemp == -999){
            safe = 2;
        } else {
            printf("Alert!");
            safe = 0;
        }
    }

    return 0;
}