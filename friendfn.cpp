#include<iostream>
using namespace std;

//USE 3 CLASSES ME CSE AND ENTC TAKE INPUT FOR NAME AND SALARY AND USING FRIEND FUNCTION CAL THE TOTAL SAL OF ALL DEPT
/*class me;
class entc;
class cse
{
	string name;
	string dept;
	float salary;
	public:
		cse()
		{
			cout<<"\n ENTER NAME : ";
			cin>>name;
			cout<<"\n ENTER DEPARTMENT : ";
			cin>>dept;
			cout<<"\n ENTER SALARY: ";
			cin>>salary;
			cout<<"\n ----------------";
		}
		
		friend void cal(cse c,me m,entc e);
};

class me
{
	string name;
	string dept;
	float salary;
	public:
		me()
		{
			cout<<"\n ENTER NAME : ";
			cin>>name;
			cout<<"\n ENTER DEPARTMENT : ";
			cin>>dept;
			cout<<"\n ENTER SALARY: ";
			cin>>salary;
			cout<<"\n ----------------";
		}
		
		friend void cal(cse c,me m,entc e);
};

class entc
{
	string name;
	string dept;
	float salary;
	public:
		entc()
		{
			cout<<"\n ENTER NAME : ";
			cin>>name;
			cout<<"\n ENTER DEPARTMENT : ";
			cin>>dept;
			cout<<"\n ENTER SALARY: ";
			cin>>salary;
			cout<<"\n ----------------";
		}
		
		friend void cal(cse c,me m,entc e);
		
};

void cal(cse c,me m,entc e)
{
	int total=c.salary+m.salary+e.salary;
	cout<<"\n"<<c.salary<<" +"<<m.salary<<" +"<<e.salary;
	cout<<"\n TOTAL SALARY : "<<total;
}

int main()
{
	cse o1;
	me o2;
	entc o3;
	cal(o1,o2,o3);
	return 0;
	
}*/



//TO CALCULATE HIGH SALARY OF EMPOLYEE USING FRIEND FUNCTION
/*

class employee
{
	int eid;
	string name;
	string dept;
	public:
	float salary;
		employee()
		{
			cout<<"\n ENTER EMPLOYEE ID : ";
			cin>>eid;
			cout<<"\n ENTER EMPLOYEE NAME : ";
			cin>>name;
			cout<<"\n Enter EMPLOYEE DEPARTMENT : ";
			cin>>dept;
			cout<<"\n ENTER EMPLOYEE SALARY : ";
			cin>>salary;
			cout<<"\n -------------------------\n";
		}
		
	   friend void dispaly(employee e1[])
		{
			for(int i=0;i<3;i++)
			{
			cout<<"\n EMOPLOYEE ID : "<<e1[i].eid;
			cout<<"\n EMPLOYEE NAME : "<<e1[i].name;
			cout<<"\n EMPLOYEE DEPARTMENT : "<<e1[i].dept;
			cout<<"\n EMPLOYEE SALARY : "<<e1[i].salary;
			cout<<"\n -------------------------\n";
				
			}
			
		}
};

int main()
{
	employee e[3];
	float s;
	for(int i=0;i<3;i++)
	{
		s=e[0].salary;
		if(e[i].salary>s)
		{
			s=e[i].salary;
		}
	}
	for(int i=0;i<3;i++)
	{
		if(e[i].salary==s)
		dispaly(e);
	}
}
*/

//Program to fing greater number betn 3 nos using 3 clases and use friend function to find greater no.
/*
class second;
class third;
class first
{
	public:
    int o1;
 
  	void put()
  	{
  		cout<<"\n ENTER VALUE OF o1 : ";
  		cin>>o1;
    }
  	friend void high(first a,second b,third c);
  	
};

class second
{
	public:
  int o2;
  
  	void put()
  	{
  		cout<<"\n ENTER VALUE OF o2 : ";
  		cin>>o2;
    }
  	friend void high(first a,second b,third c);
  	
};

class third
{
  public:
  int o3;
  	void put()
  	{
  		cout<<"\n ENTER VALUE OF o3 : ";
  		cin>>o3;
    }
  	friend void high(first a,second b,third c);
};

void high(first a,second b,third c)
{
	int i;
		if((a.o1>b.o2)&&(a.o1>c.o3))
		{
			cout<<"\n "<<a.o1<<" IS GREATER! ";
		}
		else if((b.o2>a.o1)&&(b.o2>c.o3))
		{
			cout<<"\n "<<b.o2<<" IS GREATER! ";
		}
		else
		{
			cout<<"\n "<<c.o3<<" IS GREATER! ";
		}
}

int main()
{
	first f;
	second s;
	third t;
	f.put();
	s.put();
	t.put();
	high(f,s,t);
	return 0;
	
}
*/

