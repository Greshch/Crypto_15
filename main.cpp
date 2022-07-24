// Crypto_15.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <cstring>
#include "Crypto.h"

int main()
{
    char str[] = "Hello everyone, my name is Aaron!";
    const int szStr = strlen(str);
    const unsigned char key = 0b101011;

    std::cout << "origin is :\t" << str << std::endl;
    encrypt(str, szStr, key);
    std::cout << "encrypt is :\t" << str << std::endl;
    decrypt(str, szStr, key);
    std::cout << "decrypt is :\t" << str << std::endl;
}

