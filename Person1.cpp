#include "Person1.h"

void Person::print() {
    cout << "Person(" << name << ", " << surname << ", " << year << ")\n";
}

Person& Person::operator=(const string &a) {
    name = a.substr(0, a.find(' '));
    surname = a.substr(a.find(' ')+1, a.length());
    return *this;
}

Person& Person::operator= (const int &n) {
    year = n;
    return *this;
}
