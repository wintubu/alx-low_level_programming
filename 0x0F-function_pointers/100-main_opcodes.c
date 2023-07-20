#include<stdio.h>
#include<stdlib.h>
/**
 * main- Entry point
(* an empty line
 *@argc: th etotal  number of parameters.
 *@argv: the parameters where the number ob bytes.
* Description: this code prints opcodes in hexa
*  Return: 0 in succes
*/
int main(int argc, char *argv[])
{
	int a, b;


	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	b = atoi(argv[1]);
	if (b < 0)
	{
		printf("Error\n");
		exit(2);
	}

	for (a = 0; a < b; a++)
	{
		printf("%02hhx", *((char *)main + a));
		if (a < b - 1)
			printf(" ");
		else
			printf("\n");
	}
	return (0);
}
