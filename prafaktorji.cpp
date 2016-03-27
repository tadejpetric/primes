#include <iostream>
#include <climits>
using namespace std;

int main()
{
	unsigned long long int x;
	bool check;

	cout << "Max vrednost je: " << sizeof(x) << " bajtov, " << sizeof(x) * 8 << " bitov, oziroma " << (unsigned long long)pow(2, sizeof(x) * 8);
	do{
		cout << "\nVpisi stevilo: ";
		cin >> x;

		for (unsigned long long int i = 2; i <= x; i++)
		{
			if (x % i == 0)
			{
				cout << "["<< x << " | " << i << "] ";
				x = x / i;
				i = 1;
			}
		}
		
		cout << "\nvpisi 1 za ponovitev, 0 za konec: ";
		cin >> check;
	} while (check == true);
	return 0;
}
