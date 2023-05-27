#include <iostream>
using namespace std;
int main()
{
	int a, count = 0;
	cout << "enter a number ";
	cin >> a;
	int i = 1;
	while (i <= a)
	{
		if (a % i == 0)
			count++;
		i++;
	}
	if (count == 2)
		cout << "prime";
	else
		cout << "not prime";
}
