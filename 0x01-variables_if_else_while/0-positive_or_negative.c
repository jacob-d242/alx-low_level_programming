//#include <stdlib.h>
//#include <time.h>
//#include <stdio.h>
///**
// * main - generates random number and displays whether number
// * is positive, zero, or negative
// * Return: 0
// */
//int main(void)
//{
//	int n;

//	srand(time(0));
//	n = rand() - RAND_MAX / 2;
//	if (n > 0)
//		printf("%i is positive\n", n);
//	else if (n == 0)
//		printf("%i is zero\n", n);
//	else
//		printf("%i is negative\n", n);
//	return (0);
//}
#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - return whether number is positive, negative, or equal to 0
 * Return: 0
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n > 0)
	{
		printf("%d is positive\n", n);
	}
	else if (n == 0)
	{
		printf("%d is zero\n", n);
	}
	else
	{
		printf("%d is negative\n", n);
	}

	return (0);
}