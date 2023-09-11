#include<iostream>
using namespace std;
//PROBLEM 1---1D ARRAY 
int main()
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
}

//WAP DISPLAY THE LARGEST NUMBER THAT USER ENTER. PRINT AVG VAL,AND PRINT NOS THAT USER ENTER
/*
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
        }
    }
    cout<<"LARGEST NO IS: "<<l<<endl;

    //AVERAGE OF GIVEN NUMBERS
    sum=x[0];
    for(i=0;i<n;i++)
    {
        sum=sum+x[i];
    }
    cout<<"THE AVERAGE IS: "<<static_cast<double>(sum)/n<<endl;

   //output ate array ele
   cout<<"ELEMENTS OF ARRAY Are: ";
    for(i=0;i<n;i++)
    {
        cout<<x[i]<<endl;
    }
    return 0;
}*/

//problem 4--what will be the output
/*int main()
{
    char x[4]={'a','b','c','d'};
    for(int i=0;i<=4;i+=2)//i=i+2
    {
        cout<<x[i];
    }
    return 0;
}

//o/p===ac*/
//WAP TAHT USES 2D ARRAY TO STORE A LIST OF NUMBERS THE USER ENTER.THEN PRINT MATRIX AS OUTPUT
/*int main()
{
    int x[100][100],i,j,c,r;
    cout<<"ENTER ROWS OF ARRAY: ";
    cin>>r;
    cout<<"ENTER COLUMNS OF ARRAY: ";
    cin>>c;
   
    cout<<"ENTER "<<r*c<<" NUMBERS: "<<endl;
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        cin>>x[i][j];
    }

    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        cout<<"x["<<i<<"]["<<j<<"]"<<x[i][j]<<'\t';
        cout<<endl;
    }
 return 0;
}*/

//WAP TO ASSIGN PASSENGERS SEATS IN AN AIRPLANE. ASSUME SMALL AIRPALNE WITH SEATS NUMBRING AS FOLLOWS:
/*int main()
{
    char x[3][4];
    int i,j;

    for(i=0;i<3;i++)
    {
        for(j=0;j<4;j++)
        //cin>>x[i][j];
        {
            if(j==0)
              x[i][j]='A';
            else if(j==1)
              x[i][j]='B';
            else if(j==2)
              x[i][j]='C';
            else 
              x[i][j]='D';
        }
    }

     for(i=0;i<3;i++)
    {
        cout<<i+1<<" ";
        for(j=0;j<4;j++)
        cout<<x[i][j]<<" ";
        cout<<endl;
    }
    
    char ans;
    int counter=0;

    do
    {
        int rno;
        cout<<endl<<"HOW MANY RESERVATIONS:  ";
        cin>>rno;
        cout<<endl;

        for(i=0;i<rno;i++)
    {
         cout<<endl;

         bool alreadybooked=0, error=0;
      do
      {
         alreadybooked=0;
         error=0;
         int seatno;
         cout<<"ENTER SEAT NUMBER: ";
         cin>>seatno;

         char seatlet;
         cout<<"ENTER SEAT LETTER: ";
         cin>>seatlet;
     
      switch(seatlet)
      {
          case 'a':
          case 'A':if(x[seatno-1][0]=='X')
                   alreadybooked=1;
                   else
                   x[seatno-1][0]='X';
                   break;
          case 'b':
          case 'B':if(x[seatno-1][1]=='X')
                   alreadybooked=1;
                   else
                   x[seatno-1][1]='X';
                   break;
          case 'c':
          case 'C':if(x[seatno-1][2]=='X')
                   alreadybooked=1;
                   else
                   x[seatno-1][2]='X';
                   break;
          case 'd':
          case 'D':if(x[seatno-1][3]=='X')
                   alreadybooked=1;
                   else
                   x[seatno-1][3]='X';
                    break;
          default: 
                  cout<<"INVALID CHOICE.PLEASE TRY AGAIN"<<endl;
                  error=1;
      }

      if(alreadybooked==1)
      {
          cout<<"SEAT IS ALREADY BOOKED!"<<endl;
      }
    }while (alreadybooked == 1 || error == 1);
    counter++;
  }

      for(i=0;i<3;i++)
    {
        cout<<i+1<<" ";
        for(j=0;j<4;j++)
        cout<<x[i][j]<<" ";
        cout<<endl;
    }
     
       cout<<"WOULD YOU WANT TO CONTINUE(Y FOR YES N FOR NO): ";
       cin>>ans;
 }while(ans=='y' && counter !=12);

   if(ans=='n') 
     cout<<"GOODBYE!"<<endl;
     else
     cout<<"SORRY. NO MORE SEATS ";

   return 0;
}*/

//problem 5:
/*int main()
{
    int i, temp[10];
    
    for (i = 0; i < 10; i++)
        temp[i] = 2 * i;
    
    for (i = 0; i < 10; i++)
        cout << temp[i] << " ";
 
    cout << endl;
    
    for (i = 0; i < 10; i = i + 2)
        cout << temp[i] << " ";
 
    return 0;
}*/








