include <stdio.h>
#include <stdlib.h>

/**
 * main - Prints coins left
 * @args: Paramater 
 * @argv: number of argumets
 * Return: zero if argument is one
 */

int main(int args, char *argv[])
{
	int  check, coins = 0;

	if (args != 2)
	{
		printf("Error\n");
		return (1);
	}
	check = atoi(argv[1]);
	if (check < 0)
	{
		printf("0\n");
		return (0);
	}
	for (; check >= 0;)
	{
		if (check >= 25)
			check -= 25;

		else if (check >= 10)
			check -= 10;

		else if (check >= 5)
			check -= 5;

		else if (check >= 2)
			check -= 2;

		else if (check >= 1)
			check -= 1;
		else
			break;
		coins += 1;
	}
	printf("%d\n", coins);
	return (0);
}
