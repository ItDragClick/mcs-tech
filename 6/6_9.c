#include <stdio.h>
int main() {
	int x,y;
	scanf("%i %i",&x,&y);
	do{
		printf("\n%i",x);
		x++;
	}while(x<=y);
	
	return 0;
}
