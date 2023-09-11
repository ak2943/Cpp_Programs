#include<iostream>
class sample
{
    int a;
    public:
     void display();
     {
         cout<<"ENTER A: ";
         cin>>a;
         cout<<"A = "<<a;
     }
};

int main()
{
    sample s;
    s.display();
    return 0;
}
