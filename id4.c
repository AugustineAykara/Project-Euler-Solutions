#include<stdio.h>

void main()
{
	int i,j,l,rev=0,pal,temp,max=0;
	for (i=999; i>=100; --i)
	{
		for (j=i; j>=100; --j)
		{
			pal = i*j;	
			temp = pal;

			rev = 0;
			while(pal > 0)
			{
				l = pal % 10;
				rev = (rev * 10) + l;
				pal = pal/10;
			}

			if ((rev == temp) && (rev > max))
			{
				max = temp;
			}				
		}
	}
	printf("%d", max);
	printf("\n");
}