#include "Crypto.h"
#include <iostream>

void Encrypt(char* str, size_t szStr, char const* key, size_t szKey)
{
	char prevKey = ~(key[szKey] >> 3);
	for (size_t i = 0; i < szStr; i++)
	{
		int j = i % szKey;
		char curentEncrypt = str[i] ^ key[j] ^ prevKey;
		prevKey = curentEncrypt;
		str[i] = curentEncrypt;
	}
}

void Decrypt(char* str, size_t szStr, char const* key, size_t szKey)
{
	//Encrypt(str, szStr, key, szKey);
	char prevKey = ~(key[szKey] >> 3);
	for (size_t i = 0; i < szStr; i++)
	{
		int j = i % szKey;
		char curentDecrypt = str[i] ^ key[j] ^ prevKey;
		prevKey = str[i];
		str[i] = curentDecrypt;
	}
}
