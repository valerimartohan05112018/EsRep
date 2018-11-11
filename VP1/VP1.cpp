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

void ordinaVet(int iV[], int left, int right) {
	int i = left, j = right;
	int tmp;
	int pivot = iV[(left + right) / 2];
	/* partition */
	while (i <= j) {
		while (iV[i] < pivot)
			i++;
		while (iV[j] > pivot)
			j--;
		if (i <= j) {
			tmp = iV[i];
			iV[i] = iV[j];
			iV[j] = tmp;
			i++;
			j--;
		}
	};
	/* recursion */
	if (left < j)
		ordinaVet(iV, left, j);
	if (i < right)
		ordinaVet(iV, i, right);
}

void visualizzaV(int iV[]) {
	cout << "Vettore ordinato V={ ";
	for (int i = 0; i < 10; i++) {
		cout << iV[i] << ", ";
	}
	cout << "}";
}

int main()
{
	int iV[10] = { -6,1,3,4,5,6,7,9,8,-3 };
	cout << "Valore minimo: " << trovaMin(iV) << endl;
	cout << "Valore massimo: " << trovaMax(iV) << endl;
	ordinaVet(iV, 0, 9);
	visualizzaV(iV);

	system("PAUSE");
	return 0;
}

