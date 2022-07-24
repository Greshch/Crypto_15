#include "Crypto.h"

void encrypt(char* str, unsigned char key)
{
	for (; *str != '\0'; ++str)
	{
		*str ^= key;

	}
}

void decrypt(char* str, unsigned char key)
{
	for (; *str != '\0'; ++str)
	{
		*str ^= key;
	}
}
