#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

// function that will search through the sentences and will detect if the word 
// is found or not
void isTheWorldFound(string phrase, string tolook) {
	
	//size_t and .find are able to look through the entire sentes
	size_t flag = phrase.find(tolook);
	if (flag != string::npos) {// npos means until the end of the sentences
		std::cout << "The word was found in the sentences"<<"\n";
	}
	else {
		std::cout << "The word was not found in the sentences"<<"\n";
	}

}
// function that will search through the entire sentences
void capitalLetters(string phrase) {
	std::string word = "";
	for (int i = 0; i < phrase.size();i++) { // this will look through the sentences and use the isalpha to
		// see if theres any capital letter in the word and store it in the word variable
		if (isalpha(phrase[i])) {
			word += phrase[i];		
		} // this will print out the word that has capital letter
		else if (word.size()>0) {
			if (word[0]>='A'&& word[0]<= 'Z') {
				cout << "The word that has capital letter are:  " << word << "\n";
				//cout << word << '\n';	
			}
			word = "";
		}
		
	}		// this will find and print out the word that has a capital letter 
		if (word.size()>0) {
			if (word[0]>= 'A'&& word[0]<='Z') {
				cout << "The word that has capital letter are:  " << word << "\n";
		}
	}
	
}
// function that will print the sentences that the user typed backwards
void printBackwards(string phrase) {
	string sentences = phrase; // store the sentences in this variable  

	// 
	std::cout << "The sentence backwards is: "<<'\n';
	//go through the entire senteces but backwards and it also print them in that order
	for (int i = sentences.length() - 1; i >= 0;i--) {
		std::cout << sentences[i];
	}
	std::cout << "\n";
}

void letterCount(string phrase) {
	// function will count the letters in a sentences
	int count = phrase.length();
	std::cout <<"number of letters:  "<< count <<"\n";
}

//function that will go through the entire sentences and it will count each word
void wordsCount(string phrase) {
	int count = 0;
	bool inWord = false;
	for (int i = 0; i < phrase.length(); i++ ) {
		if (phrase[i] != ' '&& !inWord) {
			count++;
			inWord = true;
		}
		else if (phrase[i]== ' ') {
			inWord = false;
		}
	}

	std::cout << "number of words: "<< count << " words"<< "\n";
}
void StringTokenizer() { // main program of the string tokenizer
	string find;
	string sentences;
	string keep;
	do {
		std::cout << "Please type the phrase you want me to analyze for you " << '\n';
		std::getline(std::cin, sentences);


		std::cout << "Your word has" << '\n';
		// this will call all the function
		letterCount(sentences);
		wordsCount(sentences);
		printBackwards(sentences);
		capitalLetters(sentences);
		//---------Space-----------------
		std::cout << std::endl;
		std::cout << "Enter any word you want to find in your sentences? " << "\n";
		std::getline(std::cin, find);
		isTheWorldFound(sentences, find);
		std::cout << std::endl;

		std::cout << " Do you want to keep using this mode?" << "\n";
		std::cin >> keep;
		if (keep == "no" || keep == "NO" || keep == "No" || keep == "n" || keep =="N" ) {
				break;
			}
			else if (keep == "yes" || keep == "Yes" || keep == "YES"|| keep == "y"|| keep == "Y") {
				std::cin.clear();// cleaning the previous answers and restore the inputs
				std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
				continue;
			}
			else if (keep == "quit"|| keep == "QUIT"|| keep == "Quit"|| keep == "q"|| keep =="Q") {
				exit(0);
			}
			else {
				// this will clear the previous answer. its like a reset bt
				std::cin.clear();
				std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
			}
		} while (keep != "no" || keep != "No" || keep != "NO");

	}