#include <iostream>
#include <cstdlib> // generating random numbers
#include <ctime>   // seeding the random number generator

int main() {
    // Seed the random number generator
    srand(time(0));

    // Generate a random number between 0 and 11
    int daysUntilExpiration = rand() % 12;

    // Output message based on conditions
    if (daysUntilExpiration <= 0) {
        std::cout << "Your subscription has expired." << std::endl;
    } else if (daysUntilExpiration <= 1) {
        std::cout << "Your subscription expires within a day! Renew now and save 20%!" << std::endl;
    } else if (daysUntilExpiration <= 5) {
        std::cout << "Your subscription expires in " << daysUntilExpiration << " days. Renew now and save 10%!" << std::endl;
    } else if (daysUntilExpiration <= 10) {
        std::cout << "Your subscription will expire soon. Renew now!" << std::endl;
    } else {
        std::cout << "You have an active subscription." << std::endl;
    }

    return 0;
}
