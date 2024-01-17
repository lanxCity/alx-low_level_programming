#include <stdio.h>

int main(void)
{
	char *str;
	int i, j, minus_counter, sign_written, isNumExist, nxt;

	str = "Sramon268----";

	i = minus_counter =  sign_written = 0;

	while (str[i])
	{
		j = str[i];
		nxt = str[i + 1];

		if (j >= 48 && j <= 57)
		{

			if (minus_counter && !sign_written)
			{
				if (minus_counter % 2)
					printf("-");

				sign_written = 1;
			}

			printf("%d", j - 48);

			if (nxt < 48 || nxt > 57)
				break;
		}
		

		if (j == 45 && !sign_written)
			minus_counter++;

		i++;
	}

	printf("\n");

	return (0);
}
