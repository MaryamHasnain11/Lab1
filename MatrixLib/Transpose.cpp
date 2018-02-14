#include "stdafx.h"


#include "MatrixLib.h" 
#include <iostream>
#include <cstdlib>
using namespace std;

namespace MatrixLib
{
	void Transpose(int matrix1[3][3])

	{
		int transpose_matrix[3][3];
		cout << "Transpose:";
		cout << "\nEnter values for  3 x 3 matrix:\n";
		for (int i = 0; i <= 2; i++)
		{
			for (int j = 0; j <= 2; j++)
				cin >> matrix1[i][j];
		}
		
		cout << "\n The  3 x 3 matrix entered by you is:\n";
		for (int i = 0; i <= 2; i++)
		{
			for (int j = 0; j <= 2; j++)
				cout << "\t" << matrix1[i][j];
			cout << "\n";
		}
		
		cout << "The transpose is:\n";
		for (int i = 0; i < 3; i++) {
			for (int j = 0; j < 3; j++)
			{
				transpose_matrix[j][i] = matrix1[i][j];
				
			}
			cout << endl;
			
		}

		for (int i = 0; i < 3; i++) {
			for (int j = 0; j < 3; j++)
			{
				cout << "\t" << transpose_matrix[i][j];
			}
			cout << endl;
		}
		getchar();
	}
}
