#include <stdio.h>

double fahrenheitToCelcius(double x){
	double c=0;
	c=((x-32)*((double)5/9));
	
	return c;
}

double celciusTofahrenheit(double x){
	double f=0;
	f=(x*9/5)+32;
	
	return f;
}

int main(){
	double c=0;
	scanf("%lf",&c);
	printf("%.2f*F",fahrenheitToCelcius(c));
	
	return 0;
}
