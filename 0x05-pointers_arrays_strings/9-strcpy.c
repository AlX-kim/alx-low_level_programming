#include "main.h"

/**
* main - check the code
*
* @_strcpy: copy strg to another string
* @dest: character pointer
* @src: character source
*
* Return: return pointer
*/

char *_strcpy(char *dest, char *src)
{
int i;
for (i = 0; src[i]; i++)
{
dest[i] = src[i];
}
dest[i] = src[i];
return (dest);
}
