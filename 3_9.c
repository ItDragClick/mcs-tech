#include  <stdio.h>
int main() {
	int x, y, z;
	printf("Please enter three numbers: ");scanf("%i %i %i", &x, &y, &z);
	printf("Your numbers forward:\n%i\n%i\n%i", x, y, z);
	printf("\n");
	printf("Your numbers reversed:\n%i\n%i\n%i", z, y, x);
	
	return 0;
}

	

