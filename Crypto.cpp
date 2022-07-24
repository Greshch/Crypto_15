#include "Crypto.h"
#include <iostream>

void encrypt(char* str, int szStr, unsigned char key)
{
	char prev = 0;
	for (int i = 0; i < szStr; i++)
	{
		char cur = str[i];
		if (i == 0)
		{
			str[i] ^= key;
		}
		else if (cur != prev)
		{
			str[i] ^= str[i - 1];
		}
		else
		{
			str[i] = str[i - 1];
		}
		prev = cur;
	}
}

void decrypt(char* str, int szStr, unsigned char key)
{
	char prev = 0;
	for (int i = 0; i < szStr; i++)
	{
		char cur = str[i];
		if (i == 0)
		{
			str[i] ^= key;
		}
		else if (cur != prev)
		{
			str[i] ^= prev;
		}
		else
		{
			str[i] = str[i - 1];
		}
		prev = cur;
	}
}
