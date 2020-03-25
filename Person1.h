#ifndef PERSON_H_INCLUDED
#define PERSON_H_INCLUDED

#include <string>
#include <iostream>

using namespace std;

class Person {
private:
    string name;
    string surname;
    int year;
public:
    Person() : name("UnknownName"), surname("UnknownSurname"), year(0) {}
    void print();
    Person& operator= (const string &a);
    Person& operator= (const int &n);
};


#endif // PERSON_H_INCLUDED
