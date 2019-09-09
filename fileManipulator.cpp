
#include <iostream>
#include <iomanip>
#include <fstream>

//using namespace std;


bool byteCheck(int hexVal) {

	bool inputValCheck;

	if(hexVal == 0x47) {
		inputValCheck = true;
	} else {
		inputValCheck = false;
	}
}

int hexConvert(int hexVal) {

	int inputValConvert;
	
	hexVal >> std::hex >> inputValConvert;

	return inputValConvert;
}

int main() {

	fstream myfile;  //stream class to read from files
	myfile.open("segment.ts");
	int byte;
	int tallyCheck[25];
	int tallyVal;

	while(myfile.is_open())
	{
		for (int i = 0; i<= 187; i++) {

			byte = getline(myfile,byte,',');

			if(i == 0 && byteCheck(byte)) {
				printf("Asynchronus byte found");

			} else if( i == 0 && !byteCheck(byte)) {

				printf("Asynchronus byte not found");
				//printf(/n);
				printf("Closing file");
				myfile.close();

			} else { //Stretch goal

				tallyVal = hexConvert(byte);
				tallyCheck[tallyVal]++; // increasing the tally at that index

			}
		}

	}

			//Stretch Goal continued
	for (int k = 0; k <= 24; k++) {
		int printCount = tallyCheck[k];

		printf(k + ":");

		for (int j = 0; j <= printCount; j++) {
			printf("[]");
		}
	}


	return 0;

}