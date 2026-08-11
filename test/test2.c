#include <stdio.h>

int main() {
	int x=0;
	for(int i=5;i<=100;i+=5){
		printf("%i + ", i);
		x+=i;
	}
	printf("\nx=%i\n\n\n", x);
	
	int oddNums=0;
	for(int i=0;i<10;i++){
		int x;
		scanf("%i", &x);
		if(x % 2 != 0){
			printf("\noddNum");
			oddNums++;
		}
	}
	printf("oddNumbers = %i",oddNums);
	
	return 0;
}
