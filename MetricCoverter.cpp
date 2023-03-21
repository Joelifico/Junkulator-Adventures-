#include <iostream>
#include "declerations.h"
// functions to be called

//--------------------------------
void kphToMph() {
	double kph; // this will hold the first value of any conversion
	bool flag = true;		// Flag variable 
	std::string keep; // this will hold the decision of the user to keep using this converter

	while (flag) { // this will make the mode work untill the user says that he want to finish
		std::cout << "You selected the mph to kph converter" << '\n';
		while (true) {
			std::cout << "Please insert how many kilometers per hour you want to convert to mph: " << "\n";
			std::cin >> kph;
			if (std::cin.fail()) {
				std::cout << "Invalid input. Please enter a number" << "\n";
				std::cin.clear();
				std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
			}
			else break;
		}// it calculates the conversion and ask if the user wants to continue or not
		std::cout << "Your result is: " << kph * 0.621371 << " mph" << "\n";
		std::cout << "---------------------------------" << "\n";
		std::cout << "Do you want to keep using this conversion mode?" << "\n";
		std::cin >> keep;
		if (keep == "yes" || keep == "Yes" || keep == "YES"|| keep== "Y"||keep == "y") {
			continue;
		}
		else if (keep == "q" || keep == "Q" || keep == "quit" || keep == "QUIT" || keep == "Quit") {
			std::cout << "Thanks for playing.  ";
			exit(0);
		}
		else if (keep == "no" || keep == "No" || keep == "NO"|| keep == "n"|| keep== "N") {
			flag = false;
		}
	}
}

