// operator overloading Addition 

#include<iostream>
using namespace std;

class image{
	int height , width;
	
	public:
		image(int h=0,int w=0)
		{
			height=h;   // 100,200
			width=w;   // 50,15
		}
		
		image operator + (image &obj)
		{
			image result; // object result 
			
						//100		200
			result.height=height + obj.height;
						//50		15
			result.width=width + obj.width;
			
			return result;
		}
		
		void print()
		{
			cout<<"\n"<<height<<"*"<<width;
		}
		
};


main()
{
	image I1(100,50) , I2(200,15); 	// object 1 , object 2
	
	image I3 = I1 + I2;   // object3
	
	I3.print();
}
