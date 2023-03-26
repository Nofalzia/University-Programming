#include <iostream> 
using namespace std;
int main()
{
	char a;
	int b, c;
	cout << "Input two numbers \n";
	cin >> b;
	cin >> c;

	cout << "Input an operator (+,-,*,/,%) \n";
	cin >> a;

	switch (a)
	{
	case '+': 
		cout << b + c;
		break;
	case '-':
		cout << b - c;
		break;
	case '*':
		cout << b * c;
		break;
	case '/':
		cout << b / c;
		break;
	case '%':
		cout << b % c;
		break;
	default:
		cout << "Please input numbers and operator";

	}
}
