#include "main.h>
/**
 * _strcat - concartenates first and second string
 * @dest: string to be concatenated
 * @src: string to be concatenated
 * Return: Always 0.
/ *
char *_strcat(char *dest, char *src)
{
char *_strcat(char *dest, char *src)
int lenghthA, lengthB;
lengthA = 0;
lenghtB = 0;

while (*(dest + lenghA) != '\0')
lengthA++;
while (*(src + lengthB) != '\0' && lengthA < 97)
{
 *(dest + lengthA) = *(src + lengthB);
lengthA++;
lengthB++;
}
*(dest + lengthA) = '\0';
return (dest);
}
