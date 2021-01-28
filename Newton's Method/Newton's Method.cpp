#include <iostream>
#include <iomanip> //for setprecision
float f(float x){
	 return (pow(x,5)-4*pow(x,3)+pow(x,2)+1);
}

//to approxiamte the derivative of f
float der(float x ){
	const double h = 0.00001;
	return ((f(x + h) - f(x)) / h);

}
using namespace std;
int main(){
	float x;
	cout << "Please enter the initial value " << endl;
	cin >> x;
	while (abs(f(x)) > 0.0001)
	{
		x = x - (f(x) / der(x));
	}


	cout << "The approxiamted zero is " << setprecision(15)<< x << endl;




	system("Pause");
	return 0;
}