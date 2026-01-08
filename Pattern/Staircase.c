//Problem

  /*Staircase detail
    
    This is a staircase of size 4:
    
       #
      ##
     ###
    ####
    Its base and height are both equal to . It is drawn using # symbols and spaces. The last line is not preceded by any spaces.
    
    Write a program that prints a staircase of size .
    
    Function Description
    
    Complete the  function with the following parameter(s):
    
    : an integer
    Print
    
    Print a staircase as described above. No value should be returned.
    Note: The last line is not preceded by spaces. All lines are right-aligned.
    
    Input Format
    
    A single integer, , denoting the size of the staircase.
    
    Constraints
    0<n<100
     .
    
    Sample Input
    
    6 
    Sample Output
    
         #
        ##
       ###
      ####
     #####
    ######
    Explanation
    
    The staircase is right-aligned, composed of # symbols and spaces, and has a height and width of n=6.*/

//Solution

void staircase(int n) {
    for(int i=1;i<=n;i++){
            for(int j=1;j<n-i+1;j++){
            printf(" ");
            }
            for(int j=1;j<=i;j++){
                printf("#");
            }
            printf("\n");
        }
}
