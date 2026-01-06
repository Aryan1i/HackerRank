/* You will be given four digits, each from 0–9.
Your task is to combine them into a single 4-digit number in the same order and multiply it by 5 to get the final number.

Important Instructions

Do NOT write the entire logic in main().
Create a function int buildNumber(int a, int b, int c, int d) and call it from main().
Input Format

Four digits: {A} {B} {C} {D}

Constraints

0 ≤ each digit ≤ 9
Output Format

Single line printing the result as: The number is: {(ABCD)*5}

Sample Input 0

1 2 3 4
Sample Output 0

The number is: 6170
Sample Input 1

9 0 7 1
Sample Output 1

The number is: 45355 */


//solution

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int buildNumber(int a, int b, int c, int d);
int main() {
    int d1,d2,d3,d4;
    scanf("%d%d%d%d",&d1,&d2,&d3,&d4);
    int num=buildNumber(d1,d2,d3,d4);
    printf("The number is: %d",num*5);
    return 0;
}

int buildNumber(int a, int b, int c, int d){
    int num=a*1000 + b*100 + c*10 + d;
    return num;
}
