#include <stdio.h>

int long long silnia(int long long n)

{
	if(n==0 || n==1)
	
	return 1;
	
	else 
	return silnia (n-1)*n;
}
int main()
{
	printf("%lld\n",silnia(44));
	return 0;
}
