/*1. Assume a class cricketer is declared. Declare a derived class batsman from 
cricketer. Data member of batsman. Total runs, Average runs and best 
performance. Member functions input data, calculate average runs, Display 
data. (Single Inheritance) */

#include<iostream>
using namespace std;

class Cricketer{ 				// class cricketer
	public:
		int run,bm,mp,average;   // integer run ,matchplayed , best match , average  
		string name;			// string name 
		batsman()			// batsman
		{
			cout<<"Name of cricketer : ";   // ask name cricketer
			cin>>name;
			
			cout<<"How many match played : ";   // ask how many match played
			cin>>mp;
			
			cout<<"Total run : ";  		// ask total run
			cin>>run;
			
			cout<<"Best performance in single match : ";		// ask best performance in single match
			cin>>bm;
			
			
			
		}
		
		avg()		// average function that is find out average run 
		{
			if (mp!= 0) 
			{
            	average = static_cast<double>(run)/mp;  // formula find out 
        	}
        	
			else 
			{
            	average = 0;  
        	}
		}
		
		display() 			// display show 
		{
			cout<<endl;			// new line 
			cout<<"Name of cricketer : "<<name<<endl;	// name cricketer
			cout<<"How many matches played : "<<mp<<endl; // how many matches 
			cout<<"Total run : "<<run<<endl;		// total run
			cout<<"Best performance in single match : "<<bm<<endl; 	// best performance
			cout << "Average Runs: " << average<<endl; 	// average run
		}
};


main()
{
	Cricketer obj;		// cricketer object obj
	obj.batsman();		// object call batsman
	obj.avg();		// object average 
	obj.display();		// object dispaly show 
}

