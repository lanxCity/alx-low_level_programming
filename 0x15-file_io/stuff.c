#include <stdio.h>


int main()
{
	FILE *myFile;
	char str[100];

	myFile = fopen("me.txt", "r");


	fscanf(myFile, "%s", str);

	printf("%s", str);

	fclose(myFile);

	return (0);
}
