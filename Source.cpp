//very basic, just searches for mersenne primes. unoptimised. works
//praštevila oblike 2^n -1
#include <iostream>
#include <fstream>
#include <cmath> //pow(), sqrt()
using namespace std;

int main()
{
	//ofstream out_data("mersenne.txt");
	do {
		unsigned long long int num = 0, max_n;
		bool prime = true;
		cout << "\n\nVpisi max stevilo: ";
		cin >> max_n;

		for (unsigned long long int power = 2; num <= max_n; power++) //loops powers
		{
			num = 1;
			for (int i = 0; i < power; i++)
				num *= 2;
			num--;
			for (unsigned long long int i = 2; (i <= sqrt(num) +1) && (prime == true); i++) //tests if prime
			{
				if (num%i == 0)
				{
					prime = false;
					cout << "\nFailed at pow" << power << "since div by " << i;
				}
				else
					prime = true;
			}
			if (prime == true)
			{
				cout << "\nMersenne prastevilo: 2^" << power<< " - 1 = " << num;
				//out_data << "2^" << power << "-1 = " << num << endl;
			}
			prime = true;
		}
	} while (true);
	return 0;
}