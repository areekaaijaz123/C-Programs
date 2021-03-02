#include <Stdio.h>
int fib(int);
int main()

//Fibinacci Series

{
	int N,i;
	printf("How many numbers you want in series : ");
	scanf("%d",&N);
	printf("Fibionacci Series is :\n");
	for (i=1; i<=N; i++)
	{
	   printf("%d ",fib(i));
    }
	return 0;
}

int fib (int n)
{
	if(n==1 || n==2)
	return (1);
	return (fib(n-1)+fib(n-2));
}
