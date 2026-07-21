#include <stdio.h>
int main() {
	float x,a=1.52,b=2.85,price;
	scanf("%f",&x);
	if(x<=20){
		price=x*a;
	}else{
		price=x*b;
	}
	printf("%f",price);
	
	return 0;
}