/*class second;
class first
{
	public:
		int x;
	friend void input(first n,second m);
	friend void calculate(first a,second b);
	
};

class second
{
	public:
		int y;
		friend void input(first n,second m);
	friend void calculate(first a,second b);
	
};

void input(first n,second m)
		{
			cout<<"\n ENTER VALUES OF X : ";
			cin>>n.x;
			cout<<"\n ENTER VALUES OF Y : ";
			cin>>m.y;
			
		}


void calculate(first a,second b)
{
   int ch;
   cout<<"\n 1.ADDITION \n 2.SUBSTRACTION \n 3.multiplication \n 4.DIVISION \n 5.EXIT \n";
   
   do
   {
   	cout<<"\n ENTER YPUR CHOICE : ";
   	cin>>ch;
   	switch(ch)
   	{
   	 case 1:
   	 	     cout<<"\n "<<a.x<<" "<<b.y;
		     cout<<"\n ADDITION :"<<(a.x+b.y);
			 break;
			 
	case 2:  cout<<"\n "<<a.x<<" "<<b.y;
		     cout<<"\n SUBSTRACTION :"<<a.x-b.y;
			 break;
			 
	case 3:  cout<<"\n "<<a.x<<" "<<b.y;
		     cout<<"\n MULTIPLICATION :"<<a.x*b.y;
			 break;
			 
	case 4:  cout<<"\n "<<a.x<<" "<<b.y;
		     cout<<"\n DIVISION :"<<a.x/b.y;
			 break;
	
	case 5:cout<<"\n EXIT ";
	       exit(0);
			 
	default: cout<<"\n WRONG CHOICE @";
	}
  }while(ch!=5);
}

int main()
{
	first f;
	second s;
	input(f,s);
	calculate(f,s);
	return 0;
}
*/

//program using Frend Function,to develop a simple Calculator which performs operatin of Addition,Substraction,Division,Multiplication,and give a EXIT control.
/*class first
{
	public:
		int x,y;
		
	friend void calculate(first a);
	
};

void calculate(first a)
{
   int ch;
    cout<<"\n ENTER VALUES OF X : ";
	cin>>a.x;
	cout<<"\n ENTER VALUES OF Y : ";
	cin>>a.y;
   
   cout<<"\n 1.ADDITION \n 2.SUBSTRACTION \n 3.MULTIPLICATION \n 4.EXIT \n";
   
   do
   {
   	cout<<"\n\n ENTER YPUR CHOICE : ";
   	cin>>ch;
   	switch(ch)
   	{
   	 case 1:
   	 	     cout<<"\n "<<a.x<<" "<<a.y;
		     cout<<"\n ADDITION : "<<(a.x+a.y);
			 break;
			 
	case 2:  cout<<"\n "<<a.x<<" "<<a.y;
		     cout<<"\n SUBSTRACTION : "<<(a.x-a.y);
			 break;
			 
	case 3:  cout<<"\n "<<a.x<<" "<<a.y;
		     cout<<"\n MULTIPLICATION : "<<(a.x*a.y);
			 break;
	
	case 4:cout<<"\n THANK YOU ";
	       exit(0);
			 
	default: cout<<"\n WRONG CHOICE @";
	}
  }while(ch!=4);
}

int main()
{
	first f;
	calculate(f);
	return 0;
}*/


//program to find greater number between 2 numbers
class first;
class third;
class second
{
	int y;
	public:
		void set()
		{
			cout<<"\n ENTER VALUE OF Y : ";
			cin>>y;
		}
	friend void max(first,second,third);
};

class first
{
	int x;
	public:
		void set()
		{
			cout<<"\n ENTER VALUE OF X : ";
			cin>>x;
		}
	friend void max(first,second,third);
};

class third
{
	int z;
	public:
		void set()
		{
			cout<<"\n ENTER VALUE OF z : ";
			cin>>z;
		}
	friend void max(first,second,third);
};

void max(first f,second s,third t)
{
	if(f.x>s.y && f.x>t.z)
	  cout<<"\n GREATER NUMBER IS : "<<f.x;
	else if(s.y>f.x && s.y>t.z)
	  cout<<"\n GREATER NUMBER IS : "<<s.y;
	else
	  cout<<"\n GREATER NUMBER IS : "<<t.z;
}

int main()
{
	first f;
	second s;
	third t;
	 f.set();
	 s.set();
	 t.set();
	 max(f,s,t);
	 return 0;
}

