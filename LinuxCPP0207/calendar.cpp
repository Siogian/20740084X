#include <iostream>
#include <iomanip>

using namespace std;

enum eWeek_t{
	Mon = 1,
	Tue,
	Wed,
	Thur,
	Fri,
	Sat,
	Sun
};

int main()
{
	const eWeek_t day1Week = Wed;
	const int spaceWidth = 2;
	const int finalDay = 31;
	cout << "Calendar 2018-9" << endl;
	cout << "--------------------------" << endl;
	cout << "Mo  Tu  We  Th  Fr  Sa  Su" << endl;
	cout << "--------------------------" << endl;
	cout << setw((day1Week - Mon) * (spaceWidth + 2)) << " ";
	for(int i = 1; i <= finalDay; i++)
	{
		cout << setw(spaceWidth) << i;
		cout << setw(spaceWidth) << " ";
		if((i - day1Week + Sun - day1Week + 1) % Sun == 0)
		{	
			cout << endl;
			cout << "--------------------------" << endl;
		}
	}
	cout << endl;
	cout << "--------------------------" << endl;
	return 0;
}
