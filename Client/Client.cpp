// MatrixLibrary.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "MatrixLib.h"
#include <iostream>

int main()
{
	int a[3][3], b[3][3];
	int x;
	while (1) {
		cout << "Enter a number:";
		cout << "1. Addition 2.Subtraction 3. Multiplication 4. Transpose";
		cin >> x;

		switch (x) {
		case 1:
			MatrixLib::Add(a, b);
			break;
		case 2:
			MatrixLib::Subtract(a, b);
			break;
		case 3:
			MatrixLib::Multiplication(a, b);
			break;
		case 4:

			MatrixLib::Transpose(a);
			break;
		default:
			cout << "Enter the correct number";
		}
	}
	getchar();
	return 0;
}

