#include <stdio.h>

int main() {
	int x,way;
	scanf("%i",&x);
	scanf("%i",&way);
	
	if(way==1){
		int i=2;
		while(i<=x){
			printf("%i ", i);
			i+=2;
		}
	}else if(way==2){
		int i2=2;
		do{
			printf("%i ", i2);
			i2+=2;
		}while(i2<=x);
	}else{
		for(int i3=2;i3<=x;i3+=2){
			printf("%i ", i3);
		}
	}
		
	return 0;
}
