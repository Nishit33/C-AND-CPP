/* 6. Write a C++ program to create a class called Person that has private 
member variables for name, age and country. Implement member 
functions to set and get the values of these variables.*/

#include<iostream>
using namespace std;

class Person{			// calass person
	private:			// private 
		string name;			 // string name
		int age;				// int age
		string country;				// string country
		
	public:				// public
		
		setName(string n)	// set name 
		{
			name = n;		// name equal n
		}
		
		setAge(int a)		// set age
		{
			age = a;		// age equal a
		}
		
		setCountry(string c)		// set country
		{
			country = c;		// country equal c
		}
		
		
		string getName() 	// get name 
		{
        	return name;		// return name
    	}

    	int getAge()     // get age
		{
        	return age;		// return age
    	}

    	string getCountry() // get country
		{
        	return country;   // return country
    	}
};


main()
{
	Person obj;      // person class object is obj
	
	int age;
	string name,country;
	
	cout << "Enter name: ";      // enter name
    getline(cin, name);
    obj.setName(name);

    cout << "Enter age: ";     // enter age
    cin >> age;
    obj.setAge(age);

    cout << "Enter country: ";     // enter country
    cin.ignore();
    getline(cin, country);
    obj.setCountry(country);
    
    cout<<endl;       // new line 

	cout << "Name: " << obj.getName()<<endl; // display show name
    cout << "Age: " << obj.getAge()<<endl; // display show age
    cout << "Country: " << obj.getCountry()<<endl; // display show country

}
