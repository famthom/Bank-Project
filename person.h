#ifndef PERSON_H_INCLUDED
#define PERSON_H_INCLUDED

#include <string>
class person {
public:
    void print() const;
    void setName(std::string, std::string);
    std::string getFirstName() const;
    std::string getLastName() const;
    person(std::string first, std::string last);
private:
    std::string firstName;
    std::string lastName;

};

#endif // PERSON_H_INCLUDED
