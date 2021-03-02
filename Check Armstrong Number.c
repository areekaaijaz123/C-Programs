#include <stdio.h>

// Program to check Armstrong number
int main()
{
	int num , n , s , r , x;
	printf("How many numbers you want to check : ");
	scanf("%d",&num);
	printf("Armstrong numbers from 1 to %d are :\n",num);
	for (n=1 ; n<=num ; n++)
	{
		x=n;
		s=0;
		while (x!=0)
		{
			r=x%10;
			s=s+(r*r*r);
			x=x/10;
		}
		if (s==n)
		printf("%d ",n);
	}
}
