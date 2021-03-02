#include <stdio.h>
int main()

//Generate given number of prime numbers 

{
	int num,i,j,flag,count=0;
	printf("How many prime numbers you want : ");
	scanf("%d",&num);
	
	for (i=1; count<=num; i++)
	{
		flag=0;
	    for (j=2; j*j<=i; j++)	
	    {
	    	if(i%j==0)
	    	{
	    	   flag=1;
	    	   count++;
	        }
		}
		if (flag==0)
		printf("%d ",i);
	}
	
	
	return 0;
}
