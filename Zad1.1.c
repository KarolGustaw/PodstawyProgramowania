#include <stdio.h>
int max;
int main()
{
	int a;
	int b;
	int c;
	printf("podaj 3 liczby\n");
	scanf("%d %d %d",&a,&b,&c);
	if (a>b && a>c)
{
	max=a;
	}	
	else if(b>c && b>a)
	{
		max=b;
	}
	else max=c;
		
	printf("Najwieksza liczba to:%d",max);
	
	
	
	
	return 0;
	system("pause");
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
}
