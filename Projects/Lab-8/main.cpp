#include <iostream>
#include "person.h"

int main() {
    // Creating two Person objects
    Person Jane(25);
    Person John(30);

    // Comparing if Jane is the same person as John
    if(Jane == John) {
        std::cout << "This is the same person" << std::endl;
    } else {
        std::cout << "This is NOT the same person" << std::endl;
    }

    // Comparing if Jane is younger than John
    if (Jane < John) {
        std::cout << "Jane is younger than John" << std::endl;
    } else {
        std::cout << "Jane is NOT younger than John" << std::endl;
    }

    // Comparing if Jane is older than John
    if (Jane > John) {
        std::cout << "Jane is older than John" << std::endl;
    } else {
        std::cout << "Jane is NOT older than John" << std::endl;
    }

    return 0;
}
