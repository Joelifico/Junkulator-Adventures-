#include<cmath>
#include <iostream>
using namespace std;
void helpMessage();
void menuMathCalculatorFunction();
//---------------------------------------------------------------
void AdditionPart() {
	std::string keep; // variable that will store if the user wants to keep using the selected mode
	int op1;		// operand 1
	int op2;		// operand 2
	while (true) {
		std::cout << "You have selected Addition mode"<< "\n";
		while (true) {				// this while loop is checking if the user types anything besides a number. if the user does it, it will give and error and will make the user
									// to insert a valid varaible
			std::cout << "Please insert first value you want to add: " << "\n";
			std::cin >> op1;
			if (std::cin.fail()) {		// this will basically erase and ignore the input that the user typed if the input is not a number
				std::cout << "Invalid input. Please enter a number" << "\n";
				std::cin.clear();					
				std::cin.ignore(numeric_limits<streamsize>::max(), '\n');
			}
			else break;
			}
		while (true) {				// this while loop is checking if the user types anything besides a number. if the user does it, it will give and error and will make the user
									// to insert a valid varaible
			std::cout << "Please insert second value you want to add: " << "\n";
			std::cin >> op2;// this will basically erase and ignore the input that the user typed if the input is not a number
			if (std::cin.fail()) {
				std::cout << "Invalid input. Please enter a number" << "\n";
				std::cin.clear();
				std::cin.ignore(numeric_limits<streamsize>::max(), '\n');
			}
			else break;
		}		// this will print out the result of the operation the user chose 
		std::cout << "" << op1 << " + " << op2 << " = " << op1 + op2 << "\n";
		std::cout << "---------------------------------" << "\n";
				// this will ask the user if he wants to keep using the same mode or if he wants to use another one.
		std::cout << "Do you want to keep using the addition mode?" << "\n";
		std::cin >> keep;
		if (keep == "yes" || keep == "Yes" || keep == "YES") {
			continue;
		}
		else if (keep == "q" || keep == "Q" || keep == "quit" || keep == "QUIT" || keep == "Quit") {
			std::cout << "Thanks for playing.  ";
			exit(0);
		}
		else if (keep == "no" || keep == "No" || keep == "NO") {
			break;
		}
	}	
}
void multiplicationPart() {
	std::string keep;
	int op1;
	int op2;
	while (true) {
		std::cout << "You have selected Multiplication mode" << "\n";
		while (true) {					
			// this while loop is checking if the user types anything besides a number. if the user does it, it will give and error and will make the user
			// to insert a valid varaible, if the user tyopes a number, then it will continue as usual
			std::cout << "Please insert first value you want to multiply: " << "\n";
			std::cin >> op1;
			if (std::cin.fail()) {		// this will basically erase and ignore the input that the user typed if the input is not a number
				std::cout << "Invalid input. Please enter a number" << "\n";
				std::cin.clear();
				std::cin.ignore(numeric_limits<streamsize>::max(), '\n');
			}
			else break;
		}
		while (true) {
			// this while loop is checking if the user types anything besides a number. if the user does it, it will give and error and will make the user
			// to insert a valid varaible, if the user tyopes a number, then it will continue as usual
			std::cout << "Please insert second value to multiply: " << "\n";
			std::cin >> op2;
			if (std::cin.fail()) {				// this will basically erase and ignore the input that the user typed if the input is not a number
				std::cout << "Invalid input. Please enter a number" << "\n";
				std::cin.clear();
				std::cin.ignore(numeric_limits<streamsize>::max(), '\n');
			}
			else break;
		}
		// this will print out the result of the operation the user chose 
		std::cout << "Multiplication: " << op1 << " * " << op2 << " = " << op1 * op2 << "\n";
		std::cout << "---------------------------------" << "\n";
		// this will ask the user if he wants to keep using the same mode or if he wants to use another one.
		std::cout << "Do you want to keep using the multiplication mode?" << "\n";
		std::cin >> keep;
		if (keep == "yes" || keep == "Yes" || keep == "YES") {
			continue;
		}
		else if (keep == "q" || keep == "Q" || keep == "quit" || keep == "QUIT" || keep == "Quit") {
			std::cout << "Thanks for playing.  ";
			exit(0);
		}
		else if (keep == "no" || keep == "No" || keep == "NO") {
			break;
		}
	}
}
void SubstractionPart() {

	std::string keep; // variable that will store if the user wants to keep using the selected mode
	int op1;		// operand 1
	int op2;		// operand 2

	while (true) {
		std::cout << "You have selected Substraction mode" << "\n";
		while (true) {
			// this while loop is checking if the user types anything besides a number. if the user does it, it will give and error and will make the user
			// to insert a valid varaible, if the user tyopes a number, then it will continue as usual
			std::cout << "Please insert first value you want to substract: " << "\n";
			std::cin >> op1;
			if (std::cin.fail()) {	// this will basically erase and ignore the input that the user typed if the input is not a number
				std::cout << "Invalid input. Please enter a number" << "\n";
				std::cin.clear();
				std::cin.ignore(numeric_limits<streamsize>::max(), '\n');
			}
			else break;
		}
		while (true) {
			// this while loop is checking if the user types anything besides a number. if the user does it, it will give and error and will make the user
			// to insert a valid varaible, if the user tyopes a number, then it will continue as usual
			std::cout << "Please insert second value you want to substract: " << "\n";
			std::cin >> op2;
			if (std::cin.fail()) {				// this will basically erase and ignore the input that the user typed if the input is not a number
				std::cout << "Invalid input. Please enter a number" << "\n";
				std::cin.clear();
				std::cin.ignore(numeric_limits<streamsize>::max(), '\n');
			}
			else break;
		}
		// this will print out the result of the operation the user chose 
		std::cout << "Substraction: " << op1 << " - " << op2 << " = " << op1 - op2 << "\n";
		std::cout << "---------------------------------" << "\n";
		// this will ask the user if he wants to keep using the same mode or if he wants to use another one.
		std::cout << "Do you want to keep using the substraction mode?" << "\n";
		std::cin >> keep;
		if (keep == "yes" || keep == "Yes" || keep == "YES") {
			continue;
		}
		else if (keep == "q" || keep == "Q" || keep == "quit" || keep == "QUIT" || keep == "Quit") {
			std::cout << "Thanks for playing.  ";
			exit(0);
		}
		else if (keep == "no" || keep == "No" || keep == "NO") {
			break;
		}

	}
}
void DivisionPart() {
	std::string keep; // variable that will store if the user wants to keep using the selected mode
	int op1;		// operand 1
	int op2;		// operand 2

	while (true) {
		std::cout << "You have selected Division mode" << "\n";
		while (true) {
			// this while loop is checking if the user types anything besides a number. if the user does it, it will give and error and will make the user
			// to insert a valid varaible, if the user tyopes a number, then it will continue as usual
			std::cout << "Please insert first value you want to be the dividend: " << "\n";
			std::cin >> op1;
			if (std::cin.fail()) {					// this will basically erase and ignore the input that the user typed if the input is not a number
				std::cout << "Invalid input. Please enter a number" << "\n";
				std::cin.clear();
				std::cin.ignore(numeric_limits<streamsize>::max(), '\n');
			}
			else break;
		}
		while (true) {
			// this while loop is checking if the user types anything besides a number. if the user does it, it will give and error and will make the user
			// to insert a valid varaible, if the user tyopes a number, then it will continue as usual
			std::cout << "Please insert second value you want to be the divisor: " << "\n";
			std::cin >> op2;
			if (std::cin.fail()) {					// this will basically erase and ignore the input that the user typed if the input is not a number
				std::cout << "Invalid input. Please enter a number" << "\n";
				std::cin.clear();
				std::cin.ignore(numeric_limits<streamsize>::max(), '\n');
			}
			else break;
		}
		// this will print out the result of the operation the user chose 
		std::cout << "Division: " << op1 << " / " << op2 << " = " << op1 / op2 << "\n";
		std::cout << "---------------------------------" << "\n";
		// this will ask the user if he wants to keep using the same mode or if he wants to use another one.
		std::cout << "Do you want to keep using the division mode?" << "\n";
		std::cin >> keep;
		if (keep == "yes" || keep == "Yes" || keep == "YES") {
			continue;
		}
		else if (keep == "q" || keep == "Q" || keep == "quit" || keep == "QUIT" || keep == "Quit") {
			std::cout << "Thanks for playing.  ";
			exit(0);
		}
		else if (keep == "no" || keep == "No" || keep == "NO") {
			break;
		}
	}
}

