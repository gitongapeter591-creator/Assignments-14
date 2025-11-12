#include<stdio.h>
#include<math.h>
int main(){
	int length,width,area,i;
	
	
	for(i=1;i<=5;i++){
	    printf("Enter the length :" );
	    scanf("%i", &length);
	    printf("Enter the width :" );
	    scanf("%i", &width);
	    area=length*width;
	    printf("Area of the rectangle is %i\n", area);
	}
	return 0;
}