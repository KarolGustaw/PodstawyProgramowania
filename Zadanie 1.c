#include<stdio.h>
float pole (float a, float b)
{
	return (a*b)/2.0;
}

int main()

{
	float p=pole(5,2.5);
	printf("%f",p);
	return 0;
}
