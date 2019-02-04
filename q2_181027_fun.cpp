#include"rectangle.h"

void rectangle::setLength(int x)
{
	length = x;
}

void rectangle::setWidth(int y)
{
	width = y;
}

int rectangle::getLength()
{
	return length;
}

int rectangle::getWidth()
{
	return length;
}

int rectangle::getArea()
{
	return length * width;
}

void rectangle::rotateRectangle()
{
	// rotation means to swap length with width
	int temp = length;
	length = width;
	width = temp;
}

void rectangle::drawRectangle()
{
	for (int i = 0; i < width; i++)
	{
		for (int j = 0; j < length; j++)
			cout << "*";
		cout << endl;
	}
}