void ModulusPart() {
	std::string keep; // variable that will store if the user wants to keep using the selected mode
	int op1;		// operand 1
	int op2;		// operand 2
	while (true) {
		std::cout << "You have selected Modulus mode" << "\n";
		while (true) {
			// this while loop is checking if the user types anything besides a number. if the user does it, it will give and error and will make the user
			// to insert a valid varaible, if the user tyopes a number, then it will continue as usual
			std::cout << "Please insert first value: " << "\n";
			std::cin >> op1;
			if (std::cin.fail()) {				// this will basically erase and ignore the input that the user typed if the input is not a number
				std::cout << "Invalid input. Please enter a number" << "\n";
				std::cin.clear();
				std::cin.ignore(numeric_limits<streamsize>::max(), '\n');
			}
			else break;
		}
		while (true) {
			// this while loop is checking if the user types anything besides a number. if the user does it, it will give and error and will make the user
			// to insert a valid varaible, if the user tyopes a number, then it will continue as usual
			std::cout << "Please insert second value: " << "\n";
			std::cin >> op2;
			if (std::cin.fail()) {				// this will basically erase and ignore the input that the user typed if the input is not a number
				std::cout << "Invalid input. Please enter a number" << "\n";
				std::cin.clear();
				std::cin.ignore(numeric_limits<streamsize>::max(), '\n');
			}
			else break;
		}
		// this will print out the result of the operation the user chose 
		std::cout << "Modulus: " << op1 << " % " << op2 << " = " << op1 % op2 << "\n";
		std::cout << "---------------------------------" << "\n";
		// this will ask the user if he wants to keep using the same mode or if he wants to use another one.
		std::cout << "Do you want to keep using the modulus mode?" << "\n";
		std::cin >> keep;
		if (keep == "yes" || keep == "Yes" || keep == "YES") {
			continue;
		}
		else if (keep == "q" || keep == "Q" || keep == "quit" || keep == "QUIT" || keep == "Quit") {
			std::cout << "Thanks for playing.  ";
			exit(0);
		}
		else if (keep == "no" || keep == "No" || keep == "NO") {
			break;
		}
	}
}
void LogarithmPart() {
	std::string keep; // variable that will store if the user wants to keep using the selected mode
	int op1;		// operand 1
	while (true) {
		std::cout << "You have selected logarithms in base 2 mode" << "\n";
		while (true) {
			// this while loop is checking if the user types anything besides a number. if the user does it, it will give and error and will make the user
			// to insert a valid varaible, if the user tyopes a number, then it will continue as usual
			std::cout << "Please insert the value of the argument: " << "\n";
			std::cin >> op1;
			if (std::cin.fail()) {	// this will basically erase and ignore the input that the user typed if the input is not a number
				std::cout << "Invalid input. Please enter a number" << "\n";
				std::cin.clear();
				std::cin.ignore(numeric_limits<streamsize>::max(), '\n');
			}
			else break;
		}
		// this will print out the result of the operation the user chose 
		std::cout << "Logarithm in base 2 of: " << op1 << " = " << log(op1) << "\n";
		std::cout << "---------------------------------" << "\n";
		// this will ask the user if he wants to keep using the same mode or if he wants to use another one.
		std::cout << "Do you want to keep using the addition mode?" << "\n";
		std::cin >> keep;
		if (keep == "yes" || keep == "Yes" || keep == "YES") {
			continue;
		}
		else if (keep == "q" || keep == "Q" || keep == "quit" || keep == "QUIT" || keep == "Quit") {
			std::cout << "Thanks for playing.  ";
			exit(0);
		}
		else if (keep == "no" || keep == "No" || keep == "NO") {
			break;
		}
	}
}

