//Problem
    
    /*You are given two sorted arrays of integers. Your task is to find:
    
    Union: A sorted array containing all unique elements from both arrays.
    Intersection: A sorted array containing only the common elements from both arrays.
    You must write a code which takes two array inputs and outputs union and intersection of two arrays, if possible.
    
    Input Format
    
    The first line contains an integer n₁, the number of elements in the first array.
    The second line contains n₁ space-separated integers.
    The third line contains an integer n₂, the number of elements in the second array.
    The fourth line contains n₂ space-separated integers.
    Constraints
    
    1 ≤ n₁,n₂ ≤ 10⁵
    -10⁶ ≤ arr[i] ≤ 10⁶ for each element in both arrays
    The input arrays are already sorted in non-decreasing order
    Duplicates may appear in the input arrays.
    The final union and intersection arrays should be printed in ascending order.
    Output Format
    
    First line: The union of the two arrays (all unique elements from both arrays, in ascending order).
    Second line: The intersection of the two arrays (all common unique elements, in ascending order), or "Intersection Not Possible" if the intersection is empty.
    Sample Input 0
    
    5
    1 2 3 4 5
    5
    3 4 6 7 8
    Sample Output 0
    
    1 2 3 4 5 6 7 8
    3 4
    Sample Input 1
    
    6
    -5 -3 0 1 3 5
    7
    -4 -3 0 2 3 4 6
    Sample Output 1
    
    -5 -4 -3 0 1 2 3 4 5 6
    -3 0 3*/

//Solution

import java.io.*;
import java.util.*;

public class Solution {

    public static void main(String[] args) {
        Scanner scn = new Scanner(System.in);
        int n = scn.nextInt();
        
        int[] arr1 = new int[n];
        for(int i=0;i<n;i++){
            arr1[i] = scn.nextInt();
        }
        
        int m = scn.nextInt();
        
        int[] arr2 = new int[m];
        for(int i=0;i<m;i++){
            arr2[i] = scn.nextInt();
        }
        
        ArrayList<Integer> union = new ArrayList<>();
        ArrayList<Integer> inters = new ArrayList<>();
        
        int x = 0;
        int y = 0;
        
        while(x<n && y<m){
            if(arr1[x]>arr2[y]){
                add(union,arr2[y]);
                int val = arr2[y];
                while (y<m && arr2[y]==val) y++;
            }else if(arr1[x]<arr2[y]){
                add(union,arr1[x]);
                int val = arr1[x];
                while (x<n && arr1[x]==val) x++;
            }else{
                add(union,arr1[x]);
                add(inters,arr1[x]);
                
                int val = arr1[x];
                while (x<n && arr1[x]==val) x++;
                while (y<m && arr2[y]==val) y++;
            }
        }
        
        while(x<n){
            add(union, arr1[x]);
            x++;
        }
        
        while(y<m){
            add(union, arr2[y]);
            y++;
        }
        
        for(int ele : union){
            System.out.print(ele + " ");
        }
        
        System.out.println();
        
        if (inters.size()==0) {
            System.out.println("Intersection Not Possible");
        } else {
            for(int ele:inters){
                System.out.print(ele + " ");
            }
        }
        
    }
    
    public static void add(ArrayList<Integer> list, int val){
        if (list.isEmpty()||list.get(list.size()-1) != val){
            list.add(val);
        }
    }
}
