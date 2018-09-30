#include<stdio.h>

void main()
{
	int i, f=0, t=1, s=1;
	float sum=0;
	while(t <= 4000000)
	{
		if (t % 2 == 0)
		{
			sum += t;
		}
		printf(" %d ", t);
		f=s;
		s=t;
		t=f+s;
	}

	printf(" %f ", sum);
}