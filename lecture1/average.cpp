#include <iostream>

using namespace std;

int main()
{
	int sum = 0;
	int tmp;
	cout << "Please input 10 integers:" << endl;
	for (int i = 0; i < 10; i++)
	{
		cin >> tmp;
		sum += tmp;
	}
	cout << "The sum is:" << sum << endl;
	return 0;
}
