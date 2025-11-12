/*Name . Peter Gitonga
Reg no .  PA106/G/28207/25
Description . World population
Population . 8.25 billion
Growth rate . 0.85%
Years . 70years
*/
#include<stdio.h>
int main(){
	float p,t,r,x;
	int y,i;
	
	printf("Enter the population: ");
	scanf("%f", &p);
	printf("Enter the growth rate: ");
	scanf("%f", &r);
	printf("Enter the years: ");
	scanf("%d", &y);
	
	t=p;
	
	for(i=1;i<=y;i++){
		x=t*r;//calculate the increase
		t=t+x;//add the increase to the total population for previous year
		printf("%i  %.2f   %.2f\n", i,t,x);
	}
	return 0;
}