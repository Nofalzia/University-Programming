#include <iostream>
using namespace std;
int main()
{
  int a, b, o;
	cout << "enter a number ";
cin >> a;
	cout << "enter another number ";
cin >> b;

	cout << "enter 1 for addition opperator \n";
	cout << "enter 2 for subtracton opperator \n";
	cout << "enter 3 for multiplication opperator \n";
	cout << "enter 4 for division opperator \n";
	cout << "enter 5 for remainder opperator \n";

cin >> o;
	if (o == 1)
		cout << a + b;
	else if (o == 2)
		cout << a - b;
	else if (o == 3)
		cout << a * b;
	else if (o == 4)
		cout << a / b;
	else if (o == 5)
		cout << a % b;
	else cout << "you entered either an invalid value or opperator";
}
