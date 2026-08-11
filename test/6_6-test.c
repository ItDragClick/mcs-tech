#include <stdio.h>

int main() {
	int x,way;
	scanf("%i",&x);
	scanf("%i",&way);
	
	if(way==1){
		int i=1;
		while(i<=x){
			printf("%i ", i);
			i++;
		}
	}else if(way==2){
		int i2=1;
		do{
			printf("%i ", i2);
			i2++;
		}while(i2<=x);
	}else{
		for(int i3=1;i3<=x;i3++){
			printf("%i ", i3);
		}
	}
		
	return 0;
}
