// FunctionsDemo.cpp
// Lance Zotigh (lzotigh1@cnm.edu)
// Date: 2/19/2020
// Pourpose Demo Functions

#include <iostream>
#include <string>

using namespace std;
// prototypes
void Header();
string ToUpperCase(string text);
void write(string text);
string GetTextFromUser();

int main()
{
	string userText;
	Header();
	userText = GetTextFromUser();
	DisplayText(userText);//argument

	string uc = ToUpperCase(userText);
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

string ToUpperCase(string text) 
{
	string uppercase = "";

	for (int i = 0; i < text.length(); ++i) 
	{
		//uppercase to lowercase
		uppercase += toupper(text.at(i));
	}
	return uppercase;
}