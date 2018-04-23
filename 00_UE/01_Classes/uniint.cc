// classes and uniform initialization 
#include <iostream>
using namespace std; 

class Circle
{
	double radius; 
	public: 
		Circle(double r) 
		{
			radius = r; 
		}
		double circum()
		{
			return(2*radius*3.14159); 
		}
};

int main() 
{
	//Circle foo (10.0); //functional form
	//We'r about to use the uniform init more likle because the assignment init is just for one parameter
	Circle ass = 39.0; 

	cout << "unis circumference: " << ass.circum() << endl; 
	return 0; 
}

