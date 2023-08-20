#include <iostream>
#include <string>

#include "person.h"

void person::setName(std::string first, std::string last) {
    firstName = first;
    lastName = last;
}

void person::print() const {
    std::cout << "Nome: " << firstName << " " << lastName;
}

std::string person::getFirstName() const {
    return firstName;
}

std::string person::getLastName() const {
    return lastName;
}

person::person(std::string first, std::string last) {
    firstName = first;
    lastName = last;
}
