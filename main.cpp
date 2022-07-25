// Crypto_15.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <cstring>
#include "Crypto.h"

int main()
{
    char str[] = "Let's study C++!";
    const size_t szStr = strlen(str);
    const char* key = "affa d27pt da4y 3216 q24rs Q_rxz Z$cx u%c#";
    const size_t szKey = strlen(key);

    std::cout << "origin is :\t" << str << std::endl;
    Encrypt(str, szStr, key, szKey);
    std::cout << "encrypt is :\t" << str << std::endl;
    Decrypt(str, szStr, key, szKey);
    std::cout << "decrypt is :\t" << str << std::endl;
}

