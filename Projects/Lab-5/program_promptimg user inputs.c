#include <iostream>
#include <limits> // For numeric_limits

int main()
{
    int input;

    // Prompt the user for an integer value between 5 and 10
    std::cout << "Enter an integer value between 5 and 10: ";

    // Loop until a valid input is provided
    while (true) {
        // Check if the input is an integer
        if (!(std::cin >> input)) {
            // Clear the input buffer to handle non-integer input
            std::cin.clear();
            std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
            std::cout << "Invalid input. Please enter an integer value between 5 and 10: ";
        } else if (input < 5 || input > 10) {
            // Check if the input is within the desired range
            std::cout << "You entered " << input << ", please enter a number between 5 and 10: ";
        } else {
            // Valid input received, exit the loop
            break;
        }
    }

    // Output a statement to inform the user that their input value has been accepted
    std::cout << "Your input (" << input << ") has been accepted." << std::endl;

    return 0;
}
