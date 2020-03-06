#include "pch.h"
#include <iostream>
#include <string>

using namespace std;

int main()
{
    // Different ways to initialize strings
	string s1 = "Apple";
	string s2 = "Orange";
	string s3 { s1, 0, 3 }; // App
	string s4 ( 10, 'X' ); // XXXXXXXXXX
	cout << s1 << endl;
	cout << s2 << endl;
	cout << s3 << endl;
	cout << s4 << endl;
	cout << endl;

	//--------------------------------------------------------------//
	
	// Comparing strings
	cout << boolalpha; // Outputs true or false, instead of 1 or 0
	cout << "s1 == s2: " << (s1 == s2) << endl;
	cout << "s1 >= s2: " << (s1 >= s2) << endl;
	cout << "s4 < s1: " << (s4 < s1) << endl;
	cout << "s1 == s1: " << (s1 == s1) << endl;
	cout << endl;

	//--------------------------------------------------------------//

	// Changing letters in strings
	s1.at(0) = 'T';
	cout << "s1.at(0) = T: " << s1 << endl;
	s4.at(8) = '*';
	cout << "s4.at(8) = *: " << s4 << endl;
	cout << endl;

	//--------------------------------------------------------------//

	// Using concatenation with strings
	s1 = s1 + " and " + s2;
	cout << "s1 + and + s2 = " << s1 << endl;
	cout << endl;

	//--------------------------------------------------------------//

	// Looping through a string with a for loop
	for (int i = 0; i < s3.length(); i++) // Using size_t because we don't want the interger to be negative
	{
		cout << s3.at(i);
	}
	cout << "\n\n";

	//--------------------------------------------------------------//

	// Using a range-based for loop with a string
	for (char c : s4)
	{
		cout << c;
	}
	cout << "\n\n";

	//--------------------------------------------------------------//

	// Using a .substr() to count a loop
	string s5 = "This is a long string!";
	cout << "s5 = " << s5 << endl;
	cout << "s5.substr(0,5): " << s5.substr(0, 5) << endl;
	cout << "s5.substr(5,10): " << s5.substr(5, 10) << endl;
	cout << endl;

	//--------------------------------------------------------------//

	// Using the .erase() function
	cout << "s5 = " << s5 << endl;
	cout << "s5.erase(0,5) = " << s5.erase(0, 5) << endl;
	cout << endl;

	//--------------------------------------------------------------//

	// Using getline() to get full sentence strings
	string full_name = "";
	cout << "Enter your Full name: ";
	getline(cin, full_name);
	cout << "Full name = " << full_name << endl;
	cout << endl;


	//---------- Video Challenge ----------------------------------//

	string alphabet = "abcdefghijklmnopqrstuvwxyz ";
	string encrypt_ = "QETUOADGJLXVNWRYIPSFHKZCBM ";
	string userWord; // Used to hold users sentence
	string encryptWord;
	string lowerCaseWord;

	cout << "Please enter a secret message you would like to be encrypted: ";
	getline(cin, userWord);

	
	for (int i = 0; i <= userWord.length() - 1; i++)
	{
		lowerCaseWord += tolower(userWord.at(i));
	}

	cout << endl;

	size_t position;
	for (size_t i = 0; i <= userWord.length() - 1; i++)
	{
		position = alphabet.find(lowerCaseWord.at(i));
		
		encryptWord += encrypt_.at(position);
	}
	
	cout << encryptWord;

	//--------------------------------------------------------------//
	

	return 0;
}
