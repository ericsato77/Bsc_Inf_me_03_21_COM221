#include <iostream>

// Function prototypes
double calculateTriangleArea(double base, double height);
double calculateRectangleArea(double length, double width);
double calculateSquareArea(double side);

int main() {
    int choice;

    while (true) {
        // Display menu and prompt user for choice
        std::cout << "Please select the area of the shape to calculate:" << std::endl;
        std::cout << "1. Square" << std::endl;
        std::cout << "2. Rectangle" << std::endl;
        std::cout << "3. Triangle" << std::endl;
        std::cout << "4. Quit program" << std::endl;
        std::cout << "Enter selection: ";
        std::cin >> choice;

        // Validate user input
        if (std::cin.fail() || choice < 1 || choice > 4) {
            std::cout << "Your Choice was: " << choice << " Which is an invalid input. Please enter a valid input!!" << std::endl;
            std::cin.clear();
            std::cin.ignore(10000, '\n');
            continue;
        }

        // Perform calculation based on user choice
        double area;
        switch (choice) {
            case 1: {
                double side;
                std::cout << "Enter the side length of the square: ";
                std::cin >> side;
                area = calculateSquareArea(side);
                break;
            }
            case 2: {
                double length, width;
                std::cout << "Enter the length of the rectangle: ";
                std::cin >> length;
                std::cout << "Enter the width of the rectangle: ";
                std::cin >> width;
                area = calculateRectangleArea(length, width);
                break;
            }
            case 3: {
                double base, height;
                std::cout << "Enter the base length of the triangle: ";
                std::cin >> base;
                std::cout << "Enter the height of the triangle: ";
                std::cin >> height;
                area = calculateTriangleArea(base, height);
                break;
            }
            case 4:
                std::cout << "Exiting program." << std::endl;
                return 0;
        }

        // Output the calculated area
        std::cout << "The area is: " << area << std::endl;
    }

    return 0;
}

// Function to calculate the area of a triangle
double calculateTriangleArea(double base, double height) {
    return 0.5 * base * height;
}

// Function to calculate the area of a rectangle
double calculateRectangleArea(double length, double width) {
    return length * width;
}

// Function to calculate the area of a square
double calculateSquareArea(double side) {
    return side * side;
}
