#include "stdafx.h"

#include "MatrixLib.h" 
#include <iostream>
#include <cstdlib>
using namespace std;

namespace MatrixLib
{

	void Multiplication(int mat1[3][3], int mat2[3][3])
	{
		int mat3[3][3];
		cout << "\nEnter values for first 3 x 3 matrix:\n";
		for (int i = 0; i <= 2; i++)
		{
			for (int j = 0; j <= 2; j++)
				cin >> mat1[i][j];
		}
		cout << "\n Enter values for second 3 x 3 matrix:\n";
		for (int i = 0; i <= 2; i++)
		{
			for (int j = 0; j <= 2; j++)
				cin >> mat2[i][j];
		}
		cout << "\n The first 3 x 3 matrix entered by you is:\n";
		for (int i = 0; i <= 2; i++)
		{
			for (int j = 0; j <= 2; j++)
				cout << "\t" << mat1[i][j];
			cout << "\n";
		}
		cout << "\n the second 3 x 3 matrix entered :\n";
		for (int i = 0; i <= 2; i++)
		{
			for (int j = 0; j <= 2; j++)
				cout << "\t" << mat2[i][j];
			cout << "\n";
		}
		for (int i = 0; i <= 2; i++)
		{
			for (int j = 0; j <= 2; j++)
			{
				int sum = 0;
				for (int k = 0; k <= 2; k++)
					sum = sum + mat1[i][k] * mat2[k][j];
				mat3[i][j] = sum;
			}
		}
		cout << "\nThe product of the above two matrices is:\n";
		for (int i = 0; i <= 2; i++)
		{
			for (int j = 0; j <= 2; j++)
				cout << "\t" << mat3[i][j];
			cout << "\n";
		}
		cout << "\n Press any key to exit.";
		getchar();
	}
}
