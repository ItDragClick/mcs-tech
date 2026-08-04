#include <stdio.h>
#define elec1 1.86
#define elec2 2.52
#define elec3 3.14
#define elec4 3.93

int main() {
	float x,price;
	scanf("%f",&x);
	if(x<=25){
//		printf("test1");
		price=x*elec1;
	}else if(x<=50){
//		printf("test2");
		price=(25*elec1)+((x-25)*elec2);
	}else if(x<=100){
//		printf("test3");
		price=(25*elec1)+(25*elec2)+((x-50)*elec3);
	}else{
//		printf("test4");
		price=(25*elec1)+(25*elec2)+(50*elec3)+((x-100)*elec4);
	}
	printf("%f",price);
	
	return 0;
}
