// Polymorphism.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

using namespace std;

class Hero
{
public:
    string powers;
    string weakness;

    void Abilities()
    {
        cout << powers << "\n" << weakness << "\n";
    }

    void SetAbilities(string power, string weak)
    {
        powers = power;
        weakness = weak;
    }
};

class Superman : Hero
{
public:
    void Abilities()
    {
		powers = "Everything\n";
        weakness = "Kryptonite\n";
		cout << powers << weakness;
    }
};

class Batman : Hero
{
public:
    void Abilities()
{
	powers = "Money\n";
    weakness = "Alfred\n";
	cout << powers << weakness;
}
};

int main()
{
    Batman batmanObj;
    Superman supermanObj;

    batmanObj.Abilities();
    supermanObj.Abilities();

    int impossibleNum = 1 * 5;
    try
    {
        if (impossibleNum > 20)
        {
            cout << "Literally how?";
        }
        else
        {
            throw (impossibleNum);
        }
        
    }
    catch(int num)
    {
        cout << num << " is no good";
    }
}