#include "address.h"
#include <iostream>
#include <string>

Address::Address() {
    street = "";
    city = "";
    state = "";
    zip = "";
}

void Address::init(std::string st, std::string c, std::string s, std::string z) {
    street = st;
    city = c;
    state = s;
    zip = z;
}

void Address::printAddress() {
    std::cout << street << std::endl;
    std::cout << city << " " << state << ", " << zip << std::endl;
}

