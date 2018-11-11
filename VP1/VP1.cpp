// VP1.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
using namespace std;

int trovaMin(int iV[]) {
	int iMin = iV[0];
	for (int i = 1; i < 10; i++) {
		if (iV[i] < iMin)
			iMin = iV[i];
	}
	return iMin;
}

int trovaMax(int iV[]) {
	int iMax = iV[0];
	for (int i = 1; i < 10; i++) {
		if (iV[i] > iMax)
			iMax = iV[i];
	}
	return iMax;
}

int main()
{
	int iV[10] = { -6,1,3,4,5,6,7,9,8,-3 };
	cout << "Valore minimo: " << trovaMin(iV) << endl;
	cout << "Valore massimo: " << trovaMax(iV) << endl;


	system("PAUSE");
	return 0;
}
