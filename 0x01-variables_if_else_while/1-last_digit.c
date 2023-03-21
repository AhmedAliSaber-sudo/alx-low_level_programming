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
			
		if (reminder > 5)
		{
			printf("Last digit of %d is %d and greater than 5\n", n, reminder);
		}
		else if (reminder < 6 && reminder !=0)
		{
			printf("Last digit of %d is %d and is less than 6 and not 0", n, reminder);
		}
		else
		{
			printf("Last digit of %d is %d and is 0", n, reminder);
		}

		return (0);
}
