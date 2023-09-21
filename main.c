#include <stdio.h>

int main(int argc, char *argv[])
{
	int a;
	int b; 
	
	printf("input numerator: ");
	scanf("%d", &a);
	
	printf("input denominator: ");
	scanf("%d", &b);
	
	printf("Devide result is %f \n", (float)a/b);
	

	return 0;
}
