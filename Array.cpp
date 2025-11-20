#include<iostream>
using namespace std;

int main()
{
////	Array Decleration
////	syntax:
//	int Number[5];    
////	------------------------------------------------------------------------
//
////	Array Initialization
////	syntax:
//	int Number[5] = {0, 1, 2, 3, 4};
//	
////	Array Partially initialize
////	Syntax:
//	int Number[5] = {0, 1, 2, 3};	//Remaining elements will be 0
////	--------------------------------------------------------------------------
//
////	Accessing Elements of Array
////	Syntax:
//	int value = Number[2];	//Access the third element
//	cout << "Value store at 3rd index is: " << value << endl;
//	
////	Access Elements through loop
//	for(int i = 0; i < 5; i++)
//	{
//		cout << Number[i] << " ";
//	}
////	--------------------------------------------------------------------------


string array_1[] = {};

int length = sizeof(array_1) / sizeof(array_1[0]);

cout << "Size is: " << length;

//
//int array_2[5];
//
//for(int i  = 0; i <5; i++)
//{
//	array_2[i] = array_1[i];
//}

//
//
//for(int i = 0; i < 5; i++)
//{
//	cout << array_2[i];
//}
}
