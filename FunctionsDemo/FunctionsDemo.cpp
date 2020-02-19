// FunctionsDemo.cpp
// Lance Zotigh (lzotigh1@cnm.edu)
// Date: 2/19/2020
// Pourpose Demo Functions

#include <iostream>
#include <string>

using namespace std;

void Header(); //prototype

int main()
{
	Header();

	return 0;
}

void Header() //definition
{
	string userText;
	cout << "Welcome to Functions Demo!" << endl;
	GetTextfromUser();
	userText = GetTextfromUser();
	cout << userText << endl;
}

string GetTextfromUser()
{
	string text;
	cout << "Please enter the lint of text: ";
	getline(cin, text);
	return text;
}
