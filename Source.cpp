#include<iostream>
#include<iomanip>

using namespace std;

class rectangleType
{
public:
	void setDimensions(int, int);
	int area() const;
	rectangleType intDimensions();
	rectangleType(); // Default constructor
	rectangleType(int, int); // Parameterized constructor

private:
	int length;
	int width;
};

int EndProgram() { cout << "\nEnd Program.\n"; cin.ignore(); cin.get(); return 0; }

int main()
{
	rectangleType oldYard(20, 10);
	rectangleType newYard;
	newYard = oldYard.intDimensions();
	cout << "The area of newYard: " << newYard.area() << endl;

// Call EndProgram()
	EndProgram();
}

void rectangleType::setDimensions(int l, int w)
{
	if (l >= 0)
		length = l;
	else
		length = 0;
	if (w >= 0)
		width = w;
	else
		width = 0;
}

int rectangleType::area() const
{
	return length * width;
}

rectangleType rectangleType::intDimensions()
{
	length = 2 * length;
	width = 2 * width;
	return *this;
}

rectangleType::rectangleType()
{
	length = 0;
	width = 0;
}

rectangleType::rectangleType(int l, int w)
{
	setDimensions(l, w);
}

