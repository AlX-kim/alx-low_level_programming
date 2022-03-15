#include "main.h"
/**
*print function of print_alphabet(void)
*
*
*Return: always success
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
