//Problem

/*Write a program that prints a hollow diamond pattern with diagonals for a given integer n, where n represents the number of rows in the top half of the diamond (including the middle row).

The pattern must be structured as follows:

Horizontal diagonal: The middle row of the diamond contains astericks with no spaces.
Vertical diagonal: The center column of the diamond contains an asterisk in every row.
Each subsequent row above or below the middle row reduces the number of astericks symmetrically.
The astericks in each row form the hollow diamond shape with visible diagonals.
Note: Handle invalid inputs gracefully by displaying an appropriate error message, "Shape Not Possible", if the pattern cannot be drawn by the given input value.

Input Format

A single integer n.
Constraints

-50 ≤ n ≤ 50
Output Format

Print the hollow diamond pattern with diagonals.
Print "Shape Not Possible" if the pattern cannot be drawn.
Sample Input 0

5
Sample Output 0

    *
   ***
  * * *
 *  *  *
*********
 *  *  *
  * * *
   ***
    *
Sample Input 1

-5
Sample Output 1

Shape Not Possible*/

//Solution

#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    if(n<=1){
        printf("Shape Not Possible");
        return 0;
    }

    int size=2*n-1;
    int mid=n-1;

    for(int i=0;i<size;i++){
        for(int j =0;j<size;j++){
            if(i==mid || j==mid || i+j==mid || j-i==mid || i-j==mid || j+i==size+mid-1){
                printf("*");
            }else {
                printf(" ");
            }
        }
        printf("\n");
    }

    return 0;
}
