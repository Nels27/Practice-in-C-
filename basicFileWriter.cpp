
#include <iostream>
#include <fstream>
#include <stdio.h>

using namespace std;

int main()

{

    ofstream writingFile;
    writingFile.open("test.txt");
    writingFile << "Writing this in the file.\n";
    writingFile.close();

    /*
    for (int i; i<= 9; i++){
        cout << "Inside of the main function"<< endl;

    }
    */

}
