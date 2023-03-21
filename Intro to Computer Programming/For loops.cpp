#include <iostream>
using namespace std;
int main()
{
	int x;
	cout << "enter a number ";
		cin >> x;

		for (int i = 0; i < x; i=i+3 )
		{
			if(i%2==0)
				for(i;i<x;i=i+3)
					if(i%5==0)
				cout << i << "\n";

		}

}
