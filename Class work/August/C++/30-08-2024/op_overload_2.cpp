// operator overloading Multiplication

#include<iostream>
using namespace std;

class image{
	int height , width;
	
	public:
		image(int h=0,int w=0)
		{
			height=h;   	// 5,4
			width=w;   		// 6,3
		}
		
		image operator * (image &obj)
		{
			image result; // object result 
			
						//5		      4
			result.height=height * obj.height;
						//6		3
			result.width=width * obj.width;
			
			return result;
		}
		
		void print()
		{
			cout<<"\n"<<height<<"*"<<width;
		}
		
};


main()
{
	image I1(5,6) , I2(4,3); 	// object 1 , object 2
	
	image I3 = I1 * I2;   // object3
	
	I3.print();
}
