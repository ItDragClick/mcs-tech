#include <stdio.h>
int main(){
	float score;
	scanf("%f", &score);
	if(score>=50){
		printf("PASS");
	}else{
		printf("FAIL");
	}
	
	return 0;
}
