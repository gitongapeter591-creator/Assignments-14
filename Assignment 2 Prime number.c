#include<stdio.h>
int main(){
	int x,y,prime;
	for(x=2;x<=100;x++){
		prime=1;
        for(y=2;y<=x/2;y++)
        	if(x%y==0){
				prime=0;
				break;
			}
			if(prime)
				printf("%d\n", x);
	}
	return 0;		
}