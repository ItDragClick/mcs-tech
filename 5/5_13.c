#include <stdio.h>
#define a 80
#define b 70
#define c 60
#define d 50

int main() {
	float x;
	scanf("%f",&x);
	
//	----[ To Check Wrong Scores ]----	
	if(x>100 || x<0) // MAxiMum score is 100. and not below 0 :)
		return 67; // Cancel tasK with error code 6767676767;
//	---------------------------------
		
	if(x>=a){
		printf("You got an A!");
	}else if(x>=b){
		printf("You got a B!");
	}else if(x>=c){
		printf("You got a C.");
	}else if(x>=d){
		printf("You got a D.");
	}else{
		printf("You got an E...");
	}
	
	return 0;
}
