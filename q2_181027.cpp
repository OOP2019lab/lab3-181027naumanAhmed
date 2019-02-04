#include"rectangle.h"

void printrectangle(rectangle);

int main()
{
	// two variables for input as direct access is not allowed.
	int rectlen, rectwid; 
	rectangle rectangle1;

	cout << "enter length and width of rectangle : ";
	cin >> rectlen >> rectwid;

	// assigning values to member variables using functions
	rectangle1.setLength(rectlen);
	rectangle1.setWidth(rectwid);

	printrectangle(rectangle1);

	// rotating rectangle
	rectangle1.rotateRectangle();

	cout << "after rotation, rectangle will become\n";
	printrectangle(rectangle1);


	return 0;
}

void printrectangle(rectangle rect)
{
	cout << "length of rectangle = " << rect.getLength();
	cout << "\nwidth of rectangle = " << rect.getWidth();
	cout << "\narea of rectangle = " << rect.getArea();
	cout << "\nthe rectangle is = \n";
	rect.drawRectangle();
}