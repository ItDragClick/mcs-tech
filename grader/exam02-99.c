#include <stdio.h>
int main(){
	int sells;
	scanf("%i", &sells);
	
	if(sells >= 50000){
		printf("P %i", sells);
	}else{
		printf("F %i", sells);
	}
	
	return 0;
}