void PowersPart() {
	std::string keep; // variable that will store if the user wants to keep using the selected mode
	int op1;		// operand 1
	int op2;		// operand 2
	while (true) {
		std::cout << "You have selected Powers mode" << "\n";
		while (true) {
			// this while loop is checking if the user types anything besides a number. if the user does it, it will give and error and will make the user
			// to insert a valid varaible, if the user tyopes a number, then it will continue as usual
			std::cout << "Please insert the value of the base: " << "\n";
			std::cin >> op1;
			if (std::cin.fail()) {	// this will basically erase and ignore the input that the user typed if the input is not a number
				std::cout << "Invalid input. Please enter a number" << "\n";
				std::cin.clear();
				std::cin.ignore(numeric_limits<streamsize>::max(), '\n');
			}
			else break;
		}
		while (true) {
			// this while loop is checking if the user types anything besides a number. if the user does it, it will give and error and will make the user
			// to insert a valid varaible, if the user tyopes a number, then it will continue as usual
			std::cout << "Please insert the value of the exponent: " << "\n";
			std::cin >> op2;
			if (std::cin.fail()) {	// this will basically erase and ignore the input that the user typed if the input is not a number
				std::cout << "Invalid input. Please enter a number" << "\n";
				std::cin.clear();
				std::cin.ignore(numeric_limits<streamsize>::max(), '\n');
			}
			else break;
		}
		// this will print out the result of the operation the user chose 
		std::cout << "powers: " << op1 << " 6 " << op2 << " = " << pow(op1,op2) << "\n";
		std::cout << "---------------------------------" << "\n";
		// this will ask the user if he wants to keep using the same mode or if he wants to use another one.
		std::cout << "Do you want to keep using the modulus mode?" << "\n";
		std::cin >> keep;
		if (keep == "yes" || keep == "Yes" || keep == "YES") {
			continue;
		}
		else if (keep == "q" || keep == "Q" || keep == "quit" || keep == "QUIT" || keep == "Quit") {
			std::cout << "Thanks for playing.  ";
			exit(0);
		}
		else if (keep == "no" || keep == "No" || keep == "NO") {
			break;
		}
	}
}
//-------------------------------------------------------------MAIN FUNCTION---------------------------------------------------------------------
void mathCalculator() {
	// Welcoming the user and ask him to prompt what kind of operation he or she wants
	std::cout << "------Welcome to the Math calculator------"<< "\n";
	std::string options;
	int operand1;
	int operand2;
	// do while loop that will repeat the menu every time the user finish any of the modes
	do {
		menuMathCalculatorFunction() 
			;// display the menu 
		std::cin >> options;
		// Depending on the user choice, it will display and execute the selected mode
		if (options == "+" || options == "1") {
			AdditionPart();
		}
		else if (options == "-" || options == "2") {
			SubstractionPart();
		}
		else if (options == "*" || options == "3") {
			multiplicationPart();
		}
		else if (options == "/" || options == "4") {
			DivisionPart();
		}
		else if (options == "%" || options == "5") {
			ModulusPart();
		}
		else if (options == "log2(n)" || options == "6" || options == "Log2(n)") {
			LogarithmPart();
		}
		else if (options == "^" || options == "7") {
			PowersPart();
			
		}
		else if (options == "8" || options== "help" || options == "Help"|| options == "H"|| options== "h") {
			helpMessage();
			;
		}
		else if (options == "9"|| options== "Exit"|| options == "exit") {
			break;
		}
		else if (options == "q" || options == "Q" || options == "quit" || options == "QUIT" || options == "Quit") {
			std::cout << "Thanks for playing.  ";
			exit(0);
		}
		else {// If the user tries to type any other option than the established, it will trow an error and it will allow the user to select a valid option
			throw "Invalid option, Please select one of the current options!!";
			std::cout << "---------------------------------" << "\n";
			continue;
		}
	} while (options != "9" || options!="Exit"|| options !="exit");// while loop will stop if the user type 9 or exit 
}