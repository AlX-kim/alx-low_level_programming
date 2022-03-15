#include "main.h"
/**
*print_alphabet_x10 - prints alphabet 10 times
*
*Description: prints the alphabet in lowercase ten times
*
*Return: void
*
*/
void print_alphabet(void)
{
char alp = 'a';
while (alp <= 'z')
{
_putchar (alp);
alp++;
}
_putchar ('\n');
}
