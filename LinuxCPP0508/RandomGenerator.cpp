#include <iostream>
#include "random.h"

using namespace std;

#define MAX 52
#define MIN 1

int main()
{
	cout << "This program generate a, a is in [1, 52]" << endl;
	Randomize();
	cout << GenerateNum(MIN, MAX) << endl;
	return 0;
}
