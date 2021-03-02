#include <stdio.h>
int main()

//Generate prime numbers uptil given number

{
	int range,i,flag,j;
	printf("Enter range to check prime numbers : ");
	scanf("%d",&range);
	printf("Prime no.s are :\n");
	for(i=1 ; i<=range;i++)
	{
		flag=0;
		for (j=2;j*j<=i;j++)
		{
			
			if (i%j==0)
			{
			 flag=1 ;
		    }
		
		}
		if (flag==0)
		printf("%d\n",i);
	}
	
	return 0;
}
