#include <cmath>
#include <iostream>
#include <fstream>
#include <stdio.h>
#include <string>

using namespace std;


class Calculator {

private:

    float firstValue;
    float secondValue;
    float result;

public:

    Calculator()
    {
        //Default Constructor
    }

    Calculator(float a, float b)
    {
        this->firstValue = a;
        this->secondValue = b;
    }

    void setFirstVal(float valA)
    {
        this->firstValue = valA;
    }

    void setSecondVal(float valB)
    {
        this->secondValue = valB;
    }

    void setResult(float tempResult)
    {
        this->result = tempResult;
    }

    float getFirstVal()
    {
        return firstValue;
    }

    float getSecondVal()
    {
        return secondValue;
    }

    float getResult()
    {
        return result;
    }

    void operationSelector(char op)
    {
        switch (op) {

            case '+':
                this->setResult(this->add());
                break;

            case '-':
                this->setResult(this->subtract());
                break;

            case '*':
                this->setResult(this->multiply());
                break;

            case '/':
                this->setResult(this->divide());
                break;

            default:
                cout << "Error not a valid operation." << endl;
        }

    }

    float add()
    {
        float first, second;
        first = this->getFirstVal();
        second = this->getSecondVal();

        return first+second;
    }

    float subtract()
    {
        float first, second;
        first = this->getFirstVal();
        second = this->getSecondVal();

        return first-second;

    }

    float multiply()
    {
        float first, second;
        first = this->getFirstVal();
        second = this->getSecondVal();

        return first*second;

    }

    float divide()
    {
        float first, second;
        first = this->getFirstVal();
        second = this->getSecondVal();

        return first/second;
    }




};



int main(){

    float firstVal;
    float secondVal;
    char operation;

    Calculator calc;

    cout << "Enter first value" << endl;

    cin >> firstVal;

    calc.setFirstVal(firstVal);

    cout << calc.getFirstVal() << endl;

    cout << "Enter second value " << endl;

    cin >> secondVal;

    calc.setSecondVal(secondVal);

    cout << calc.getSecondVal() << endl;

    cout << "Which operation? (+ = Addition,- = Subtraction,* = Multiplication, / = Division)" << endl;

    cin >> operation;

    calc.operationSelector(operation);


    cout << "Final Result " << calc.getResult() << endl;
}
