#include "Crypto.h"

void encrypt(char* str, unsigned key)
{
	for (; *str != '\0'; ++str)
	{
		*str ^= key;
	}
}

void decrypt(char* str, unsigned key)
{
	for (; *str != '\0'; ++str)
	{
		*str ^= key;
	}
}
