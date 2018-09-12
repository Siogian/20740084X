#include <iostream>
#include "random.h"

using namespace std;

#define CARDNUM 52

void swap(int* a, int* b)
{
	int t = *a;
	*a = *b;
	*b = t;
}
static char poker[13] = {'K', 'A', '2', '3', '4', '5', '6', '7', '8', '9', 'X', 'J', 'Q'};
int main()
{
	cout << "Poker Dealer: " << endl;
	int cardHeap[CARDNUM];
	// init card heap
	for(int i = 1; i <= CARDNUM; i++)
	{
		cardHeap[i - 1] = i;
	}
	Randomize();
	// dealer card
	for(int i = CARDNUM; i > 0; i--)
	{
		int index = GenerateNum(1, i);
		int curCard = cardHeap[index - 1];
		swap(&cardHeap[index - 1], &cardHeap[i-1]);
		switch((curCard - 1) / 13)
		{
			case 0:
				cout << "Club\t";
				break;
			case 1:
				cout << "Diamond\t";
				break;
			case 2:
				cout << "Heart\t";
				break;
			case 3:
				cout << "Spade\t";
				break;
		}
		cout << poker[curCard % 13] << endl;
	}
	return 0;
}
