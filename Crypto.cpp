#include "Crypto.h"

void encrypt(char* str, unsigned char key)
{
	char prev = 0;
	for (; *str != '\0'; ++str)
	{
		char cur = *str;
		if (prev != 0)
		{
			*str ^= prev;
		}
		else
		{
			*str ^= key;
		}
		prev = cur;
	}
}

void decrypt(char* str, unsigned char key)
{
	char prev = 0;
	for (; *str != '\0'; ++str)
	{
		if (prev != 0)
		{
			*str ^= prev;
		}
		else
		{
			*str ^= key;
		}
		prev = *str;
	}
}
