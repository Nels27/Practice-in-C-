
#include <iostream>
#include <fstream>
#include <stdio.h>
#include <string.h>

using namespace std;

int main()

{
    int pos;
    string fileName;
    string line;
    ifstream readingFile;
    string ending;
    ending = ".ts";

    cout << "What is the name of the file?" << endl;
    cin >> fileName;

    string fullFilename = strcat(fileName,ending);

    readingFile.open(fullFilename,ios::binary | ios::in);

    while (readingFile.is_open())
    {
        readingFile.read(&x,1);
        {
            cout << line << '\n';
        }
        readingFile.close();

    }

    //else cout << "Unable to open file";


    }
