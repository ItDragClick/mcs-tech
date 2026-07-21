#include <stdio.h>
int main(){
	float price,x,sum;
	scanf("%f %f", &price, &x);
	sum=(1-(x/100))*price;
	printf("%f",sum);
	
	return 0;
}
