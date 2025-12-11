#ifndef DATE_H
#define DATE_H

#include <string>

class Date {
private:
    int month;
    int day;
    int year;

public:
    Date(); // Null constructor
    void init(std::string dateString); // expects "mm/dd/yyyy"
    void printDate();
};

#endif

