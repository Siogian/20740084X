#include "random.h"

void Randomize()
{
	srand((int)time(NULL));
}

int GenerateNum(int low, int high)
{
	double _d;
	_d = (double)rand() / ((double)RAND_MAX + 1.0);
	return (low <= high ? low : high) + (int)(_d * (abs(low - high + 1)));
}
