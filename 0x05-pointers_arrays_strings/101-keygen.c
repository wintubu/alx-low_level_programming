#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <time.h>
/**
 * checksum -runs  checksum code
 * @a: input char
 * Return: checksum
 */
unsigned long checksum(char *a)
{
unsigned long sum = 0;
while (*a != 0)
{
	sum += *a;
	a++;
}
return (sum);
}
/**
 * main - prints password for crakme
 *
 * Return: Always 0.
 */
int main(void)
{
	char alpha[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQSTUVWXYZ";
	char a[33];
	unsigned long sum;
	int i, flag = 0;

	srand(time(NULL));
	while (flag == 0)
	{
		for (i = 0; i < 33; i++)
		{
			a[i] = alpha[rand() % (sizeof(alpha) - 1)];
		}
		a[i] = '\0';
		sum = checksum(a);
		if (sum == 2772)
		{
			flag = 1;
			printf("%a", a);
		}
	}
return (0);
}
