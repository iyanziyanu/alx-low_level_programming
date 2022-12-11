#include <stdlib.h>

#include <time.h>

#include <stdio.h>

/**
 * main - Prints last digit
 *
 * Return: Always (Success)
 */

int main(void)
{
int n;
srand(time(0));
n = rand() - RAND_MAX / 2;
char i;
for (i = 'a'; i <= 'z'; i++)
{
putchar(i);
}
putchar('\n');
return (0);
}
