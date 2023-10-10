#include <iostream>
using namespace std;
int main(){
	// HOME TASK 1
	
	// I used float here in order to be able to use decimal inputs as well as allowing me to recive decimal outputs.
	float x1, y1, x2, y2, distance;
	// I decided to add a prompt that will ask me what my x1 x2 y1 y2 values are.
	cout<<"Enter x1"<<endl;
	cin>>x1;
	cout<<"Enter y1"<<endl;
	cin>>y1;
	cout<<"Enter x2"<<endl;
	cin>>x2;
	cout<<"Enter y2"<<endl;
	cin>>y2;
	// This is the equation for finding distance (d) using the above points.
	distance = (x2-x1)*(x2-x1)+(y2-y1)*(y2-y1);
	// Again I added a sentence telling me what the distance calcultated is.
	cout<<"Disctance between the points is:"<<distance<<endl;
return 0;
}
