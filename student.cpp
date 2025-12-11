#include "student.h"
#include <sstream>
#include <iostream>

Student::Student() {
    firstName = "";
    lastName = "";
    creditsCompleted = 0;
}

void Student::init(const std::string& studentString)
{
    std::stringstream ss(studentString);
    std::string piece;

    

    getline(ss, firstName, ',');
    getline(ss, lastName, ',');

    
    std::string street, city, state, zip;
    getline(ss, street, ',');
    getline(ss, city, ',');
    getline(ss, state, ',');
    getline(ss, zip, ',');

    address.init(street, city, state, zip);

    
    std::string dobString, gradString;
    getline(ss, dobString, ',');
    getline(ss, gradString, ',');

    dob.init(dobString);
    gradDate.init(gradString);

    
    std::string creditsString;
    getline(ss, creditsString, ',');

    creditsCompleted = std::stoi(creditsString);
}

void Student::printStudent()
{
    std::cout << firstName << " " << lastName << std::endl;
    address.printAddress();

    std::cout << "DOB: ";
    dob.printDate();

    std::cout << "Grad: ";
    gradDate.printDate();

    std::cout << "Credits: " << creditsCompleted << std::endl;
    std::cout << "____________________________________" << std::endl;
}

std::string Student::getLastFirst()
{
    return lastName + ", " + firstName;
}

