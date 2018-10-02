#include <stdio.h>

int main(void)
{
	int a, b, c;
	float avg;
	
	printf("input three numbers : ");
	scanf("%i %i %i", &a, &b, &c);
	
	avg = (a+b+c)/(float)3;
	
	printf("The mean of %i, %i, %i is %f", a, b, c, avg);
	
	return 0;
}
