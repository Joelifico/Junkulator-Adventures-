/*
	Calculator which solves different kind 
	of problems. It will solve problems such as metric conversions, Grades calculators,
	and more options
	Joel Forero Mejia Started day: 1/18/2023 finished day: 1/27/2023
	Junkilator Adventures
	Assigment #1
*/

#include <iostream>
#include <string> 

#include "declerations.h"
//-------------------------
using namespace std;

int main() {

	// This part of the program will excecute the starting screen and will prompt the user about its name 
	std::cout << "------- Welcome To JunkuLater-------- " << "\n";
	std::cout << "Please enter your full name: " << "\n";
	std::string name;
	std::string decision;
	std::getline(std::cin,name,'\n');
	//std::cin >> name ;
	std::cout << "Thank you " << name << ", Welcome to our JunkuLator Adventures !!!!!!!" << "\n";

	//-----------------------------------------------------------------------------------------------------------

	
	do {
		// displpay menu
		principalMenu();
		std::cin >> decision;// take the input from the user and store it in the variable decision
		std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n'); // ignore the previous inputs 
		
		if (decision == "1") {
			std::cout << "You had selected Math Calculator" << "\n";
			mathCalculator();
		}
		else if (decision == "2") {
			std::cout << "You had selected the Metric Conversion Calculator" << "\n";
			metricConversionCalculator();// Metric converter programa
		}
		else if (decision == "3") {
			std::cout << "You had selected the Grades Calculator" << "\n";
			gradesCalculator(); // Grades Calculator program
		}
		else if (decision == "4") {
			std::cout << "You had selected the String Tokenizer" << "\n";
			StringTokenizer(); // String Tokenizer program
		}
		else if (decision == "5"|| decision == "h"|| decision== "H") {
			helpMessage(); // Help message program
		}
		else if (decision == "6" || decision == "Q" || decision == "q" || decision == "Quit"
			|| decision == "quit" || decision == "QUIT") {
			std::cout << "Thank you for playing 8)" << "\n"; // all the keywords and element the user has to type to stop the program
			break;
		}
	} while (decision != "6" || decision != "Q" || decision != "q" || decision != "Quit"
		|| decision != "quit" || decision != "QUIT");
}