#include<iostream>
#include <fstream>
#include <string>
#include<sstream>
#include <vector>
#include <map>
#include "declerations.h"
using namespace std;

// function that will assign the letters for the grades 
void assignLetters(double result) {
	if (result >= 95) {
		std::cout << "A";
	}
	else if (result >= 90 && result <= 95) {
		std::cout << "A-";
	}
	else if (result >= 85 && result <= 89) {
		std::cout << "B+";
	}
	else if (result >= 80 && result <= 84) {
		std::cout << "B";
	}
	else if (result >= 75 && result <= 79) {
		std::cout << "C+";
	}
	else if (result >= 70 && result <= 74) {
		std::cout << "C";
	}
	else if (result >= 65 && result <= 69) {
		std::cout << "D+";
	}
	else if (result >= 60 && result <= 64) {
		std::cout << "D";
	}
	else  {
		std::cout << "F";
	}

}




void gradesCalculator() {
	// variable declaration
	
	string name{}; 
	string students{};
	ifstream file("Notes.txt");
	while (file.good()) { // this is checking if the file has any data to read.
		vector<int> grades{}; // vector that will holds the grades 
		getline(file, students); 
		stringstream ss(students);// make a string stream that will holds the values that the variable students stores
		getline(ss,name, ',');// the ',' its telling that every time it sees the commas, that would be separated the unportation
		//vector<int>::iterator i=grades.begin();
		string temp{}; 
		while (ss.good()) {// its checking if the string stream has data to read. 
			getline(ss, temp, ',');
			grades.push_back(stoi(temp));// this will push into the vector the grades from the students
		}
		vector<int>::iterator j{};// the iterator variable form a for loop
		double avg{}; //  this will store the final grade from the students
		int sum{};// it will store the addition of all the grades together
		for (j = grades.begin(); j != grades.end();j++) {
			sum += *j;// this will add the grades together
		}
		avg = sum / grades.size(); // take the average
		cout << name << "'s grade is ";
		assignLetters(avg); // assing the letter for each grade
		cout <<" with a score of = " << avg<< endl;
	}
	file.close();
}
	
	



