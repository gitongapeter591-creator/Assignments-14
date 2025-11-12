/*
NAME . PETER GITONGA IRUNGU
REG NO . PA106/G/28207/25
DESCRIPTION . BANKING SYSTEM
*/
#include <stdio.h>
#include <math.h>
//main function
int main(){
	
	int choice;
	double balance = 1700.00;
	double amount;
	
	//prompt to display the menu
	printf("Menu .\n");
	printf("1. Deposit money.\n");
	printf("2. Withdraw money.\n");
	printf("3. Check balance.\n");
	printf("Enter the choice you want: ");
	scanf("%d", &choice);
	//How the computer will display	switch
	switch(choice){
		case 1:
			printf("Please enter the amount of money you want to deposit: ");
			scanf("%lf", &amount);
          if(amount > 0){
			  balance + amount;
			  printf("Deposited : $%.2lf\n", amount);
			  printf("New balance: $%.2lf", amount+balance);
		  }
			  else{
			  printf("Invalid ,please deposit your money.\n");
			  }
			  break;
        case 2:
        	printf("Please enter the amount you want to withdraw: ");
        	scanf("%lf", &amount);
        	if(amount > 0){
				if(amount <= balance){
				balance - amount;
				printf("You have withdrawn: $%.2lf\n", amount);
				printf("New balance: $%.2lf", balance-amount);
			}
			else{
				printf("Insufficient funds. Current balance: $%.2lf\n", balance);
			}
			break;
        case 3:
        	printf("Current balance: $%.2lf\n", balance);
        	break;
        default:
        	printf("Invalid choice. Please enter an option that is between 1 and 4.\n");	
			}
	}
return 0;
}