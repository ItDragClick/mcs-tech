#include <stdio.h>
int main() {
	int x,y;
	scanf("%i %i",&x,&y);
	do{
		if(x>y){
			printf("INVALID INPUT!!\n");
			printf("The starting number should be less than the ending number.");
			break;
		}
		printf("\n%i",x);
		x++;
	}while(x<=y);
	
	return 0;
}
