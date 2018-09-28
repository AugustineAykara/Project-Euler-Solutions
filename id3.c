#include<stdio.h>

void main()
{
	long int i, n=600851475143;	
	for (i = 2; i < n; ++i)
	{
		if (n % i == 0)
		{
			n = n/i;
			i = 2;
		}
	}
	printf(" %li ", n);
}