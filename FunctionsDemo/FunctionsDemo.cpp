// FunctionsDemo.cpp
// Lance Zotigh (lzotigh1@cnm.edu)
// Date: 2/19/2020
// Pourpose Demo Functions

#include <iostream>
#include <string>

using namespace std;
// prototypes
void Header();
string GetTextFromUser();

int main()
{
	string userText;
	Header();
	userText = GetTextFromUser();
	DisplayText(userText);//argument
	DisplayText("blah blah blah");

	char uc = ToUpperCase('y');
	cout << uc << endl;
	return 0;
}

// Definitions
void Header() 
{
	cout << "Welcome to Functions Demo!" << endl;
}

string GetTextFromUser()
{
	string text;
	cout << "Please enter the lint of text: ";
	getline(cin, text);
	return text;
}

void DisplayText(string text)//parameter
{
	cout << text << endl;
}

char ToUpperCase(char character) 
{
	char uppercase;
	uppercase = toupper(character);
	return uppercase;
}