void mphToKph() {
	double mph; // this will hold the first value of any conversion
	bool flag = true;		// Flag variable 
	std::string keep; // this will hold the decision of the user to keep using this converter
	while (flag) { // this will make the mode work untill the user says that he want to finish
		std::cout << "You selected the mph to kph converter" << '\n';
		while (true) {
			std::cout << "Please insert how many miles per hour you want to convert to kph: " << "\n";
			std::cin >> mph;
			if (std::cin.fail()) {
				std::cout << "Invalid input. Please enter a number" << "\n";
				std::cin.clear();
				std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
			}
			else break;
		}// it calculates the conversion and ask if the user wants to continue or not
		std::cout << "Your result is: " << mph * 1.60934 << " kph" << "\n";
		std::cout << "---------------------------------" << "\n";
		std::cout << "Do you want to keep using this conversion mode?" << "\n";
		std::cin >> keep;
		if (keep == "yes" || keep == "Yes" || keep == "YES" || keep == "Y" || keep == "y") {
			continue;
		}
		else if (keep == "q" || keep == "Q" || keep == "quit" || keep == "QUIT" || keep == "Quit") {
			std::cout << "Thanks for playing.  ";
			exit(0);
		}
		else if (keep == "no" || keep == "No" || keep == "NO" || keep == "N" || keep == "n") {
			flag = false;
		}
	}
}
void celToFah() {
	double cel; // this will hold the first value of any conversion
	bool flag = true;		// Flag variable 
	std::string keep; // this will hold the decision of the user to keep using this converter
	while (flag) { // this will make the mode work untill the user says that he want to finish
		std::cout << "You selected the celsius to Fahrenheit converter" << '\n';
		while (true) {
			std::cout << "Please insert how many Celsius degrees  you want to convert to Fahrenheit: " << "\n";
			std::cin >> cel;
			if (std::cin.fail()) {
				std::cout << "Invalid input. Please enter a number" << "\n";
				std::cin.clear();
				std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
			}
			else break;
		}// it calculates the conversion and ask if the user wants to continue or not
		std::cout << "Your result is: " << (cel * 9.0/5.0)+32.0  << "\n";
		std::cout << "---------------------------------" << "\n";
		std::cout << "Do you want to keep using this conversion mode?" << "\n";
		std::cin >> keep;
		if (keep == "yes" || keep == "Yes" || keep == "YES" || keep == "Y" || keep == "y") {
			continue;
		}
		else if (keep == "q" || keep == "Q" || keep == "quit" || keep == "QUIT" || keep == "Quit") {
			std::cout << "Thanks for playing.  ";
			exit(0);
		}
		else if (keep == "no" || keep == "No" || keep == "NO" || keep == "N" || keep == "n") {
			flag = false;
		}
	}
}
void FahToCel() {
	double Fah; // this will hold the first value of any conversion
	bool flag = true;		// Flag variable 
	std::string keep; // this will hold the decision of the user to keep using this converter
	while (flag) { // this will make the mode work untill the user says that he want to finish
		std::cout << "You selected the Fahrenheit to celsius converter" << '\n';
		while (true) {
			std::cout << "Please insert how many Fahrenheit degrees you want to convert to celsius : " << "\n";
			std::cin >> Fah;
			if (std::cin.fail()) {
				std::cout << "Invalid input. Please enter a number" << "\n";
				std::cin.clear();
				std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
			}
			else break;
		}// it calculates the conversion and ask if the user wants to continue or not
		std::cout << "Your result is: " << ((Fah - 32) * 5.0/9.0 )<< "\n";
		std::cout << "---------------------------------" << "\n";
		std::cout << "Do you want to keep using this conversion mode?" << "\n";
		std::cin >> keep;
		if (keep == "yes" || keep == "Yes" || keep == "YES" || keep == "Y" || keep == "y") {
			continue;
		}
		else if (keep == "q" || keep == "Q" || keep == "quit" || keep == "QUIT" || keep == "Quit") {
			std::cout << "Thanks for playing.  ";
			exit(0);
		}
		else if (keep == "no" || keep == "No" || keep == "NO" || keep == "N" || keep == "n") {
			flag = false;
		}
	}
}
void inchToCm() {
	double inc; // this will hold the first value of any conversion
	bool flag = true;		// Flag variable 
	std::string keep; // this will hold the decision of the user to keep using this converter

	while (flag) { // this will make the mode work untill the user says that he want to finish
		std::cout << "You selected the inches to centimeters converter" << '\n';
		while (true) {
			std::cout << "Please insert how many inches you want to convert to centimeters : " << "\n";
			std::cin >> inc;
			if (std::cin.fail()) {
				std::cout << "Invalid input. Please enter a number" << "\n";
				std::cin.clear();
				std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
			}
			else break;
		}// it calculates the conversion and ask if the user wants to continue or not
		std::cout << "Your result is: " << (inc * 2.54) <<" cm" << "\n";
		std::cout << "---------------------------------" << "\n";
		std::cout << "Do you want to keep using this conversion mode?" << "\n";
		std::cin >> keep;
		if (keep == "yes" || keep == "Yes" || keep == "YES" || keep == "Y" || keep == "y") {
			continue;
		}
		else if (keep == "q" || keep == "Q" || keep == "quit" || keep == "QUIT" || keep == "Quit") {
			std::cout << "Thanks for playing.  ";
			exit(0);
		}
		else if (keep == "no" || keep == "No" || keep == "NO" || keep == "N" || keep == "n") {
			flag = false;
		}
	}
}
void cmToInch() {
	double cm; // this will hold the first value of any conversion

	bool flag = true;		// Flag variable 
	std::string keep; // this will hold the decision of the user to keep using this converter

	while (flag) { // this will make the mode work untill the user says that he want to finish
		std::cout << "You selected the centimeters to inches converter" << '\n';
		while (true) {
			std::cout << "Please insert how many centimeters you want to convert to inches : " << "\n";
			std::cin >> cm;
			if (std::cin.fail()) {
				std::cout << "Invalid input. Please enter a number" << "\n";
				std::cin.clear();
				std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
			}
			else break;
		}
		std::cout << "Your result is: " << (cm * 0.393701) << "`" << "\n";
		std::cout << "---------------------------------" << "\n";
		std::cout << "Do you want to keep using this conversion mode?" << "\n";
		std::cin >> keep;
		if (keep == "yes" || keep == "Yes" || keep == "YES" || keep == "Y" || keep == "y") {
			continue;
		}
		else if (keep == "q" || keep == "Q" || keep == "quit" || keep == "QUIT" || keep == "Quit") {
			std::cout << "Thanks for playing.  ";
			exit(0);
		}
		else if (keep == "no" || keep == "No" || keep == "NO" || keep == "N" || keep == "n") {
			flag = false;
		}
	}
}
void metricConversionCalculator() {
// welcoming the user and ask him what kind of conversion he wants to do
	std::string options;
	do {
		metricCompMenu();

		std::cin >> options;
		if (options == "1") {
			mphToKph();
		}
		else if (options == "2") {
			kphToMph();
		}
		else if (options == "3") {
			celToFah();
		}
		else if (options == "4") { 
			FahToCel();
		}
		else if (options == "5") {
			inchToCm();
		}
		else if (options == "6") {
			cmToInch();
		}
		else if (options == "7" || options == "exit" || options == "Exit") {
			break;
		}
		else if (options == "q"|| options == "Q"|| options == "quit"|| options == "QUIT"|| options == "Quit") {
			std::cout << "Thanks for playing.  ";
			exit(0);
		}
	} while (options != "7"|| options != "exit" || options != "Exit");
}