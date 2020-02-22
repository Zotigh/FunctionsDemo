// FunctionsDemo.cpp
// Lance Zotigh (lzotigh1@cnm.edu)
// Date: 2/19/2020
// Pourpose Demo Functions

#include <iostream>
#include <string>

using namespace std;
// prototypes
void Header();
void Write(string text);
string GetTextFromUser();
string convertTextToLower(string text);
string convertTextToUpper(string text);
string getTextFromUser();

int main()
{
	string userText;
	Header();
	userText = GetTextFromUser();
	DisplayText(userText);//argument

	textToConvert = getTextFromUser();

	string uc = convertTextToUpper(userText);
	cout << uc << endl;

	//show text in lower case 
	lowerCaseText = convertTextToLower(textToConvert);
	cout << "Lower case version" << lowerCaseText << endl;

	//ask user to input some text to search for
	cout << endl << "Late's fid something in your text." << endl;
	textToFind = getTextFromUser();

	//find and report the position of that text
	int textLocation = textToConvert.find(textToFind);
	if (textLocation != string::npos)
	{
		cout << "Found " << textToFind << " in " << textToConvert
			<< " at " << textLocation << "!" << endl;

	} else 
	{
		cout << "Text not found!" << endl;
	}

	return 0;
}

//Get user input
string getTextFromUseer() 
{
	string lineOfText;
	cout << "Please enter a line of text: ";
		getline(cin, lineOfText);
	return lineOfText;
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

void Write(string text)
{
	cout << text << endl;
}

void DisplayText(string text)//parameter
{
	cout << text << endl;
}

string convertTextToUpper(string text)
{
	string uppercase = "";

	for (int i = 0; i < text.length(); ++i)
	{
		//uppercase to lowercase
		uppercase += toupper(text.at(i));
	}
	return uppercase;
}

	// Convert to lower case
	string convertTextToLower(string text) 
	{
		string resultText = "";

		for (int i = 0; i < text.size(); ++i) 
		{
			resultText += tolower(text[i]);
		}
		return resultText;
	}

}




