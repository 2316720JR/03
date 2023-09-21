#include <stdio.h>

int main(int argc, char *argv[])
{
	char c;
	int i;
	
	printf("enter a character :");
	scanf("%c", &c);
	
	printf("The next character of %c (%d) is %c (%d)\n", c, c, c+1, c+1);
	

	return 0;
}
