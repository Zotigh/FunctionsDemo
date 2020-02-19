// FunctionsDemo.cpp
// Lance Zotigh (lzotigh1@cnm.edu)
// Date: 2/19/2020
// Pourpose Demo Functions

#include <iostream>
#include <string>

using namespace std;

void Header(); //prototype

int main() //definition
{
	Header();

	return 0;
}

void Header()
{
	cout << "Welcome to Functions Demo!" << endl;
}

string GetTextfromUser()
{
string text;
cout << "Please enter the lint of text: ";
getline(cin, text);
return text;
}
