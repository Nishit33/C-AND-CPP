/*7. Write a C++ program to implement a class called Date that has private 
member variables for day, month, and year. Include member functions to 
set and get these variables, as well as to validate if the date is valid. */


#include <iostream>
using namespace std;

class Date{					// class date 
    int day, month, year;		// integer day , month , year 

	public:
    
    setDate() 			// set date
	{
        cout << "Enter day: ";			// enter days
        cin >> day;
        cout << "Enter month: ";		// enter month
        cin >> month;
        cout << "Enter year: ";			// enter year
        cin >> year;
    }

    
    getDate() 		// get date
	{
        cout << "Date: " << day << "/" << month << "/" << year << endl;  // display show 
    }

    
    bool isValidDate() 	// valid or not 
	{
        if (month < 1 || month > 12 || day < 1 || day > 31)  // if this number not put so return false 
		{
            return false;
        }

        
        if (month == 2)  // check leap year 
		{
            if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0)) 
			{  
                return day <= 29;   // if day was 29 
            }
			 
			else 
			{
                return day <= 28;
            }
        }

        
        if (month == 4 || month == 6 || month == 9 || month == 11) // this month 30 days in month
		{
            return day <= 30;
        }

        return true; 
    }
};

main() 
{
    Date obj;   		// class date and object 

    obj.setDate();			// obj setdate
    if (obj.isValidDate())    // if date is valid print valid date 
	{
        obj.getDate();
        cout << "The date is valid." << endl;
    } 
    
	else 						// else print date is invalid 
	{
        cout << "The date is invalid." << endl;
    }

}

