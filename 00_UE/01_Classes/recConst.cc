//classes example with class constructors
//
#include <iostream>
using namespace std; 

class Rectangle 
{
	int width, height; 
       public: 
		Rectangle(int, int); // Here we set the constructor for the class 
				     //this allows us to initialize the member vars or allocate storage
		int area() 
		{
			return width*height; 
		}
};

Rectangle::Rectangle(int x, int y)
{
	width = x; 
	height = y; 
}

int main()
{
	Rectangle rect(3,4);
        Rectangle rectb(5,6); 	
 
	cout << "area A: " << rect.area() <<endl;
        cout <<	"area B: " << rectb.area() <<endl; 
	return 0; 
}
