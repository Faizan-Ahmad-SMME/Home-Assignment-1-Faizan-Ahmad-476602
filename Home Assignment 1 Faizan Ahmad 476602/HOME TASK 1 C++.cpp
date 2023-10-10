#include<iostream>
#include<cmath>

	using namespace std;
	int main(){
// Used float in order to be able to use decimal values for input and recive decimal outputs.
	float x1, y1, x2, y2, distance;

	cout<<"Enter the coordinates of 2 point's ('x1','y1','x2','y2')"<<endl;
	cin>>x1>>y1>>x2>>y2;
// Tho the question asked for distance between 2 coordinates the formula provided was missing a square root so i added it to my code, an alternative code is provided that uses the formula given in the question.
	distance = sqrt(pow((x2 - x1),2) + pow((y2 - y1),2));
	cout<<"Distance between the point's is:"<<distance<<endl;

return 0;
}
