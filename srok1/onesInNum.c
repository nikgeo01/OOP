#include <stdio.h>


int count(unsigned int num)
{
	while (num !=  0)
	{
		int counter = 0;
		if(num & 1)
		{
			counter++;
			num >>= 1;
		}
	}
	return counter;
}
int main()
{

	unsigned int n = 15;
	printf("%d", count(n));

	return 0;
}