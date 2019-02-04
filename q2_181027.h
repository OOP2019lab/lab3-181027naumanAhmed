#include<iostream>
using namespace std;

class rectangle
{
	private:

		int length;
		int width;

	public:

		int getWidth();
		int getLength();
		void setLength(int);
		void setWidth(int);
		int getArea();
		void rotateRectangle();
		void drawRectangle();
};