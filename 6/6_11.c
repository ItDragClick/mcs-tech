#include <stdio.h>
int main() {
	int x;
	printf("Number of students: ");
	scanf("%i",&x);
	
	float scores[x],sum;
	for (int i=0;i<x;i++){
		printf("Enter scores: ");
		scanf("%f",&scores[i]);
		sum+=scores[i];
	}
	sum/=x;
	printf("The average of scores is %.2f.", sum);
	
	return 0;
}
