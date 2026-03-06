//Problem

    /*You are given an array that contains only the integers 7, 8, and 9 in arbitrary order. Your task is to write a function sortArray() that sorts the array in non-decreasing order. In other words, after sorting, all 7s should appear first, followed by all 8s, and finally all 9s. The function should modify the array in-place.
    
    Function Signature
    
    void sortArray(int arr[], int n);
    Input Format
    
    The first line contains an integer n denoting the size of the array.
    The second line contains n space-separated integers. Each integer is either 7, 8, or 9.
    Constraints
    
    1 ≤ n ≤ 10^6
    Each element in the array is one of {7, 8, 9}.
    Output Format
    
    After sorting the array, the sorted array is printed as space-separated integers on a single line.
    Sample Input 0
    
    6
    9 7 8 9 7 8
    Sample Output 0
    
    7 7 8 8 9 9
    Sample Input 1
    
    6  
    7 7 8 8 9 9  
    Sample Output 1
    
    7 7 8 8 9 9  */

//Solution

import java.util.Scanner;
import java.util.Arrays;

public class Solution {
    public static void sortArray(int[] arr) {
        int s =0;
        int e =0;
        int n =0;
        
        for(int i=0;i<arr.length;i++){
            if(arr[i] == 7){
                s++;
            }else if(arr[i] == 8){
                e++;
            }else{
                n++;
            }
        }
        
        int i=0;
        while(s-->0){
            arr[i++]=7;
        }
        while(e-->0){
            arr[i++]=8;
        }
        while(n-->0){
            arr[i++]=9;
        }
    }

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        int[] arr = new int[n];
        for (int i = 0; i < n; i++)
            arr[i] = sc.nextInt();
        sortArray(arr);
        for (int num : arr)
            System.out.print(num + " ");
        sc.close();
    }
}
