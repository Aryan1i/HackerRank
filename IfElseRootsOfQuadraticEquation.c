//Problem

/*Write a program that takes three integers a, b, and c as input, representing the coefficients of a quadratic equation ax^2 + bx + c = 0. The program should calculate and print the roots of the equation along with their type.

Formula

image

where the discriminant D = b^2 − 4ac determines the type of roots:

If D>0, print "Real and Distinct"
If D=0, print "Real and Equal"
If D<0, print "Complex"
Note: You may use the sqrt() function from math.h to compute square roots.

Input Format

A single line containing three space-separated integers: a b c
Constraints

−1000 ≤ a, b, c ≤ 1000
a ≠ 0
Output Format

If the roots are real, print:

Roots: [root1], [root2]
Type: [TYPE]
where,

root1 and root2 are the real roots rounded to 2 decimal places
TYPE is either "Real and Distinct" or "Real and Equal".
If the roots are complex, print:

Roots: [real_part] + [imaginary_part]i, [real_part] - [imaginary_part]i
Type: Complex
where,

real_part is the real part of the root (rounded to 2 decimal places).
imaginary_part is the imaginary part (rounded to 2 decimal places).
Sample Input 0

1 -3 2
Sample Output 0

Roots: 2.00, 1.00
Type: Real and Distinct
Sample Input 1

1 -2 1
Sample Output 1

Roots: 1.00, 1.00
Type: Real and Equal
Sample Input 2

1 2 5
Sample Output 2

Roots: -1.00 + 2.00i, -1.00 - 2.00i
Type: Complex*/

//Solution

#include <stdio.h>
#include <math.h>
int main() {
    int a,b,c;
    scanf("%d%d%d",&a,&b,&c);
    
    double dscrmnt = (double)b*b - 4.0*a*c;
    
    double root1,root2;
    if(dscrmnt>0){
        root1=(-b+sqrt(dscrmnt))/(2.0*a);
        root2=(-b-sqrt(dscrmnt))/(2.0*a);
        printf("Roots: %.2f, %.2f\n",root1,root2);
        printf("Type: Real and Distinct");
    } else if(dscrmnt==0){
        root1=-b/(2.0*a);
        root2=root1;
        printf("Roots: %.2f, %.2f\n",root1,root2);
        printf("Type: Real and Equal");
    } else {
        double real=-b/(2.0*a);
        double imaginary=sqrt(-dscrmnt)/(2.0*a);
            
        printf("Roots: %.2f + %.2fi, %.2f - %.2fi\n",real,imaginary,real,imaginary);
        printf("Type: Complex");
    }
    return 0;
}
