#include <iostream>
using namespace std;
int main(){

	// HOME TASK 3
	
	// Used float to allow for decimal input and output.
	float a, b, answer, two=2;
	// Added text asking for the values for a and b.
	cout<<"Enter value for a"<<endl;
	cin>>a;
	cout<<"Enter value for b"<<endl;
	cin>>b;
	// Equation for the polinomial.
	answer = a*a+two*a*b+b*b;
	// Text to show the result of the polinomial.
	cout<<"Result:"<<answer<<endl;

	return 0;
}
