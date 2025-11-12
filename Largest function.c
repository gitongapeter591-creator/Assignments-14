#include <stdio.h>
int largest(int a,int b,int c)
{
	if(a>b && a>c)
		return a;
	else if(b>a && b>c)
		return b;
	else
	return c;
}
int main()
{
	printf("Largest is %i", largest(20,70,10));
	return 0;
}
