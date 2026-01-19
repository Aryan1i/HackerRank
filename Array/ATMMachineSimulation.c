//problem

    /*Design a menu-driven ATM machine that manages N fixed accounts. Each account has a unique Account number, PIN, and Balance. The system should allow users to log in, perform transactions, and log out before another user can access the ATM.
    
    Menu Options: Once logged in, a user can perform the following operations based on given inputs (A,B,C,D,E):
    
    A - Login
    Input account number and PIN.
    Allow access if credentials are correct; otherwise, display a message and ask menu input again.
    If a user is already logged in, do not allow login option for another user, display a message and ask menu input again.
    B - Check Balance
    Display the current balance of the logged-in user.
    If no user is logged in, display a message and ask menu input again.
    C - Deposit Money
    Input an amount to deposit and update the balance accordingly.
    If no user is logged in, display a message and show menu again.
    D - Withdraw Money
    Input an amount to withdraw.
    If sufficient balance, deduct the amount; otherwise, show an error, and ask menu input again.
    If no user is logged in, display a message and ask menu input again.
    E - Logout
    Logs out the current user and allows another user to log in.
    If no user is logged in, do not allow logout option, display a message and ask menu input again.
    F - Exit
    Ends the program if no user is logged into the system.
    Note:
    
    Only one user can be logged in at a time.
    The menu options are case-sensitive.
    Options B,C and D should be functional only after a user logs in.
    The account balance cannot go below 0.
    Incorrect credentials should prompt re-entry for login option.
    After each menu operation, the program should prompt the user for the next action.
    The program continues running until the user explicitly chooses to exit.
    Input Format
    
    The program starts by asking N which represents number of registered users.
    Take inputs for N Account Numbers and their respective password and balance. First N lines in the input file contain account details, one per line:
    Account Number
    PIN
    Initial Balance
    After successful user entry, the subsequent line contains a sequence of operations (A,B,C,D,E or F) based on following menu:
    A. Login
    B. Check Balance
    C. Deposit Money
    D. Withdraw Money
    E. Logout
    F. Exit
    Based on the user’s choice:
    Login (A):
    If no user is logged in, take the following input:
    Account Number
    PIN
    Deposit (C):
    If user is logged in, take the following input:
    Amount to deposit
    Withdrawal (D):
    If user is logged in and if enough balance, take the following input:
    Amount to withdraw
    Constraints
    
    Number of Accounts (N): 1 ≤ N ≤ 100
    Account Number (A): 1 < A < 10^6
    PIN (P): 1 < P < 10^4
    Balance (B): 0 ≤ B ≤ 10^9
    Deposit Amount (D): 1 ≤ D ≤ 10^6
    Withdraw Amount (W): 1 ≤ W ≤ 10^6
    Output Format
    
    Only print the outputs for the following menu options:
    
    Login (A):
    If Account Number and PIN is correct, print "Welcome User [Account Number]"
    If Account Number or PIN is incorrect, print "Wrong Credentials!"
    If a user is already logged in, print "User [Account Number] is already using the ATM."
    Balance Inquiry (B):
    If some user is logged in, print "Balance: Rs.[balance]"
    If no user is logged in, print "Login first!"
    Deposit (C):
    If some user is logged in, print the new balance based on given input, "New Balance: Rs.[amount]"
    If no user is logged in, print "Login first!"
    Withdrawal (D):
    If some user is logged in:
    If enough balance, deduct the amount based on given input and print the new balance, "New Balance: Rs.[amount]"
    If insufficient balance, print "Insufficient balance!"
    If no user is logged in, print "Login first!"
    Logout (E):
    If some user is logged in, print "Logged out successfully."
    If no user is logged in, print "No user is currently logged in."
    Exit (F):
    If some user is logged in, print "Exiting the ATM without logging out is not allowed."
    If no user is logged in, print "- Print "Exiting ATM. Thank you!""
    If an invalid menu option is selected, print "Invalid choice. Please enter A, B, C, D, E, or F."
    Sample Input 0
    
    2
    1001 1234 5000
    1002 5678 3000
    A
    1000 1234
    B
    A
    1001 1234
    B
    C
    2000
    D
    3000
    E
    F
    Sample Output 0
    
    Wrong Credentials!
    Login first!
    Welcome User 1001
    Balance: Rs.5000
    New Balance: Rs.7000
    New Balance: Rs.4000
    Logged out successfully.
    Exiting ATM. Thank you!
    Sample Input 1
    
    5
    101 1234 1000
    202 2345 2000
    303 3456 3000
    404 4567 4000
    505 5678 5000
    B 
    C 
    1000
    A 
    101 234 
    A 
    1000 1234 
    A
    303 3456 
    D 
    4000 
    C 
    1000 
    D
    4000
    E 
    E 
    A 
    505 5678 
    A
    404 2365 
    B
    G 
    F
    C
    3333
    E 
    F
    Sample Output 1
    
    Login first!
    Login first!
    Wrong Credentials!
    Wrong Credentials!
    Welcome User 303
    Insufficient balance!
    New Balance: Rs.4000
    New Balance: Rs.0
    Logged out successfully.
    No user is currently logged in.
    Welcome User 505
    User 505 is already using the ATM.
    Balance: Rs.5000
    Invalid choice. Please enter A, B, C, D, E, or F.
    Exiting the ATM without logging out is not allowed.
    New Balance: Rs.8333
    Logged out successfully.
    Exiting ATM. Thank you!*/

