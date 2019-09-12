
#include <iostream>
#include <iomanip>
#include <fstream>
#include <string>
#include "math.h"

using namespace std;


bool byteCheck(int hexVal) {

    bool inputValCheck;

    if(hexVal == 0x47) {
        inputValCheck = true;
    } else {
        inputValCheck = false;
    }
}


unsigned long hex2dec(string hex)
{
    unsigned long result = 0;
    for (int i=0; i<hex.length(); i++) {
        if (hex[i]>=48 && hex[i]<=57)
        {
            result += (hex[i]-48)*pow(16,hex.length()-i-1);
        } else if (hex[i]>=65 && hex[i]<=70) {
            result += (hex[i]-55)*pow(16,hex.length( )-i-1);
        } else if (hex[i]>=97 && hex[i]<=102) {
            result += (hex[i]-87)*pow(16,hex.length()-i-1);
        }
    }
    return result;
}

int main() {

    ifstream myfile;  //stream class to read from files
    inFile.open("segment.ts");
    int byte;
    int tallyCheck[25];
    int tallyVal;

    while(inFile)
    {
        for (int i = 0; i<= 187; i++) {

            byte = getline(myfile,byte,',');

            if(i == 0 && byteCheck(byte)) {
                printf("Asynchronus byte found");

            } else if( i == 0 && !byteCheck(byte)) {

                printf("Asynchronus byte not found");
                //printf(/n);
                printf("Closing file");
                inFile.close();

            } else { //Stretch goal

                tallyVal = hex2dec(byte);
                tallyCheck[tallyVal]++; // increasing the tally at that index

            }
        }

    }

            //Stretch Goal continued
    for (int k = 0; k <= 24; k++) {
        int printCount = tallyCheck[k];

        printf(string(k) + ":");

        for (int j = 0; j <= printCount; j++) {
            printf("[]");
        }
    }


    return 0;

}
