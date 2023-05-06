#include <stdio.h>


int main()
{
	int confession;
	scanf("%d" ,&confession);
	
	if(confession)
	{
		printf("0이 아닌수를 입력했구나!");
	}
	else
	{
		printf("0을 입력했구나!");
	}

	return 0;
}
