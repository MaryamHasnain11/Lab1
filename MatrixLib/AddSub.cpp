
#include "stdafx.h"
#include "MatrixLib.h" 
#include <iostream>
#include <cstdlib>
using namespace std;

namespace MatrixLib
{
	void Add(int matrix1[3][3], int matrix2[3][3])

	{
		cout << "Addition";
		int matrix3[3][3];

		cout << "\nEnter values for first 3 x 3 matrix:\n";
		for (int i = 0; i <= 2; i++)
		{
			for (int j = 0; j <= 2; j++)
				cin >> matrix1[i][j];
		}
		cout << "\n Enter values for second 3 x 3 matrix:\n";
		for (int i = 0; i <= 2; i++)
		{
			for (int j = 0; j <= 2; j++)
				cin >> matrix2[i][j];
		}
		cout << "\n The first 3 x 3 matrix entered by you is:\n";
		for (int i = 0; i <= 2; i++)
		{
			for (int j = 0; j <= 2; j++)
				cout << "\t" << matrix1[i][j];
			cout << "\n";
		}
		cout << "\n the second 3 x 3 matrix entered :\n";
		for (int i = 0; i <= 2; i++)
		{
			for (int j = 0; j <= 2; j++)
				cout << "\t" << matrix2[i][j];
			cout << "\n";
		}
		cout << "\n";
		cout << "Result\n";
		for (int i = 0; i < 3; i++)
		{
			for (int j = 0; j <3; j++)
			{
				matrix3[i][j] = matrix1[i][j] + matrix2[i][j];
				cout << "\t"<< matrix3[i][j] << "\t";
			}
			cout << endl;
		}
		cout << endl;
		getchar();
	}


	void Subtract(int matrix1[3][3], int matrix2[3][3])

	{
		cout << "Subtraction";
		int matrix3[3][3];
		cout << "\nEnter values for first 3 x 3 matrix:\n";
		for (int i = 0; i <= 2; i++)
		{
			for (int j = 0; j <= 2; j++)
				cin >> matrix1[i][j];
		}
		cout << "\n Enter values for second 3 x 3 matrix:\n";
		for (int i = 0; i <= 2; i++)
		{
			for (int j = 0; j <= 2; j++)
				cin >> matrix2[i][j];
		}
		cout << "\n The first 3 x 3 matrix entered by you is:\n";
		for (int i = 0; i <= 2; i++)
		{
			for (int j = 0; j <= 2; j++)
				cout << "\t" << matrix1[i][j];
			cout << "\n";
		}
		cout << "\n the second 3 x 3 matrix entered :\n";
		for (int i = 0; i <= 2; i++)
		{
			for (int j = 0; j <= 2; j++)
				cout << "\t" << matrix2[i][j];
			cout << "\n";
		}

		cout << "Result:\n";
		for (int i = 0; i < 3; i++)
		{
			for (int j = 0; j <3; j++)
			{
				matrix3[i][j] = matrix1[i][j] - matrix2[i][j];
				cout <<  "\t"<<matrix3[i][j] << "\t";
			}
			cout << endl;
		}
		cout << endl;
getchar();
	}
	

}
