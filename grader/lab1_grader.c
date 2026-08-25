#include <stdio.h>
int main(){
	int a,b;
	scanf("%i %i",&a,&b);
	if(a>=b){
		printf("%i %i",b,a);
	}else{
		printf("%i %i",a,b);
	}

	return 0;
}
