//Problem

    /*Write a program to count the number of even and odd numbers in an array. The program should print the count of even and odd numbers separately.
    
    Input Format
    
    The first line contains an integer n — the number of elements in the array.
    The second line contains n space-separated integers arr[] where each element arr[i] represents the i-th element of the array.
    Constraints
    
    1 ≤ n ≤ 10^5
    −10^9 ≤ arr[i] ≤ 10^9
    The program should run in O(N) time complexity and use O(1) extra space.
    Output Format
    
    Print two space-separated integers: the count of even numbers followed by the count of odd numbers in the array.
    Sample Input 0
    
    5
    1 2 3 4 5
    Sample Output 0
    
    2 3
    Sample Input 1
    
    4
    0 -1 -2 3
    Sample Output 1
    
    2 2*/

//Solution

#include <stdio.h>

int main() {

    int size;
    scanf("%d",&size);
    
    int arr[size];
    for(int i=0;i<size;i++){
        scanf("%d",&arr[i]);
    }
    
    int even=0,odd=0;
    for(int i=0;i<size;i++){
        if(arr[i]%2==0){
            even++;
        }else{
            odd++;
        }
    }
    
    printf("%d %d",even,odd);
    return 0;
}
