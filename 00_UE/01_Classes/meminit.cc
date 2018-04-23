//hence well make an exemple with member initialisation in Construvtors
//The syntax is like Rectangle::Rectange(int x, int y) : width(x), length(y) { }
//The accssess for a method is lke Rectangle::set_values(int x, int y) { }
//furthermor well define two classes. Circle and Cylinder
//
#include<iostream>

using namespace std; 

class Circle
{ 
	double radius; 
	public: 
		Circle(double r) : radius(r) { } 
		double area()
		{
			return(radius * 2 * 2.1415); 
		}
};

class Cylinder
{ 
	Circle base; 
	double height; 
	public: 
		Cylinder(double r, double h) : base(r), height(h) { }
		double volume()
		{
			return(base.area()*height); 
		}
}; 

int main()
{
	Cylinder foo(10.00,33.0); 

	cout << "Cylinders volume: " << foo.volume() << endl; 
	return 0; 

}	

