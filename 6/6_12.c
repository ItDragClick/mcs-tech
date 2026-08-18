#include <stdio.h>
#define a 80
#define b 70
#define c 60
#define d 50

char findGrade(float x){
	if(x>=a){
		return 'A';
	}else if(x>=b){
		return 'B';
	}else if(x>=c){
		return 'C';
	}else if(x>=d){
		return 'D';
	}else{
		return 'E';
	}
}

int main() {
	int x;
	printf("Number of students: ");
	scanf("%i",&x);
	
	for (int i=0;i<x;i++){
		float score;
		printf("Enter scores: ");
		scanf("%f",&score);
		printf("Grade: %c\n",findGrade(score));
	}
	
	return 0;
}
