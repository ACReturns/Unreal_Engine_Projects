// HelloWorld.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>
#include<cmath>

using namespace std;

void FunctionSuccess()
{
	cout << "Function Successful!\n";
}

int Add(int A, int B)
{
	return A + B;
}

int Add(int A, int B, int C)
{
	return A + B + C;
}

int Multiply(int A, int B)
{
	return A * B;
}

#pragma region MyRegion
// Classes in C++ 
class NewClass
{
public:
	int timesTen;

	void Success()
	{
		cout << "Method inside of class success\n";
	}

	void Outsider();
private:
	int hiddenNum;

public:
	int NumberCount(int count)
	{
		return hiddenNum = count;
	}

	int GetHiddenNumber()
	{
		return hiddenNum;
	}

protected:
	string protectBubble;
};

// external class definition for internal class
void NewClass::Outsider()
{
	cout << "Method outside of class success\n";
}

class SetTerm
{
protected:
	string power;
};

class JoinUs : public SetTerm
{
public:
	void SetTag(string name)
	{
		power = name;
	}

	string GetTag()
	{
		return power;
	}
};

class Ultimate : public NewClass, public JoinUs
{

};
#pragma endregion

int main()
{
	char beez = 'A';
	int age = 39;
	int a = 1, b = 2, c = 3;
	double money = 20.25;
	bool isOld = false;
	string name = "Don";
	int ten = 10;
	int& refTen = ten;
	NewClass classObj;
	JoinUs joinObj;
	Ultimate ultiObj;

	classObj.timesTen = 10;
	joinObj.SetTag("Virgil");
	ultiObj.SetTag("Wow");


	cout << "Hello World!\n";
	cout << "Working in C++\n";
	cout << "Hi " + name + "\n";
	cout << a + b + c + "\n";
	if (isOld)
	{
		cout << "You're ancient!\n";
	}
	else
	{
		cout << "You're pretty young\n";
	}

	if (!isOld == true)
	{
		cout << "Its true\n";
	}

	if (ten > 5 && 1 < 4)
	{
		cout << "AND operator\n";
	}

	if (2 == 2 || 3 > 2)
	{
		cout << "OR operator\n";
	}
	/*cout << "You have $" << money << "\n";
	cout << "You are " << age << " years old\n";
	cout << "The letter now is " + to_string(beez) + "\n";
	cout << "This is the number ten:" << ten;*/

	/*ten <<= 4;
	cout << ten << "\n";

	int nine = 10;
	nine &= 5;
	cout << nine << "\n";

	string entry;
	cout << "Write something\n";
	getline(cin, entry);
	cout << "You wrote: " << entry;*/

	cout << max(2, 20) << "\n";
	cout << sqrt(24) << "\n";
	cout << round(21.4) << "\n";
	cout << pow(2, 7) << "\n";

	 int i = 0;
	 while (i < 3)
	 {
		 cout << "Current number is: " << i << "\n";
		 i++;
	 }

	int randomNun = rand() % 10;

	switch (randomNun)
	{
		case 1:
		{
			cout << "Number was 1\n";
			break;
		}
		case 3:
		{
			cout << "Number was 3";
			break;
		}
		case 5:
		{
			cout << "Number was 5";
			break;
		}
		case 7:
		{
			cout << "Number was 7";
			break;
		}
		case 9:
		{
			cout << "Number was 9";
			break;
		}

		default:
		{
			cout << "The number was even";
		}
	}

	i = 0;

	do
	{    
		cout << i << "\n";
		i++;

		if (i == 7)
		{
			cout << "Dragonballs!\n";
			break;
		}

		if (i == 6)
		{
			cout << "Prepare yourself!\n";
			continue;
		}
	} while (i != 10);

	for (int x = 0; x < 5; x++)
	{
		cout << "Test number: " << x << "\n";
	}

	string dragonBalls[7] = { "One star", "Two star", "Three star", "Four star", "Five star", "Six star", "Seven star"};
	cout << dragonBalls[3] << "\n";

	for (int d = 0; d < 7; d++)
	{
		cout << dragonBalls[d] << "\n";
	}

	string notRef = "Uplift";
	string& reference = notRef;
	string* ptr = &reference;

	cout << reference << "\n";
	cout << &notRef << "\n";
	cout << ptr << "\n";
	cout << *ptr << "\n";

	FunctionSuccess();

	cout << Add(refTen, 2) << "\n";
	cout << Add(19, 4, 7) << "\n";
	cout << Multiply(19, classObj.timesTen) << "\n";
	classObj.Success();
	classObj.Outsider();

	classObj.NumberCount(300);
	cout << classObj.GetHiddenNumber() << "\n";
	cout << joinObj.GetTag() << "\n";
}