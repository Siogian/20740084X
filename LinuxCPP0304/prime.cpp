#include <iostream>

using namespace std;

bool IsPrime(int a);

int main()
{
	int a;
	cout << "Is the number primer?" << endl;
	cout << "num : ";
	cin >> a;
	if(a <= 1)
	{
		cout << "Error! The num must bigger than 1!" << endl;
		return 0;
	}
	if(IsPrime(a))
	{
		cout << a << " is a prime." << endl;
	}
	else
	{
		cout << a << " is not a prime." << endl;
	}
	return 0;
}

bool IsPrime(int a)
{
	if(a == 2)
	{
		return true;
	}
	for(int i = 2; i < a; i++)
	{
		if(a % i == 0)
		{
			return false;
		}
	}
	return true;
}
