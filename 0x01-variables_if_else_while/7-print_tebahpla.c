#include <stdio.h>

/**
 * main - Putchar alphabeth
 *
 * Return: Always (Success)
 */

int main(void)
{
char lowAlpha;
for (lowAlpha = 'z'; lowAlpha >= 'a'; lowAlpha--)
{
putchar(lowAlpha);
}
putchar('\n');

return (0);
}
