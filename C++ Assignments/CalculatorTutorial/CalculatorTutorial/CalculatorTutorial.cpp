// CalculatorTutorial.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "Calculator.h"
#include <string>
#include <stdio.h>

using namespace std;

int main()
{
    double x = 0.0;
    double y = 0.0;
    double result = 0.0;
    char oper = '+';
    

    cout << "Calculator Console Application" << endl << endl;
    cout << "Please enter the operation to perform. Format: a+b | a-b | a*b | a/b"
        << endl;

    Calculator c;
    while (true)
    {
        cin >> x >> oper >> y;
        // Sort out how to verify that invalid inputs also exit out ie: _90 should return saying invalid number
        
        if (oper == '/' && y == 0)
        {
            cout << "Division by 0 exception" << endl;
            continue;
        }
        else if (cin.fail())
        {
            cout << "Not a valid number" << endl;
            break;
        }
        else
        {
			result = c.Calculate(x, oper, y);
            cout << "Result is: " << result << endl;
        }
    }

    return 0;
}

void userQuestion()
{
    cout << "Please enter the operation to perform. Format: a+b | a-b | a*b | a/b"
        << endl;
}
