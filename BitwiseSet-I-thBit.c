//Problem

 /* Given a number n and a position i, write a program to set the i-th bit of n using bitwise operators.
    
    Input Format
    
    The first line contains an integer n.
    The second line contains an integer i.
    Constraints
    
    -10^9 ≤ n ≤ 10^9
    0 ≤ i ≤ 31
    Output Format
    
    Print the updated value of n after setting the i-th bit.
    Sample Input 0
    
    10
    3
    Sample Output 0
    
    10
    Sample Input 1
    
    5
    1
    Sample Output 1
    
    7
*/

//Solution

#include <stdio.h>

int main() {  
    int num,i;
    scanf("%d%d",&num,&i);
    int res = num|(1<<i);
    printf("%d",res);
    return 0;
}
