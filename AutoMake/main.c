#include <stdio.h>
#include "fib.h"

void test(char **str)
{
	int i;
	for(i=0; i<4; i++)
	{
		printf("%s\n", *str++);
	}
}

int main(int argc, char *argv[])
{
	//char *str = createStr();
	//printf("result === %s\n", str);

	//printf("argc = %d\n", argc);
	//printf("argv = %s\n", argv);
/*
	while(argc-- > 1)
	{
		printf("%s\n", *++argv);
		//printf("argc = %d\n", argc);
	}*/
	
	char *str[] = {"ya", "ng", "ch", "en"};
	test(str);
	return 0;
}
