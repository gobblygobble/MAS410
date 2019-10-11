#include <iostream>
#include <cstdlib>
#include <cstring>
#include <string>
#include <ctime>
#include "sha1.hpp"

int main() {
    std::string prefix = "mas410hw";
    std::string suffix = "주말에는역시치맥";
    unsigned char hashvalue[21] = "nonzero";
    std::string line = "just some dummy string";
    char hexstring[41];
    char prefix_in_hex[41];
    int loop_number = 0;

    srand(time(0));

    while (hashvalue[0] != 0 || hashvalue[1] != 0) {
        // change prefix
        /*
        // 1. using hashvalue[0:7] as prefix
        std::string temp;
        temp.append(reinterpret_cast<const char*>(hashvalue));
        prefix.replace(0, 8, temp, 0, 8);
        */
        // 2. randomly adding 1 to some letter of prefix
        prefix[rand() % 8]+=1;
        // hash the concatenated string of prefix and suffix
        line = prefix + suffix;
        sha1::calc(line.c_str(), line.size(), hashvalue);
        sha1::toHexString(hashvalue, hexstring);

        loop_number++;
        if (loop_number % 1000 == 0) std::cout << loop_number << "th loop, hash value: " << hexstring << std::endl;
    }
    
    sha1::toHexString(reinterpret_cast<const unsigned char*>(prefix.c_str()), prefix_in_hex);
    for (int i = 16; i < 41; ++i) prefix_in_hex[i] = 0;
    std::cout << "Found prefix: " << prefix_in_hex << " with hash value: " << hexstring << std::endl;
    return 0;
}


