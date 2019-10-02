
#include "stdfix.h"
#include "stdio.h"
#include "math.h"
#include "string.h"
#include "iostream"
#include "fstream"



char strSwapper(str toBeChanged)
{
    int strLength = toBeChanged.size();
    int centerVal = '';
    int oddMid = int((strLength - 1)/2);
    int evenMid = int(strLength/2);
    int remainder = mod(strLength,2);
    char tempFront;
    char tempBack;
    char finalString;

    if (remainder > 0) {

        centerVal = toBeChanged[oddMid];
        
        for (int i = 0, i < oddMid, i++){

            tempFront = toBeChanged[oddMid + (i+1)];
            tempBack = toBeChanged[oddMid - (i+1)];
            finalString = tempFront + centerVal + tempBack;

        }

    } else {
        for (int i = 0,i < evenMid, i++){

            tempFront = toBeChanged[evenMid + (i)];
            tempBack = toBeChanged[evenMid - (i+1)];
            finalString = tempFront + centerVal + tempBack;
        }
    }


    return finalString;


}


int main()
{
    char adjustedStr;

    adjustedStr = strSwapper()

}