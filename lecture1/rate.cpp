#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
	double principal;
	double rate;
	cout << "Please input the principal(yuan): ";
	cin >> principal;
	cout << "Please input the interest rate(%): ";
	cin >> rate;
	cout.setf(ios::fixed);
	cout << "Principal and interest after one year is: " \
		<< fixed << setprecision(2) << principal * (1 + rate / 100) << " yuan" << endl;
	return 0;
}
