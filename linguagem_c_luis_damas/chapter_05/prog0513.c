#include <stdio.h>

float val(float x, int n, float t);
float Pot(float x, int n);

void main()
{
	printf("The result is %2f", val(20.0, 10, 5.0));
}

float val(float x, int n, float t)
{
	float res;
	int i;

	for(res=0, i=1; i<=n; i++)
		res = res + x/Pot(1+t,i);
	return res;	
}

float Pot(float x, int n)
{
	float res;
	int i;

	for (i=1, res = 1.0; i<=n; i++)
		res*=x; /* res = res * x; */
	
	return res;
}


