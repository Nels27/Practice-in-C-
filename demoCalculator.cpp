#include "stdafx.h"
#include <iostream>
#include <cmath>
#include <fstream>
#include <string>

using namespace std;



// Practice script for C++ concepts


class Calculator {


private:
	int val; //The value that will be manipulated
	
public:


	Calculator(int val)
	{
		this->val = val;
	}

	Calculator() {} // Default Constructor

	void setVal(int i) {
		val = i;
	}

	void getVal() {
		cout << "The current value is : " << val << endl;
	}

	float divide(float divisor) {
		float answer;

		answer = val / divisor;

		setVal(answer);

		return answer;
	}

	float multiply(float multiplier) {
		float answer;

		answer = val * multiplier;
		
		setVal(answer);

		return answer;
	}

	float subtract(float subtractor) {
		float answer;

		answer = val - subtractor;

		setVal(answer);

		return answer;
	}

	float add(float additive) {
		float answer;

		answer = val + additive;

		setVal(answer);

		return answer;
	}

	int divide(int divisor) {
		int answer;

		answer = val / divisor;

		setVal(answer);

		return answer;
	}

	int multiply(int multiplier) {
		int answer;

		answer = val * multiplier;

		setVal(answer);

		return answer;
	}

	int subtract(int subtractor) {
		int answer;

		answer = val - subtractor;

		setVal(answer);

		return answer;
	}

	int add(int additive) {
		int answer;

		answer = val + additive;

		setVal(answer);

		return answer;
	}

};

int main()
{

	// Calculator class tests 

	
	Calculator calc = Calculator(3);

	calc.setVal(3);
	calc.getVal();
	calc.divide(1);
	calc.getVal();
	calc.multiply(2);
	calc.getVal();
	
	
	return 0;
}