#include "garbageCollector.h"

char *fa(void)
{
	char *string = MALLOC(1024);
	void **ptr = MALLOC(100);

	int i = 0;
	while(i < 1023)
	{
		string[i] = 'a';
		i ++;
	}
	string[i] = 0;
	return string;
}

int main(void)
{
	char *string = fa();
	printf("%s", string);
}