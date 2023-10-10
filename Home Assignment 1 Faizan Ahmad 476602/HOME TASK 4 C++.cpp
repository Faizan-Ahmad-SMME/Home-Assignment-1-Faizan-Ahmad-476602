#include <iostream>
using namespace std;
int main(){
	
	// HOME TASK 4
	
	// Using float i can have 5/9 be displayed as 0.55555555555 and also be able to use decimal inputs and recive decimal outputs.
	float C, F, x=0.55555555555, y=32;
	// Used text to ask me for Fahrenheit temprature.
	cout<<"Enter temprature in Fahrenheit"<<endl;
	cin>>F;
	// Equation for finding celcius using Fahrenheit.
	C = (F-y)*x;
	// Text to display the out put Celcius value.
	cout<<"Temprature in Celcius:"<<C<<endl;
	
	return 0;
}
