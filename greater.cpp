#include<iostream>
using namespace std;

//problem 1
/*int main()
{
    int x,y,z;
    cout<<"ENTER VALUES OF X Y AND Z";
    cin>>x>>y>>z;

    if(x>y && x>z)
    {
        cout<<"GREATEST NUMBER IS x  "<<x;
    }
    else if(y>x && y>z)
    {
       cout<<"GREATEST NUMBER IS y  "<<y;
    }
    else
    {
       cout<<"GREATEST NUMBER IS z  "<<z;
    }
    
    return 0;

}*/

/*int main()
{
    char grade;
    cout<<"ENTER YOU GRADE IN LETTER: ";
    cin>>grade;
  
    switch(grade)
    {

         case 'a': cout<<"EXCELLENT";
                 break;
         case 'b': cout<<"VERY GOOD";
                 break;
         case 'c': cout<<"PASSING";
                 break;
         case 'd':
         case 'f': cout<<"NOT GOOD";
                 break;
         default: cout<<"ENTER VALID CHOICE::";

    }
    return 0;
}*/

//write program to take all -ve number ip,if we enter +ve num print sum of all previous number
/*int main()
{
    int n,i,sum=01\;

    cout<<"ENTER 5 NUMBERS: ";
    for(i=0;i<5;i++)
    {
        cin>>n;
    if(n<0)
        sum=sum+n;
    else
        break;
    }
   cout<<"SUM: "<<sum;
}*/

/*problem 3: wap that simulate "guess the number" game.set choice 
  to be bet 1 to 10.Allow only 3 chance to guess*/
  /*int main()
  {
      int x,target=6,i;
      for(i=0;i<=2;i++)
      {
          cout<<"ENTER NUMBER: ";
          cin>>x;
          if(x==target)
          {
              cout<<"CORRECT ANSWER YOU WON!";
              break;
          }
          else
          {
              if(i<2)
              cout<<"TRY AGAIN!"<<endl;
        
          }
      }
      if(i>2)
      cout<<"GAME END! SORRY BEST BUCK NEXT TIME";
      return 0;
  }*/

  //PROBLEM 4- PRINT PRIME NUMBERS BET 1 TO 100
  /*int main()
  {
      int i,j,pri;
      for(i=2;i<=100;i++)
      {
          pri=0;
          for(j=2;j<i;j++)
          {
              if(i%j==0)
              {
                  pri++;
                  break;
              }
          }
                if(pri==0)
                {
                  cout<<i<<endl;
                }
      }
   return 0;
  }*/
  //quiz problem
  
/*int main()
{
    char c1, c2, c3, c4;
    cout << "Enter a line of input:\n";
    cin.get(c1);
    cin.get(c2);
    cin.get(c3);
    cin.get(c4);
    cout << c1 << c2 << c3 << c4 << "END OF OUTPUT";
 
    return 0;
}*/

/*#include <iostream>
using namespace std;
int main()
{
    char next;
    int count = 0;
    cout << "Enter a line of input:\n";
    cin.get(next);
    
    while (next != '\n')
    {
        if ((count % 2) == 0)
            cout << next;
        
        count++;
        cin.get(next);
    }
 
    return 0;
}*/


#include<cctype>
using namespace std;
int main()
{
    cout << "Enter a line of input:\n";
    char next;
    do
    {
        cin.get(next);
        cout << next;
    } while ( (!isdigit(next)) && (next != '\n') );
    
    cout << " END OF OUTPUT";
 
    return 0;
}