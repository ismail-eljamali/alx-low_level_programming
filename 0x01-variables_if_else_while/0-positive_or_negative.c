#include<stdio.h>
#include<time.h>
int main(void)
{
	int n;
	scrand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n >0)
		printf("%i is positive")
	return (0);
}
