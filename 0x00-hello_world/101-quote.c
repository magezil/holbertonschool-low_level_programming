#include <stdio.h>
#include <string.h>

int main(void)
{
	char* err = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";
	fwrite(err, sizeof(char), strlen(err), stderr);
	return (1);
}
