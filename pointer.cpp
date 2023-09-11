#include<iostream>
using namespace std;

//problem 1
int main()
{
    int size,i;
    cout<<"ENTER THE SIZE OF ARRAY: ";
    cin>>size;
    int a=new int[size]; //DYNAMIC ARRAY!

    cout<<"ENTER ARRAY ELEMENTS: "<<endl;
     for(i=0;i<size;i++)
     {
         cin>>a[i];
     }
     for(i=0;i<size;i++)
     {
         cout<<a[i]<<"\t";
         cout<<(&a[i])<<endl;
     }

     int target;
     cout<<"ENTER TARGET VALUE: ";
     cin>>target;

     int found=0;
     for(i=0;i<size;i++)
     {
         if(target==a[i])
         {
            cout<<a[i]<<"\t"<<(&a[i])<<endl;
            found=1;
         }
     }
     if(found==1)
     {
         cout<<"TARGET FOUND IN ARRAY!"<<endl;
     }
     else
     {
         cout<<"TARGET Not FOUND IN ARRAY!"<<endl;
     }
     return 0;
}