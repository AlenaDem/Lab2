#include "Person1.h"

int main() {
    Person human;
    cout << "Default constructor:\n";
    human.print();

    cout << "\nOperator overloading:\n";
    human = "Name Surname";
    human = 77;
    human.print();

    return 0;
}
