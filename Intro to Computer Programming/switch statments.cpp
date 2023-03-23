#include <iostream>
using namespace std;
int main()
{
	int a;
	cout << "Please enter the question number ";
	cin >> a;
switch (a) {


case 1:
		int a;
		cout << "Enter a Number ";
		cin >> a;

		if (a % 2 == 0)
			cout << a << " is an Even number \n";
		else
			cout << a << " is an Odd number \n";

case 2:
		int he, ba, hy;
		cout << "enter value for height ";
		cin >> he;
		cout << "enter value for base ";
		cin >> ba;
		cout << "enter value for hypotenuse ";
		cin >> hy;
		cout << ".\n\n";

		if ((he * he) + (ba * ba) == (hy * hy))
			cout << "this triangle is a right angle triangle ";
		else
			cout << "this triangle is not a right angled triangle ";
			
case 3:
		 int num1, num2, o;
		 cout << "enter a number ";
		 cin >> num1;
		 cout << "enter another number ";
		 cin >> num2;

		 cout << "enter 1 for addition opperator \n";
		 cout << "enter 2 for subtracton opperator \n";
		 cout << "enter 3 for multiplication opperator \n";
		 cout << "enter 4 for division opperator \n";
		 cout << "enter 5 for remainder opperator \n";

		 cin >> o;
		 if (o == 1)
			 cout << num1 + num2;
		 else if (o == 2)
			 cout << num1 - num2;
		 else if (o == 3)
			 cout << num1 * num2;
		 else if (o == 4)
			 cout << num1 / num2;
		 else if (o == 5)
			 cout << num1 % num2;
		 else cout << "you entered an invalid value or opperator";
case 4:
		 int calls;
		 double bill = 0;
		 cout << "enter number of calls ";
		 cin >> calls;

		 if (calls <= 100)
			 bill = 250 + (calls * 0.80);
		 else
			 bill = 350 + (calls * 1.00);
		 cout << "your bill is " << bill;
}
}
