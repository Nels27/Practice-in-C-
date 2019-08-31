#include "stdafx.h"
#include <iostream>
#include <cmath>
#include <fstream>
#include <string>

using namespace std;



// Practice script for C++ concepts

class FileParser {

private:
	bool fileStatus;
	char firstCharacter;
	string file_name;

public:

	FileParser() {} // Default Constructor

	void setFileName(string fileName)
	{
		this->file_name = fileName;
	}

	bool getFileStatusForInput(const string& fileCheck)
	{
		ifstream f(fileCheck.c_str());
		return f.good();  //Checks if the state of the stream is good
	}

	void inputValidation(bool fileStatus)
	{
		if (fileStatus) {
			cout << "This file is present." << endl;
		}
		else {
			cout << "This file is not present." << endl;
		}
	}


};

int main()
{


	//Testing file parsing

	FileParser fParse = FileParser();

	string testFile;
	bool a;

	testFile = "dummyFile";
	FILE *fp = fopen(testFile.c_str(), "r"); //Creating a file pointer

	fParse.setFileName(testFile);
	a = fParse.getFileStatusForInput(testFile);
	fParse.inputValidation(a);

    return 0;
}

