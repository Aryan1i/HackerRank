//Problem

  /* Write a program to determine the largest number among three integer numbers.
    
    Input Format
    
    The input consists of three integers a, b, and c, separated by spaces.
    Constraints
    
    −10^3 ≤ a, b, c ≤10^3
    
    Output Format
    
    Print the largest number among the three integers along with the given message.
    Sample Input 0
    
    5 10 15
    Sample Output 0
    
    The largest number is : 15
    Sample Input 1
    
    88 76 76
    Sample Output 1
    
    The largest number is : 88
  */

//Solution

#include <stdio.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */  
    int num1,num2,num3;
    scanf("%d%d%d",&num1,&num2,&num3);
    if(num1>=num2 && num1>=num3){
        printf("The largest number is : %d",num1);
    } else if(num2>=num1 && num2>=num3){
        printf("The largest number is : %d",num2);
    } else {
        printf("The largest number is : %d",num3);
    }
    return 0;
}
