#include "./BasicArithmetic.h"
#include <iostream>
#include <stdexcept>

double add(double a, double b) { return a + b; }
double subtract(double a, double b) { return a - b; }
double multiply(double a, double b) { return a * b; }
double divide(double a, double b)
{
	if (a == 0 || b == 0) { throw std::invalid_argument("Division by zero is not allowed."); }
	else { return a / b; }
}

void handleBasicArithmetic() {
	int choice;
	double a, b;

	do {
		std::cout << "\nBasic Arithmetic Menu" << std::endl;
		std::cout << "1. Add" << std::endl;
		std::cout << "2. Subtract" << std::endl;
		std::cout << "3. Multiply" << std::endl;
		std::cout << "4. Divide" << std::endl;
		std::cout << "10. Return to Main Menu" << std::endl;
		std::cout << "Enter your choice: ";
		std::cin >> choice;

		if (choice >= 1 && choice <= 4) {
			std::cout << "Enter two numbers: ";
			std::cin >> a >> b;
		}

		switch (choice) {
		case 1:
			std::cout << "Result: " << add(a, b) << std::endl;
			break;
		case 2:
			std::cout << "Result: " << subtract(a, b) << std::endl;
			break;
		case 3:
			std::cout << "Result: " << multiply(a, b) << std::endl;
			break;
		case 4:
			try {
				std::cout << "Result: " << divide(a, b) << std::endl;
			}
			catch (const std::invalid_argument& e) {
				std::cout << e.what() << std::endl;
			}
			break;
		case 10:
			std::cout << "Returning to main menu..." << std::endl;
			break;
		default:
			std::cout << "Invalid choice. Please try again." << std::endl;
		}
	} while (choice != 10);
}