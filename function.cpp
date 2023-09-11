#include<iostream>
using namespace std;

//PROBLEM 1--FAHRENHEIT TO CELSIUS TEMPRATURE CONVERSION
/* double ftc(double f);
 int main()
 {
     double f;
     cout<<"ENTER TEMPERATURE IN FAHRENHEITS: ";
     cin>>f;
     cout<<"TEMP IN CELSIUS: "<<ftc(f);
     return 0;
 }

 double ftc(double f)
 {
     return ((f-32)*5.0/9);
 }*/

 //PROBLEM 2--TARGET VALUE

 /*void search(int arr[],int size, int target);
 int main()
 {
     int i,a[10];
     for(i=0;i<3;i++)
     {
         cin>>a[i];
     }
     int target;
     cout<<"ENTER TARGET VALUE : ";
     cin>>target;

     search(a,3,target);
     return 0;
 }

 void search(int arr[],int size, int target)
 {
     int i;
     for(i=0;i<size;i++)
     {  
         if(arr[i]==target)
         {
             cout<<"TARGET VALUE FOUND: " <<arr[i]<<endl;
             return;
         } 
     }
     cout<<"TARGET VALUE NOT FOUND"<<endl;
 }*/


 //PROBLEM 4--SELECTION SORT
 
 void input(int x[],int asize);
 void sort(int x[], int asize);
 void dispaly(int x[],int asize);

 int main()
 {
     int x[4],i;
     input(x,4);
     sort(x,4);
     dispaly(x,4);
     return 0;
 }

 void input(int x[],int asize)
 {
     int i;
     cout<<"ENTER 4 NUMBERS: ";
     for(i=0;i<4;i++)
     {
         cin>>x[i];
     }
 }
 
 void sort(int x[], int asize)
 {
     int small,i,j;
     for(i=0;i<asize;i++)
     {
         small=i;
         for(j=i+1;j<asize;j++)
         {
             if(x[small]>x[j])
             {
                 small=j;
             }
         }
         int temp=x[small];
         x[small]=x[i];
         x[i]=temp;
     }

 }

 void dispaly(int x[],int asize)
 {
     int i;
     cout<<"ARRAY AFTER PERFORMING SELECTION SORT : ";
     for(i=0;i<asize;i++)
     {
         cout<<x[i]<<endl;
     }
 }

