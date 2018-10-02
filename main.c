#include <stdio.h>

int main(void)
{
	int a;
	
	printf("input the second : ");
	scanf("%i", &a);
	
	printf("The time is %i : %i", a/60, a%60);
	
	return 0;
}
