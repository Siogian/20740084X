#include <iostream>

using namespace std;

int gcd(int a, int b);
int lcm(int a, int b);

int main()
{
	int a, b;
	cout << "Get two num's gcd and lcm, " << endl;
	cout << "num1: ";
	cin >> a;
	cout << "num2: ";
	cin >> b;
	cout << a << " and " << b << "'s gcd is " << gcd(a, b) << endl;
	cout << a << " and " << b << "'s lcm is " << lcm(a, b) << endl;
	return 0;
}

int gcd(int a, int b)
{
	if(a % b == 0) 
		return b;
	else
		return gcd(b, a % b);

}

int lcm(int a, int b)
{
	return a * b / gcd(a, b);
}
