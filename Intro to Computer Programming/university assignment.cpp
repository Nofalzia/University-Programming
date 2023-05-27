#include <iostream>
using namespace std;
int main() {
	int T, q, a, students, temp, num, rem;
	int i = 1;
	int in = 1;
	int sum = 0;
	float f, x;
	float sum1 = 0;
	float marks = 0;
	double c;
	double fa = 1;
	char b = 0;
label:
	cout << "ENTER TASK NUMBER \n";
	cin >> T;
	switch (T)
	{
	case 1:
		do {
			cout << "PLEASE ENTER TEMPRATURE IN FARENHEIT \n";
			cin >> f;
			c = 5 * (f - 32) / 9;
			cout << c << endl;
			cout << "DO YOU WANT TO PERFORM ANOTHER CONVERSION? (Y/N) \n";
			cin >> b;
		} while (b == 'y' || b == 'Y');
		break;
	case 2:
		cout << "PLEASE ENTER A NUMBER TO FIND THE AVERAGE OF THAT NUMBER AND ALL NATURAL NUMBERS BEFORE IT \n";
		cin >> x;
		while (i <= x)
		{
			sum1 = sum1 + i; //stores value of sum of X natural numbers as loop runs
			i++;
		}
		cout << sum1 / x << endl; // formula for avg
		break;
	case 3:
		cout << "PLEASE ENTER NUMBER OF STUDENTS \n";
		cin >> students;
		for (int i = 1; i <= students; i++)
		{
			cout << "ENTER MARKS OF STUDENT NUMBER " << i << endl;
			cin >> temp;
			marks = marks + temp; // will keep adding marks as loop goes on
		}
		cout << marks / students; // formula for avg
		break;
	case 4:
		cout << "Enter a positive integer; ";
		cin >> a;
		do
		{
			fa = fa * i;
			++in;
		} while (i <= a);
		cout << "Factorial of " << a << "=" << fa;
		break;
	case 5:
		cout << "Input the number:";
		cin >> num;
		while (num > 0)
		{
			rem = num % 10;
			/*Remainder of anything divided by 10 will
			always be the last digit of that number */
			num = num / 10;
			sum = sum + rem;
		}
		cout << "sum of digits of that number is " << sum << endl ;
		break;
	default:
		cout << "Please input values as instructed ";
		break;
	}
	cout << "PRESS 1 TO PERFORM ANOTHER TASK, PRESS ANY OTHER NUMBER TO TERMINATE \n";
	cin >> q;
	if (q = 1)
	{
		goto label;
	}
}
