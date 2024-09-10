/*6. Write a C++ program to implement a class called Employee that has 
private member variables for name, employee ID, and salary. Include 
member functions to calculate and set salary based on employee 
performance. Using of constructor */

#include <iostream>
using namespace std;

class Employee 					// class Employee 
{
    string name;				// string name 
    int employeeID;		// int employeeid 
    int salary;			// slaray

	public:
    Employee(string N, int ID)      // employee same as class name 
	{
        name = N;		// name = n
        employeeID = ID;		// employeeid = id
        salary = 0;  		// salary = 0
    }

    
    setSalary(char performance) 		// set salary with grade 
	{
        if (performance == 'A') 		// if A performance salary will be 100k
		{
            salary = 100000;
        }
		 
		else if (performance == 'B') 	// if B performance salary willbe 60k
		{
            salary = 60000;  
        }
		
		else 						// else C performance salary is 20k
		{
            salary = 20000;
        }
    }

    
    show() 		// show all name id salary 
	{
        cout << "Employee Name: " << name << endl;
        cout << "Employee ID: " << employeeID << endl;
        cout << "Salary: " << salary << endl;
    }
};

int main() 
{
    string N;		//string name 
    int ID;			// integer id 
    char performance;			// char performance 

    
    cout << "Enter employee name: ";		// enter employee name 
    cin >> N;
    cout << "Enter employee ID: ";			// enter employee id
    cin >> ID;

    
    Employee obj(N, ID);		// employee class obj 
    
    cout << "Enter performance grade (A, B, C): ";		// enter performance grade
    cin >> performance;
    
    obj.setSalary(performance);			// obj with setsalary 

    
    obj.show();						// display all data 

}

