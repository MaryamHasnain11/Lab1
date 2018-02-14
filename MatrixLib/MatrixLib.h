#pragma once 

#ifdef MATHLIBRARY_EXPORTS  
#define MATHLIBRARY_API __declspec(dllexport)   
#else  
#define MATHLIBRARY_API __declspec(dllimport)   
#endif 

using namespace std;

namespace MatrixLib {
	MATHLIBRARY_API void Add(int a[3][3], int b[3][3]);
	MATHLIBRARY_API void Subtract(int a[3][3], int b[3][3]);
	MATHLIBRARY_API void Multiplication(int firstMatrix[3][3], int secondMatrix[3][3]);
	MATHLIBRARY_API void Transpose(int a[3][3]);

	// TODO: Add your methods for this class here.

}



