#include <stdio.h>
int sum(int a,int b)
{
	return a+b;
}
int main()
{
	int x,y;
	printf("Enter value of x: ");
	scanf("%d", &x);
	printf("Enter the value of y: ");
	scanf("%d", &y);
	printf("sum=%i", sum(x,y));
	return 0;
}