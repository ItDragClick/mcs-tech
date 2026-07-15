#include <stdio.h>
int main(){
	float a,b,x,y;
	scanf("%f %f",&a,&b);
	float z;
	z=a+b;
	x=(a/z)*100;
	y=(b/z)*100;
	printf("ร้อยละจำนวนนร. ชายต่อรวม: %f\n",x);
	printf("ร้อยละจำนวนนร. หญิงต่อรวม: %f",y);
	return 0;
}
