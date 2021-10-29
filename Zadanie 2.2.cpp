

#include <iostream>
using namespace std;

int main()
{
	int a, b;
	cout << "Podaj liczbe A i B: ";
	cin >> a >> b;

	for (int i = 1; i <= a; i++)
	{
		cout << "*";
	}

	cout << endl << endl;

	for (int i = 1; i <= b; i++)
	{
		cout << "*" << endl;
	}

	cout << endl << endl;

	for (int y = 1; y <= b; y++)
	{
		for (int x = 1; x <= a; x++)
		{
			cout << "*";
		}
		cout << endl;
	}

	cout << endl << endl;

	for (int y = 1; y <= b; y++)
	{
		for (int x = 1; x <= a; x++)
		{
			if (y == b || y == 1 || x == a || x == 1)
			{
				cout << "*";
			}
			else
			{
				cout << " ";
			}

		}
		cout << endl;
	}

	return 0;
}