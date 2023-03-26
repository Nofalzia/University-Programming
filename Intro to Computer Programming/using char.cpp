#include <iostream> 
using namespace std;
int main()
{
	char a;
	cout << "PRESS + FOR HAPPY FACE AND PRESS - FOR SAD FACE PLEASE \n";
	cin >> a;

	switch (a)
	{
	case '+':
		cout << " :) ";
		break;
	case '-':
		cout << " :( ";
		break;
	default:
		cout << "please enter + or - only";

	}
}
