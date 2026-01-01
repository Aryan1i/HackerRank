//Problem
    /*You and your friend decided to pull off a heist at a heavily guarded bank vault. The vault is protected by a 10-digit passcode, each digit ranging from 0 to 9. However, the configuration is not as simple as just remembering the passcode. The vault's passcode is not straightforward — three wrong digits are randomly placed at three different positions.
    
    Your friend, using some sophisticated tool, has managed to decode the correct digits and their positions. He tells you the exact positions (0-indexed) of the incorrect digits and the number by which the dial must be rotated to correct them.
    
    Your task is to apply these changes and return the final passcode that will successfully open the vault.
    
    Note: After the number 9, the dial wraps around back to 0.
    
    Input Format
    
    Space separated 10-digit vault configuration with 3 wrong digits.
    Three pairs in new line provided, each pair on a new line. Each pair contains:
    The index of the incorrect digit (0-indexed).
    The number by which the dial must be rotated to correct it.
    Constraints
    
    All inputs are digits from 0 to 9
    
    Output Format
    
    Print the final 10-digit space separated passcode with the corrected digits at their respective positions which opens the vault.
    
    Sample Input 0
    
    3 1 4 7 5 4 2 9 5 4
    3 5
    7 4
    1 5
    Sample Output 0
    
    3 6 4 2 5 4 2 3 5 4
    Sample Input 1
    
    9 8 7 6 5 4 3 2 1 0
    0 3
    4 1
    8 2
    Sample Output 1
    
    2 8 7 6 6 4 3 2 3 0
    */


//Solution

#include <stdio.h>

void updateDigit(int idx, int rot,int *a,int *b,int *c,int *d,int *e,int *f,int *g,int *h,int *i,int *j);
int correctCode(int num,int diff);
int main() {
    int a,b,c,d,e,f,g,h,i,j;
    scanf("%d%d%d%d%d%d%d%d%d%d",&a,&b,&c,&d,&e,&f,&g,&h,&i,&j);

    int idx1, rot1;
    scanf("%d%d", &idx1, &rot1);
    updateDigit(idx1, rot1, &a,&b,&c,&d,&e,&f,&g,&h,&i,&j);

    int idx2, rot2;
    scanf("%d%d", &idx2, &rot2);
    updateDigit(idx2, rot2, &a,&b,&c,&d,&e,&f,&g,&h,&i,&j);

    int idx3, rot3;
    scanf("%d%d", &idx3, &rot3);
    updateDigit(idx3, rot3, &a,&b,&c,&d,&e,&f,&g,&h,&i,&j);

    printf("%d %d %d %d %d %d %d %d %d %d",a,b,c,d,e,f,g,h,i,j);

    return 0;
    
    
    printf("%d %d %d %d %d %d %d %d %d %d",a,b,c,d,e,f,g,h,i,j);
}
  
int correctCode(int num,int rot){
    int correctnum=(num+rot)%10;
    return correctnum;
}

void updateDigit(int idx, int rot,int *a,int *b,int *c,int *d,int *e,int *f,int *g,int *h,int *i,int *j){
    if (idx == 0) *a = correctCode(*a, rot);
    else if (idx == 1) *b = correctCode(*b, rot);
    else if (idx == 2) *c = correctCode(*c, rot);
    else if (idx == 3) *d = correctCode(*d, rot);
    else if (idx == 4) *e = correctCode(*e, rot);
    else if (idx == 5) *f = correctCode(*f, rot);
    else if (idx == 6) *g = correctCode(*g, rot);
    else if (idx == 7) *h = correctCode(*h, rot);
    else if (idx == 8) *i = correctCode(*i, rot);
    else if (idx == 9) *j = correctCode(*j, rot);
}
