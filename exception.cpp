//--------------EXCEPTION HANDLING -------------
#include<iostream>
using namespace std;

int main()
{
	try 
   {
  	 int age;
  	 cout<<"\n ENTER AGE : ";
  	 cin>>age;
  	 
  	 if (age >= 18) 
	 {
       cout << "ACCESS GRANTED - YOU ARE OLD ENOUGH!";
     } 
     else 
    {
      //throw (age);
      throw 505;
    }
  }
  catch (int age) 
  {
    cout << "ACCESS DENIED- YOU MUST BE ATLEAST 18 YEARS OLD*\n";
    //cout << "AGE IS : " << age;
    cout << "ERROR : " << age;
  }
  return 0;
}

