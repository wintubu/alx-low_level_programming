#include "main.h"
/**
 * cap_string - changes wors to upper case in a string.
 * @s: string to be captalized string.
 *
 * Return: String with all words capitalized.
 */
char *cap_string(char *s)
{
	int y, z;
	int a[] = {32, 9, 10, 44, 59, 46, 33, 63, 34, 40, 41, 123, 125};

	y = 0;
	while (*(s + y) != '\0')
	{
		if (*(s + y) >= 'a' && *(s + y) <= 'z')
		{
			if (y == 0)
			{
				*(s + y) = *(s + y) - 32;
			}
			else
			{
				for (z = 0; z <= 12; z++)
				{
					if (a[z] == *(s + y - 1))
					{
						*(s + y) = *(s + y) - 32;
					}
				}
			}
		}
	y++;
	}
	return (s);
}
