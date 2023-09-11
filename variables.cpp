/*#include<iostream>
using namespace std;

int main()
{
    int sum=0;
    for(int i=0;i<5;i++)
    {
        int x;
        cin>>x;
        sum=sum+x;
    }
    cout<<sum;
    
    return 0;
}*/
/*#include <iostream>
using namespace std;
int main()
{   
    int x = 3; 
    cout << ((5 > 9) || (x = 1)) && !(1 < 0);
    
    return 0;
}*/
#include <iostream>
using namespace std;
int main()
{   
    int num1 = 5;
    int num2 = 3;
    int num3 = 17;    
 
    num1 -= num2++;
    num2 = --num3 - num2 * num1;
    cout << num1 << num2 << num3;
    
    return 0;
}










