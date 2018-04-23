//here we are going to overload the constructors
//why overloading? a constructor can also be overloaded with different versions
//taking different parameters: with a different number of parameters and types. 
//the compiler will automatically call the one whose parameters match the arguments
//

#include<iostream>
using namespace std; 

class Rectangle
{
	int width, height;  // Atributs of the Class Rectangle. accsess in the class
	public:             // Acsess from anywhere the object Rectangle is visible
			    // e.g private members are only accsessable by members of the same class
			    // protected members are furthermore accsessable by derivates of the class
	Rectangle (); 
	Rectangle (int, int); 
	int area(void) 
	{
		return(width*height); 
	}
};

Rectangle::Rectangle()      //Here we call the first Constructor 
{
	width = 5; 
	height = 5; 
}

Rectangle::Rectangle(int a, int b) //and here the second. 
{
	width = a; 
	height = b; 
}

int main()
{
	//The GCC compiler decides wich one to use
	Rectangle rec(3,10); 
	Rectangle recb; //these are the default constructors 
	Rectangle recc; 

	cout << "A area: " << rec.area() << endl; 
	cout << "B area: " << recb.area() << endl; 
	cout << "C area: " << recc.area() << endl; 
	return 0; 
}
