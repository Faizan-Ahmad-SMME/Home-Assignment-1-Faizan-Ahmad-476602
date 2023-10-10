#include <iostream>
using namespace std;
int main(){

	// HOME TASK 2
	
	// I used float to be able to input decimal values and also recive decimal outputs.
	float cm, m, km, a=100, b=1000;
	// Added text asking me for the cm value and also a text telling me the meter and kilometer values of the input.
	cout<<"Enter length in cm"<<endl;
	cin>>cm;
	m = cm/a;
	cout<<"Length in Meter is:"<<m<<endl;
	km = m/b;
	cout<<"length in Kilometer is:"<<km<<endl;


	
	return 0;
}
