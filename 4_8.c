#include <stdio.h>

int main(){
	float l,in;
	int ft;
	scanf("%f",&l);
	in=l/2.54;
	ft=in/12;
	in=(float) in-(ft*12);
	printf("%f cm = %i ft %f inches",l,ft,in);
	return 0;
}
