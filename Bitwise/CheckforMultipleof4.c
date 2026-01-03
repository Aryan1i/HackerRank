//Problem

    /*Write a program to check if a given integer n is a multiple of 4 using only bitwise operators. You are not allowed to use the modulus operator (%), division operator (/), or loops. Use bitwise operations to determine the result efficiently.
    
    Input Format
    
    A single integer n.
    Constraints
    
    −10^5 ≤ n ≤10^5
    Output Format
    
    Print "Yes" if the number is a multiple of 4.
    Print "No" otherwise
    Sample Input 0
    
    4
    Sample Output 0
    
    Yes
    Sample Input 1
    
    400
    Sample Output 1
    
    Yes*/

//Solution

#include <stdio.h>

int main() {

    int num;
    scanf("%d",&num);
    
    int chk=num&3;
    if(chk==0){
        printf("Yes");
    } else {
        printf("No");
    }
    return 0;
}
