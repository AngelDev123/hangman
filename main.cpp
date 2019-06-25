#include <iostream>
#include <fstream>
#include <string>
#include <ctime>
#include <vector>
using namespace std;
string wordState = "";	//For the current word state
string defaultWords[12] = {"Programming", "Language", "C Plus Plus", "Recursion", "UML", "Class Inheritance", 
						"Asymptotic Notation", "Space Complexity", "Exchange Sort", "Quick Sort", "Templates", "Operator Overloading"};
vector<char> lettersUsed;	//To keep track of letters used
vector<string> wordsUsed;	//FOR HARD MODE ONLY!!
int SIZE;




//Creating a temporary copy of the original word
string createTemp(string origWord){
	string temp = origWord;
	
	for(int i = 0; i < temp.length(); i++){
		temp[i] = tolower(temp[i]);
	}

	return temp;
}

//Display current state of 'wordState'
