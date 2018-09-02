#include <iostream>

using namespace std;

unsigned int GetCn_kByRecurs(unsigned int n, unsigned int k);
unsigned int GetCn_kByLoop(unsigned int n, unsigned int k);

int main()
{
	unsigned int n, k;
	do{
		cout << "Cn_k's n (n >= 1): ";
		cin >> n;
		cout << "Cn_k's k : (k <= n): ";
		cin >> k;
	}while(!(n >= 1 && k <= n));
	cout << "Recursion: " << GetCn_kByRecurs(n ,k) << endl;
	cout << "Loop: " << GetCn_kByLoop(n ,k) << endl;
	return 0;
}

unsigned int GetCn_kByRecurs(unsigned int n, unsigned int k)
{
	if(k == 0 || k == n)
	{
		return 1;
	}

	return GetCn_kByRecurs(n-1, k) + GetCn_kByRecurs(n -1, k-1);
}

unsigned int GetCn_kByLoop(unsigned int n, unsigned int k)
{
	unsigned int a = 1, b = 1;
	for(unsigned int i = n; i >= n -k + 1; i--)
	{
		a *= i;
	}
	for(unsigned int i = k; i >= 1; i--)
	{
		b *= i;
	}

	return a / b;
}
