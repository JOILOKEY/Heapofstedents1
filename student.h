#ifndef STUDENT_H
#define STUDENT_H

#include <string>
#include "address.h"
#include "date.h"

class Student {
private:
    std::string firstName;
    std::string lastName;
    int creditsCompleted;
    Address address;
    Date dob;
    Date gradDate;

public:
    Student();
    void init(const std::string& studentString); 
    void printStudent();
    std::string getLastFirst();
};

#endif

