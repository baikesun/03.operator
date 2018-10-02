#include <stdio.h>

int main(void)
{
	int a;
	int result;
	
	printf("input the year : ");
	scanf("%i", &a);
	
	result = (a%4==0 && a%100!=0 )|| (a%400==0);
	
	printf("Is the year %i the leap year? : %d", a, result);
	
	return 0;
}
