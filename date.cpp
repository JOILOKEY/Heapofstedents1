#include "date.h"
#include <iostream>
#include <sstream>

Date::Date() {
    month = 0;
    day = 0;
    year = 0;
}

void Date::init(std::string dateString) {
    std::stringstream ss(dateString);
    char slash;
    ss >> month >> slash >> day >> slash >> year;
}

void Date::printDate() {
    std::string monthNames[12] = {"January","February","March","April","May","June",
                                  "July","August","September","October","November","December"};
    if(month >= 1 && month <= 12)
        std::cout << monthNames[month-1] << " " << day << ", " << year << std::endl;
    else
        std::cout << "Invalid date" << std::endl;
}

