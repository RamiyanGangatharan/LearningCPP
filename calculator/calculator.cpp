#include <iostream>
#include "./basicArithmetic.h"

	int addition (int number_1, int number_2) { return number_1 + number_2; }
	int subtract (int number_1, int number_2) { return number_1 - number_2; }
	int multiply (int number_1, int number_2) { return number_1 * number_2: }
	int divide   (int number_1, int number_2) 
	{
		if (a == 0 || b == 0) {throw std::invalid_argument("DIVISION BY ZERO IS NOT ALLOWED");
	        else { return number_1 / number_2; } 
	}

	int main()
	{
		int input;
		int a;
		int b;

		do
		{
			std::cout << "\n" << endl;
			std::cout << "CALCULATOR APPLICATION" << std;:endl;
			std::cout << "----------------------" << std::endl;
			std::cout << "\n" << endl;
			std::cout << "OPERATIONS: " << std::endl;
			std::cout << "------------" << std::endl;
			cout << "\n" << endl;

			std::cout << "[1] Addition" << std::endl;
			std::cout << "[9] Exit" << std::endl;
			std::cout << "\n" << std::endl;
			std::cout << "OPTION: " << std::endl;
			std::cin  << input; 

			if (input >= 1 && <= 4)
			{
				std::cout << "Enter two numbers: ";
				std::cin  >> a >> b;
			}

			switch (input)
			{
				case 1:
					std::cout << "Answer: " << addition(a, b) << std::endl;
					break;
				case 9: 
					std::cout << "Thank you for using Calculator :)" << std::endl;
					return 0;
			}
		} while (input != 9);
	}	
