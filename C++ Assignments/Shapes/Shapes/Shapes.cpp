// Shapes.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

using namespace std;

class Shape
{
public:
	string Color;

	void getArea()
	{
		cout << "Get shape area";
	};
};

class Rectangle : Shape
{
public:
	int Height = 6;
	int Width = 10;

	void SetShapeColor()
	{
		Color = "Green";
	}
	
	void getArea()
	{
		cout << "Rectangle \nHeight: " << Height << "\nWidth: " << Width
			<< "\nColor: " << Color << "\n\n";
	}
};

class Triangle : Shape
{
public:
	int Base = 20;
	int Height = 15;

	void SetShapeColor()
	{
		Color = "Red";
	}

	void getArea()
	{
		cout << "Triangle \nHeight: " << Height << "\nTriangle Base: " << Base
			<< "\nColor: " << Color << "\n\n";
	}
};

class Circle : Shape
{
public:
	int Radius = 30;

	void SetShapeColor()
	{
		Color = "Orange";
	}

	void getArea()
	{
		cout << "Circle \nRadius: " << Radius << "\nColor: " << Color << "\n\n";
	}
};



int main()
{
	Rectangle rectObj;
	Triangle triObj;
	Circle cirObj;

	rectObj.SetShapeColor();
	rectObj.getArea();

	triObj.SetShapeColor();
	triObj.getArea();
	
	cirObj.SetShapeColor();
	cirObj.getArea();
}


