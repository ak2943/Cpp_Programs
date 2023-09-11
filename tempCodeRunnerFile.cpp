#include<iostream>
using namespace std;
//PROBLEM 1---1D ARRAY 
/*int main()
{
    int x[5],i;
    for(i=0;i<5;i++)
    {
        cin>>x[i];
    }
    for(i=0;i<5;i++)
    {
        cout<<x[i]<<endl;
    }
    return 0;
}*/

//WAP DISPLAY THE LARGEST NUMBER THAT USER ENTER. PRINT AVG VAL,AND PRINT NOS THAT USER ENTER

int main()
{
    int n,x[100],l,sum=0,i;
    cout<<"ENTER THE SIZE OF ARRAY: ";
    cin>>n;
    //input ate array ele
     for(i=0;i<n;i++)
    {
        cin>>x[i];
    }

    //largrst code
    l=x[0];
    for(i=0;i<n;i++)
    {
        if(x[i]>l)
        {
            l=x[i];