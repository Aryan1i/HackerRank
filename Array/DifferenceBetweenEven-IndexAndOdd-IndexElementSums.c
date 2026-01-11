//Problem

    /*You are given an array of N integers. Compute the difference between the sum of elements stored at even indices and the sum of elements stored at odd indices.
    
    Use 0-based indexing
    Difference = (sum of even-index elements) − (sum of odd-index elements)
    Input Format
    
    First line: Integer N
    Second line: N space-separated integers
    Constraints
    
    1 ≤ N ≤ 10⁵
    −10⁹ ≤ A[i] ≤ 10⁹
    Output Format
    
    Print a single integer representing the required difference.
    Sample Input 0
    
    5
    1 2 3 4 5
    Sample Output 0
    
    3
    Sample Input 1
    
    4
    10 10 10 10
    Sample Output 1
    
    0
    Sample Input 2
    
    1
    0
    Sample Output 2
    
    0*/

//Solution

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    int size;
    scanf("%d",&size);
    
    long arr[size];
    for(int i=0;i<size;i++){
        scanf("%ld",&arr[i]);
    }
    
    long diffrence=0;
    for(int i=0;i<size;i++){
        if(i%2==0){
            diffrence+=arr[i];
        }else{
            diffrence-=arr[i];
        }
    }
    printf("%ld",diffrence);
    
    return 0;
}
