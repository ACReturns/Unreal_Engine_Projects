#include <iostream>

using namespace std;

class Dog
{
	public:
		string Breed;
		string Color;
		int Height;
		int Weight;
	
		void Shake()
		{
			cout << "Shake boy\n";
		}
	
		void Sit()
		{
			cout << "Sit\n";
		}
	
		void Laydown()
		{
			cout << "Lay down\n";
		}
};

int main()
{
	Dog dogBreed;
	dogBreed.Breed = "Hound";
	dogBreed.Color = "Brown";
	dogBreed.Height = 2;
	dogBreed.Weight = 60;

	cout << "Breed: " << dogBreed.Breed << "\n" << "Color: " << dogBreed.Color << "\n" <<
		"Height: " << dogBreed.Height << " feet\n" << "Weight: " << dogBreed.Weight << " pounds\n";

	dogBreed.Shake();
	dogBreed.Sit();
	dogBreed.Laydown();
}
