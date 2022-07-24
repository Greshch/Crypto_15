// Crypto_15.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "Crypto.h"

int main()
{
    char str[] = "Hello World!";
    const unsigned char key = 0x10101101;
    std::cout << "origin is :\t" << str << std::endl;
    encrypt(str, key);
    std::cout << "encrypt is :\t" << str << std::endl;
    decrypt(str, key);
    std::cout << "decrypt is :\t" << str << std::endl;
}

