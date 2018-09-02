#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
	int lines, separation;
	cout << "Input lines and separation:" << endl;
	cout << "lines: " ;
	cin >> lines;
	cout << "separation: ";
	cin >> separation;
	for(int i = 1; i <= lines; i++)
	{
		if(lines - i != 0)
			cout << setw(lines - i) << " ";
		for(int j = 0; j < 2 * i - 1; j++)
		{
			cout << "*";
		}
		cout << setw(separation) << " ";
		for(int j = 0; j < 2 * (lines - i + 1) - 1; j++)
		{
			cout << "*";
		}
		cout << endl;
	}
	return 0;
}
