#include <stdio.h>
#include <math.h>

/**
 *
 *
 *
 */
int main(void)
{
       	int i, max = -1;
	
	while(612852475143 % 2 == 0)
       	{
		printf("2");
	}
	for(i = 3; i <= sqrt(612852475143); i=i+2)
	{
		while(612852475143 % i == 0)
		{
			max = i;
			printf("%d", max);
		}
	}
	return (0);
}
