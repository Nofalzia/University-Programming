#include <iostream>
using namespace std;
int main()
{
	int a, b, c;
	cout << "enter value for height ";
	cin >> a;
	cout << "enter value for base ";
	cin >> b;
	cout << "enter value for hypotenuse ";
	cin >> c;
	cout << ".\n\n";
	
		if ((a*a)+(b*b)==(c*c))
		cout << "this triangle is a right angle triangle ";
		else 
			cout << "this triangle is not a right angled triangle ";
}
