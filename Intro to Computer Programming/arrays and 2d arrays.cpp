#include <iostream>
using namespace std;
int main()
{
	int arr_name[3][3] =
	{
		{4, 2, 4},
		{5, 8, 1},
		{1, 2, 3}
	};

	for (int j = 0; j < 3; j++)
	{
		int max_element = arr_name[0][j];
		for (int i = 1; i < 3; i++)
		{
			if (arr_name[i][j] > max_element)
			{
				max_element = arr_name[i][j];
			}
		}
		cout << "Largest element in column " << j + 1 << ": " << max_element << endl;
	}
}
