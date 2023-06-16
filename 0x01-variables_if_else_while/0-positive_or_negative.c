#include <stdlib.h>
#include <time.h>
/* more headers goes there */
#include <stdio.h>
/**
 * main - determine if a number is negative, positive or zero
 * Return - 0 on success
 */

int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	if (n > 0)
	{
		printf("%d is %s/n", n, "positive");
	}
	else if (n < 0)
	{
		printf("%d is %s/n", n, "negative");
	}
	else 
	{
		printd("%d is %/n", n, "zero");
	}		
	return (0);

