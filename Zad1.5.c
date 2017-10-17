#include <stdio.h>
#include <math.h>

int main()
{
	
	int choice;
	do


{
		int wynik;
	
	printf("1.Dodawanie\n2.Odejmowanie\n3.Mnozenie\n4.Dzielenie\n5.Exit\n");
	printf("Twoj wybor \n:");
	int a,b;
	scanf("%d",&choice);
	switch (choice)
	{
		case 1:
			printf("Podaj 2 liczby:\n");
			scanf("%d %d",&a,&b);
			wynik=a+b;
			break;

		case 2:
			printf("Podaj 2 liczby:\n");
			scanf("%d %d",&a,&b);
			wynik=a-b;
			break;
		case 3:
			printf("Podaj 2 liczby:\n");
			scanf("%d %d",&a,&b);
			wynik=a*b;
			break;
		case 4:
			printf("Podaj 2 liczby:\n");
			scanf("%d %d",&a,&b);
			wynik=a/b;
			break;
		case 5:
			break;
			
		}
printf("Wynik =%d\n",wynik);
}
while(choice!=5);
	
	
	
return 0;	
	
}
