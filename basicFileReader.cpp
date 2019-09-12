
#include <iostream>
#include <fstream>
#include <stdio.h>
#include <string>

using namespace std;

int main()

{
    string line;
    ifstream readingFile;
    readingFile.open("testFile.txt");

    if (readingFile.is_open())
    {
        while(getline(readingFile,line))
        {
            cout << line << '\n';
        }
        readingFile.close();

    }

    else cout << "Unable to open file";


    }
