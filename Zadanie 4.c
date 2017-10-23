#include <stdio.h>
void kwadrat (int n)
{
	int i;
	int wynik=0;
	for(i=1;i<n;i+=2)
	
	{
		int wynik =i*i;
		printf("%d\n",wynik);
	}
}
int main()
{
	kwadrat(6);
	return 0;
}


