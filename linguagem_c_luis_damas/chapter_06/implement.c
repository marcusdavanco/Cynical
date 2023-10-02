#include <stdio.h>


float max(float v[], int n)
{
	int currentValue = 0;

	for (int i=0; i<n; i++){
		if(v[i] > currentValue){
			currentValue = v[i];
		}
	}

	return currentValue;
}

/*
void transpor(int v[MAX][MAX])
{
}

char * memcpy(char*dest, char*orig, int n)
{
}

int memicmp(char*s1, char*s2, int n)
{
}
*/

void main(){
	float array[] = {2, 9, 4, 7, 5, 8};
	printf("the max is %.2f\n", max(array, 6));
}
