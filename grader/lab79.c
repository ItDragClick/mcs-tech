#include <stdio.h>

int main(){
	int x;
	scanf("%i",&x);
	int scores[x];
	float avg = 0;
	
	for(int i=0;i<x;i++){
		scanf("%i",&scores[i]);
		avg+=(float)scores[i];
	}
	avg/=x;
	
	for(int i=0;i<x;i++){
		if(scores[i]>=avg){
			printf("%i\n", scores[i]);
		}
	}

	return 0;
}
