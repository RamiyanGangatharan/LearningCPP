#include <iostream>
#include <stdexcept>
#include "./basicArithmetic.h"

int addition (int number_1, int number_2) { return number_1 + number_2; }
int subtract (int number_1, int number_2) { return number_1 - number_2; }
int multiply (int number_1, int number_2) { return number_1 * number_2; }
int divide (int number_1, int number_2) 
{
    if (number_2 == 0) { throw std::invalid_argument("DIVISION BY ZERO IS NOT ALLOWED"); } 
    else { return number_1 / number_2; }
}

int main() 
{
    int input;
    int a, b;

    do 
    {
        std::cout << "\n";
        std::cout << "CALCULATOR APPLICATION" << std::endl;
        std::cout << "----------------------" << std::endl;
        std::cout << "\nOPERATIONS: " << std::endl;
        std::cout << "------------" << std::endl;
        std::cout << "[1] Addition" << std::endl;
        std::cout << "[2] Subtraction" << std::endl;
        std::cout << "[3] Multiplication" << std::endl;
        std::cout << "[4] Division" << std::endl;
        std::cout << "[9] Exit" << std::endl;
        std::cout << "\nOPTION: ";
        std::cin >> input;

        if (input >= 1 && input <= 4) 
	{
            std::cout << "Enter two numbers: ";
            std::cin >> a >> b;
        }

        switch (input) {
            case 1:
                std::cout << "Answer: " << add(a, b) << std::endl;
                break;
            case 2:
                std::cout << "Answer: " << subtract(a, b) << std::endl;
                break;
            case 3:
                std::cout << "Answer: " << multiply(a, b) << std::endl;
                break;
            case 4:
                try { std::cout << "Answer: " << divide(a, b) << std::endl; } 
		catch (const std::invalid_argument& e) { std::cerr << e.what() << std::endl; }
                break;
            case 9:
                std::cout << "Thank you for using Calculator :)" << std::endl;
                return 0;
            default:
                std::cout << "Invalid option. Please try again." << std::endl;
                break;
        }
    } while (input != 9);
}
