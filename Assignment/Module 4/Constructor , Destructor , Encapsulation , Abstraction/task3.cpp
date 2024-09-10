/* 3. Write a C++ program to create a class called Car that has private 
member variables for company, model, and year. Implement member 
functions to get and set these variables. */


#include <iostream>
using namespace std;

class Car{
	private:
    string company;
    string model;
    int year;

public:
    
    setCompany(string c) 
	{
        company = c;
    }

    setModel(string m) 
	{
        model = m;
    }

    setYear(int y) 
	{
        year = y;
    }

    
    string getCompany() 
	{
        return company;
    }

    string getModel() 
	{
        return model;
    }

    int getYear() 
	{
        return year;
    }
};

main() 
{
    Car obj;

 
    obj.setCompany("BMW");
    obj.setModel("M5");
    obj.setYear(2024);

 
    cout<<"Car Company: " <<obj.getCompany()<<endl;
    cout<<"Car Model: " <<obj.getModel()<<endl;
    cout<<"Car Year: " <<obj.getYear()<<endl;

 
}

