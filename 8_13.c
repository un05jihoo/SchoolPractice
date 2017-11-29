#include <stdio.h>

int jaegui(int n)
{
	if(n<=1)
		return 1;
	else
		return n*n*n + jaegui(n-1);
}

int main()
{
	int in, out;

	scanf("%d",&in);
	out = jaegui(in);

	printf("%d \n",out);
}
