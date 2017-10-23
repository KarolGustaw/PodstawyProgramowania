#include <stdio.h>
int f (int a)
{
	if(a<=0 || a==10)
	return 0;
	
	else 
	return 2*f(a-1)+f(a-2) + 5;
}

int main ()
{
	printf("%d\n",f(8));
	return 0;
}