//Solution

#include <stdio.h>

int main() {

    int n;
    scanf("%d",&n);
    
    int acc[n];
    int pin[n];
    int bal[n];
    for(int j=0;j<n;j++){
        scanf("%d",&acc[j]);
        scanf("%d",&pin[j]);
        scanf("%d",&bal[j]);
    }
    
    int flag=1;
    int flagLog=0;
    int logIdx=-1;
    while(flag==1){
        char ch;
        scanf(" %c",&ch);

        int i;
        if(ch=='A'){
            if(flagLog==1){
                int garbage1, garbage2;
                scanf("%d%d", &garbage1, &garbage2);
                printf("User %d is already using the ATM.\n", acc[logIdx]);
                continue;
            }
            int ac,pi;
            scanf("%d%d",&ac,&pi);
            for(i=0;i<n;i++){
                if(acc[i]==ac && pin[i]==pi){
                    printf("Welcome User %d\n",acc[i]);
                    flagLog=1;
                    logIdx=i; 
                    break;
                }
            }
            if(flagLog==0){
                printf("Wrong Credentials!\n");
                continue;
            }
        }else if(ch=='B'){
            if(flagLog==0){
                printf("Login first!\n");
            }else{
                printf("Balance: Rs.%d\n",bal[logIdx]);
            }
        }else if(ch=='C'){
            if(flagLog==0){
                int garbage;
                scanf("%d",&garbage);
                printf("Login first!\n");
            }else{
                int depo;
                scanf("%d",&depo);
                bal[logIdx]+=depo;
                printf("New Balance: Rs.%d\n",bal[logIdx]);
            }
        }else if(ch=='D'){
            if(flagLog==0){
                int garbage;
                scanf("%d",&garbage);
                printf("Login first!\n");
            }else{
                int wid;
                scanf("%d",&wid);
                if((bal[logIdx]-wid)>=0){
                    bal[logIdx]-=wid;
                    printf("New Balance: Rs.%d\n",bal[logIdx]);
                }else{
                    printf("Insufficient balance!\n");
                }
            }
        }else if(ch=='E'){
            if(flagLog==0){
                printf("No user is currently logged in.\n");
            }else{
                flagLog=0;
                logIdx=-1;
                printf("Logged out successfully.\n");
            }
        }else if(ch=='F'){
            if(flagLog==1){
                printf("Exiting the ATM without logging out is not allowed.\n");
            }else{
                printf("Exiting ATM. Thank you!");
                flag=0;
            }
        }else{
            printf("Invalid choice. Please enter A, B, C, D, E, or F.\n");
        }
    }
    
    return 0;
}
