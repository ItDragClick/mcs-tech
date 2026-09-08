#include <stdio.h>

int main(){
	int x=0,passN=0,failN=0;
	int passScore=0;
	scanf("%i",&x);
	scanf("%i",&passScore);
	int scores=0;

	for(int i=0;i<x;i++){
		scanf("%i",&scores);
		if(scores>=passScore){
			passN++;
		}else{failN++;}
	}
	printf("%i\n%i", passN,failN);

	return 0;
}
