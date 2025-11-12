/*
NAME . PETER GITONGA IRUNGU
REG NO . PA106/G/28207/25
DESCRIPTION . MOBILE BUNDLE DATA PURCHASE
DATE . 3/10/2025
*/
#include <stdio.h>
#include <math.h>
//main function
int main(){
	int option;
	
//prompt screen to display data bundles in the form of a menu
    printf("Select data bundle: \n");
    printf("1. 100MB @ 50kes\n");
    printf("2. 500MB @ 200kes\n");
    printf("3. 1GB @ 350kes\n");
    printf("4. 2GB @ 500kes\n");
    printf("Please enter the option you want:");
    scanf("%d", &option);

//prompt the user to enter an option
switch(option){
case 1:
    printf("You have purchased a 100 MB cost is 50kes\n.");
    break;
case 2:
    printf("You have purchased a 500MB cost is 100kes\n.");
    break;
case 3:
    printf("You have purchased a 1GB cost is 350kes\n.");
    break;
case 4:
    printf("You have purchased a 2GB cost is 500kes\n.");
    break;
default:
    printf("Invalid responce . Please try again.\n");
    
	}
    
    return 0;
}
    
	