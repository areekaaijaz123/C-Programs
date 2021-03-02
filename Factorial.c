#include <stdio.h>
int factorial(int);
int main()
{
	int num , fac ;
	printf("Enter a number : ");
	scanf("%d",&num);
	fac = factorial(num);
	printf("Factorial of %d is %d",num,fac);
	return 0 ;
}

int factorial(int fac)
{
	if (fac==1)
	return fac ;
	else return (fac*factorial(fac-1));
}
