#include "main.h"
#include <stdio.h>



int main()
{
	FILE *fadd;
	char c;

	fadd = fopen("me.txt", "r");
	
	while ((c = fgetc(fadd)) != '\n')
		printf("%c", c);

	printf("%c",c);
	fclose(fadd);

	return (0);
}
