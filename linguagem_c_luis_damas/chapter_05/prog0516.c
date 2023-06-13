#include <stdio.h>

float max_of_two(float x, float y);
float Max(float x, float y, float w);

main()
{
	printf("Dados 2, 4 e 6, o maior é %f\n", Max(2, 4, 6));
}

float max_of_two(float x, float y)
{
	return x > y ? x : y;
}

float Max(float x, float y, float w)
{
	return max_of_two(max_of_two(x, y), w);	
}
