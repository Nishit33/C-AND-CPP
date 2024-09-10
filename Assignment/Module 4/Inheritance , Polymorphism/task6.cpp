//6. Write a C++ Program to show access to Private Public and Protected using Inheritance

#include <iostream>
using namespace std;


class A 
{
private:
    int privateVar;

protected:
    int protectedVar;

public:
    int publicVar;


    A() 
	{
        privateVar = 10;
        protectedVar = 20;
        publicVar = 30;
    }

    showBaseMembers() 
	{
        cout<<"Base Class - Private: " <<privateVar<<endl;
        cout<<"Base Class - Protected: " <<protectedVar<<endl;
        cout<<"Base Class - Public: " <<publicVar<<endl;
    }
};


main() 
{
    A Obj;
	Obj.showBaseMembers();
}

