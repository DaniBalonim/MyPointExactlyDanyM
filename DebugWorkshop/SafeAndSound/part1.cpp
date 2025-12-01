#include "part1.h"
#include <iostream>

char* string_copy(char* dest, unsigned int destsize, char* src)
{
	char* ret = dest;
	/*while (*dest++ = *src++)
		;*/
	for (int i = 0; i < destsize  - 1; i++)
	{
		ret[i] = src[i];
	}
	ret[destsize - 1] = '\0';		//like in c the last one suppose to be '\0'
	return ret;
}

void part1()
{
	char password[] = "secret";
	char dest[12];
	char src[] = "hello world!";

	string_copy(dest, 12, src);

	std::cout << src << std::endl;
	std::cout << dest << std::endl;
}
