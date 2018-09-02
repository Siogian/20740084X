#include <iostream>
#include <cmath>

using namespace std;

int CalPrimeFactor(int a, int bak, bool flag1, bool flag2);
int main()
{
	int a;
	cout << "Prime factor decomposition of an integer greater than 1: " << endl;
	do
	{
		cout << "Input an integer please: ";
		cin >> a;	
	}
	while(a <= 1);
	CalPrimeFactor(a, a, false, false);
	return 0;
}
/*
 * @param: flag1 is false, means the first print.
 *         flag2 is false, means the end print.
 * */
int CalPrimeFactor(int a, int bak, bool flag1, bool flag2)
{
	bool isprime = true;
	int factor = 0;

	if(a % 2 == 0)
	{
		if(a == 2)
		{
			;
		}
		else
		{
			isprime = false;
			factor = 2;
		}
	}
	if(isprime == true)
	{
		int t = sqrt(a) + 1;
		for(int i = 3; i < t; i+= 2)
		{
			if(a % i == 0)
			{
				isprime = false;
				factor = i;
			}
		}
	}
	if(isprime == true)
	{
		if(flag1 == false)
		{
			cout << bak << " = " << a;
			flag1 = true;
		}
		else
		{
			cout << " * " << a;
		}
	}
	else
	{
		CalPrimeFactor(factor, bak, flag1, true);
		CalPrimeFactor(a / factor, bak, true, true);
	}
	if(flag2 == false)
	{
		cout << endl;
	}
	return true;
}
