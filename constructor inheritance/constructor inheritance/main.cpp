//
//  main.cpp
//  constructor inheritance
//
//  Created by Nisha Ramprasath on 5/11/23.
//

#include<iostream>
using namespace std;

class Base
{
    public:
    Base()
    {
          cout<<"Non-Param Base"<<endl;
    }
                
       Base(int x)
    {
         cout<<"Param of Base"<<x<<endl;
    }
    
};
    
class Derived:public Base
{
    public:
    Derived()
    {
        cout<<"Non-Param Derived"<<endl;
    }
    Derived(int y)
    {
        cout<<"Param of Derived"<<y<<endl;
    }
    Derived(int x,int y):Base(x)
    {
        cout<<"Param of Derivedf"<<y<<endl;
    }
    
};
    
int main()
{
    Derived();

    Derived(5,10);
    
}
    
