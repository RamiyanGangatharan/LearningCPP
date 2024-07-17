#include <iostream>
#include "./BasicArithmetic.h"
#include "./Algebra.h"
#include "./Geometry.h"
#include "./Trigonometry.h"

// Function to display the main menu
void displayMenu() {
    std::cout << "Ramiyan's Math Equations" << std::endl;
    std::cout << "------------------------" << std::endl;
    std::cout << "--> This application is intended for me to learn C++ through math equations" << std::endl;
    std::cout << "1. Basic Arithmetic" << std::endl;
    std::cout << "2. Algebra" << std::endl;
    std::cout << "3. Geometry" << std::endl;
    std::cout << "4. Trigonometry" << std::endl;
    std::cout << "10. Exit" << std::endl;
    std::cout << "Enter your choice: ";
}

int main() {
    int choice;
    do {
        displayMenu();
        std::cin >> choice;

        switch (choice) {
        case 1:
            handleBasicArithmetic();
            break;
        case 2: 
            handleAlgebra();
            break;
        case 3:
            handleGeometry();
            break;
        case 4:
            handleTrigonometry();
            break;
        case 10:
            std::cout << "Exiting..." << std::endl;
            break;
        default:
            std::cout << "Invalid choice. Please try again." << std::endl;
        }
        std::cout << std::endl;
    } while (choice != 10);

    return 0;
}
