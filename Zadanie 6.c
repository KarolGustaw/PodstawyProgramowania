#include <stdio.h>

int kw(int n)

{
	if(n==0)
	return 1;
	
	else 
	
	return kw(n-1)*2;
	
}
int main()
{
	printf("%d",kw(3));
	return 0;
}
