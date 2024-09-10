//9. Write a Program of Two 1D Matrix Addition using Operator Overloading 


#include <iostream>
using namespace std;

class A{
    int arr[3]; 			// Array

	public:
    
    input() 			// input function 
	{
		int i ;
        cout << "Enter 3 elements : "<<endl;		 // enter 3 elements
        for (i = 0; i < 3; i++) 			// for loop 3 times
		{
            cin >> arr[i];
        }
    }

   
    A operator+(A &m) 		// a operator 
	{
		int i ;
        A result;
        for (i = 0; i < 3; i++)  		// loop using 3 times 
		{
            result.arr[i] = arr[i] + m.arr[i];		// result = arr[i] + m.arr[i]
        }
        return result;				// and return result 
    }

    
    display() 			// display function 
	{
		int i ;
        for (i = 0; i < 3; i++) 		// for loop using 3 times 
		{
            cout << arr[i] << " ";		// cout and arr[i] 
        }
        cout << endl;				// new line 
    }
};

main() 							// main function 
{
    A mat1, mat2, mat3;					// theree mat1 ,mat2 , mat3 


    cout << "Elements 1:" << endl;			// elements 1 
    mat1.input();						// mat1.input function call 


    cout << "Elements 2:" << endl;			// elements 2 
    mat2.input();						// mat.2input function that is one array using two function 


    mat3 = mat1 + mat2;				// mat 3 is mat1 + mat 2 


    cout << "Addition: ";					// addition 
    mat3.display();						// mat3.display addition 

}

