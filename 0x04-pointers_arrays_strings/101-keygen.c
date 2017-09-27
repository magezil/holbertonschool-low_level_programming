#include <stdlib.h>
#include <stdio.h>
#include <time.h>

int main(void)
{
	srand(time(0));
	printf("%d\n", rand());
	return (0);
}
