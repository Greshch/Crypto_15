// Crypto_15.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <cstring>
#include "Crypto.h"

int main()
{
    char str[] = "Let's study C++!";
    const size_t szStr = strlen(str);
    const char* key = "0110 1100 1010 0110 0101 1101 1001 0110";
    const size_t szKey = strlen(key);

    std::cout << "origin is :\t" << str << std::endl;
    encrypt(str, szStr, key, szKey);
    std::cout << "encrypt is :\t" << str << std::endl;
    decrypt(str, szStr, key, szKey);
    std::cout << "decrypt is :\t" << str << std::endl;
}

