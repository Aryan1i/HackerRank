/* You are given hours, minutes, and seconds.
Convert the entire time into total seconds.

Important Instructions

Do NOT write the entire logic in main().
Create a function int toSeconds(int hours, int minutes, int seconds) and call it from main().
Input Format

Three space-separated integers: {hours} {minutes} {seconds}

Constraints

0 ≤ hours ≤ 100
0 ≤ minutes < 60
0 ≤ seconds < 60
Output Format

Single line printing the result as:
Total seconds: {res}

Sample Input 0

1 0 0
Sample Output 0

Total seconds: 3600
Sample Input 1

0 10 30
Sample Output 1

Total seconds: 630 */


//Solution

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int HourToSec(int hour);
int MinToSec(int min);
int main() {
    int hour,min,sec;
    scanf("%d",&hour);
    scanf("%d",&min);
    scanf("%d",&sec);
    
    int HourSeconds=HourToSec(hour);
    int MinSeconds=MinToSec(min);
    
    int TotalSeconds = HourSeconds+MinSeconds+sec;
    
    printf("Total seconds: %d",TotalSeconds);
     
    return 0;
}

int HourToSec(int hour){
    int sec = hour*60*60;
    return sec;
}

int MinToSec(int min){
    int sec = min*60;
    return sec;
}