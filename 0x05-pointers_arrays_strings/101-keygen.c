#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define SUM 2772

/**
 * main - Generates random valid password for 101-crackme
 * Return: Always 0 (success)
 */
int main(void)
{
	int sum = 0, n = 0, i = 0;
	char str[100];

	srand(time(NULL));
	while (sum < SUM)
	{
		if (SUM - sum < 48)
			sum -= str[--i];
		else if (SUM - sum <= 126)
			n = SUM - sum;
		else
			n = rand() % (126 - 48) + 48;
		if (n)
		{
			str[i++] = n;
			sum += n;
		}
		n = 0;
	}
	str[i] = '\0';
	printf("%s", str);
	return (0);
}
