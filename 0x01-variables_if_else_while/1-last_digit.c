#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - the starting point of the program.
 * @reminder: the last digit of the number n.
 *
 * Return: always 0
 */
int main(void)
{
		int n;
		int reminder;

		srand(time(0));
		n = rand() - RAND_MAX / 2;
		reminder = n % 10;
		printf("Last digit of %d is %d and is ", n, reminder); 

		if (reminder > 5)
		{
			printf("greater than 5\n");
		}
		else if (reminder < 6 && reminder != 0)
		{
			printf("less than 6 and not 0\n");
		}
		else
		{
			printf("0\n");
		}

		return (0);
}
