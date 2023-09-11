#include<iostream>
using namespace std;
/* HIGHEST SALARY EMPLOYEE*/
/*
class Employee
{
    public:
    int eid;
    string name;
    string dept;
    float salary;
    
      Employee()
      {
      	cout<<"\n ENTER EMPLOYEE ID :  ";
      	cin>>eid;
      	cout<<"\n ENTER EMPLOYEE NAME : ";
      	cin>>name;
      	cout<<"\n ENTER EMPLOYEE DEPARTMENT : ";
      	cin>>dept;
      	cout<<"\n ENTER EMPLOYEE SALARY : ";
      	cin>>salary;
       } 
       
};

int main()
{
   Employee e[3];
   int i;
   float s;
   s=e[1].salary;
   for(i=0;i<3;i++)
   {
   	if(e[i].salary>s)
   	{
   	   s=e[i].salary;	
	}
   }
   for(i=0;i<3;i++)
   {
   	if(e[i].salary==s)
   	{
   	  cout<<"\n MAXIMUM SALARY EMPLOYEE DETAILS : ";
   	  cout<<"\n ID : "<<e[i].eid;
   	  cout<<"\n NAME : "<<e[i].name;
   	  cout<<"\n DEPARTMENT : "<<e[i].dept;
   	  cout<<"\n SALARY : "<<e[i].salary;
   	  
	}
   }
   return 0;
}*/


//ALL TYPES OF CONSTRUCTORS
/*
class product
{
    int pid;
    string pname;
    float price;
    public:
     product()
      {
         cout<<"\n ENTER PID : ";
         cin>>pid;
         cout<<"\n ENTER NAME : ";
         cin>>pname;
         cout<<"\n ENTER PRICE : ";
         cin>>price;		
      }
       void out()
       {
       	cout<<"\n  PID : "<<pid;
	cout<<"\n  PNAME : "<<pname;
	cout<<"\n  PRICE : "<<price;
       }
       
       product(int id,string n,float p)
       {
       	pid=id;
       	pname=n;
       	price=p;
       	cout<<"\n PARAMATRIZE CONST ";
       	cout<<"\n PRODUCT ID :"<<pid;
       	cout<<"\n PRODUCT NAME : "<<pname;
       	cout<<"\n PRICE :"<<price;
       }
       
       product(product &x)
       {
       	pid=x.pid;
       	pname=x.pname;
       	price=x.price;
       	cout<<"\n COPY CONST ";
       	cout<<"\n PRODUCT ID :"<<pid;
       	cout<<"\n PRODUCT NAME : "<<pname;
       	cout<<"\n PRICE :"<<price;
       }
};
int main()
{
  product p;
  p.out();
  product p1(202,"ice",30.20),p2(p);
  return 0;
}

*/
//friend function
/*
class first;
class second
{
	int y;
	public:
	 void set()
	 {
	 	cout<<"\n ENTER Y : ";
	 	cin>>y;
	 }
	 friend void max(first,second);
};

class first
{
	int x;
	public:
	 void set()
	 {
	 	cout<<"\n ENTER X : ";
	 	cin>>x;
	 }
	 friend void max(first,second);
};

 void max(first f, second s)
 {
 	if(f.x>s.y)
 	{
 		cout<<"\n GREATER NUMBER IS : "<<f.x;
	}
	else
	{
 		cout<<"\n GREATER NUMBER IS : "<<s.y;
	}
	
 }
 int main()
 {
 	first f;
 	second s;
 	f.set();
 	s.set();
 	max(f,s);
 	return 0;
 }
*/

//STSTIC FUNCTION AND MEMBERS
/*
class test
{
  int a,b;
  public:
  	static int count;
  	test()
  	{
  		cout<<"\n ENTER A & B VALUES : ";
  		cin>>a>>b;
  		cout<<"\n ADDITION : "<<a+b;
  		cout<<"\n SUBSTRACTION : "<<a-b;
  		count++;
	  }
	  
	  static int getcount()
	  {
	  	return count;
	  }
};

int test::count;

int main()
{
	test t1,t2;
	cout<<"\n COUNT OF OBJECT CREATED : "<<t1.getcount();
	return 0;
}
*/
/*
class stud
{
	int id;
	string name;
	string dept;
	float fees;
	public:
	  stud()
	 {
	 	cout<<"\n ENTER ID : ";
	 	cin>>id;
	 	cout<<"\n ENTER NAME : ";
	 	cin>>name;
	 	cout<<"\n ENTER DEPT : ";
	 	cin>>dept;
	 	cout<<"\n ENTER FEES : ";
	 	cin>>fees;
	 }
	 void display()
	 {
	 	cout<<"\n ID : "<<id<<"\n NAME : "<<name<<"\n DEPT: "<<dept<<"\n FEES : "<<fees;
	 }
	 
	 stud(int r,string s,string d,float f)
	 {
	 	this->id=r;
	 	this->name=s;
	 	this->dept=d;
	 	this->fees=f;
	 }
	 
	 void show()
	 {
	 	cout<<"\n ID : "<<id<<"\n NAME : "<<name<<"\n DEPT: "<<dept<<"\n FEES : "<<fees;
	 }
};

int main()
{
	stud s;
	s.display();
	stud s1(1,"ali","cs",345.90);
	s1.show();
	return 0;
}
*/

//UNERAY OPERATOR
/*
class count
{
	int a;
	public:
		count()
		{
			cout<<"\n ENTER A : ";
			cin>>a;
			
		}
		void operator ++()
		{
			a++;
		}
		void display()
		{
			cout<<"\n COUNT OF A AFTER INCREMENT : "<<a;
		}
};

int main()
{
	count c;
	++c;
	c.display();
	return 0;
}
*/

/*
//binary operator
class product
{
   int price;
   public:
    product(int a)
    {
    	price=a;
    }
    void operator +(product p)
    {
    	int m;
    	m=price+p.price;
    	cout<<"\n ADDITION OF 2 OBJ : "<<m;
    }		

};

int main()
{
	product p1(10);
	product p2(20);
	p1+p2;
	return 0;
}
*/

/*
class student
{
	int roll;
	string name;
	string dept;
	public:
	void put()
	{
		cout<<"\n ENTER ROLL NO : ";
		cin>>roll;
		cout<<"\n ENTER NAME : ";
		cin>>name;
		cout<<"\n ENTER DEPT : ";
		cin>>dept;
	}
	
	void display()
	{
		cout<<"\n ROLL NO : "<<roll;
		cout<<"\n NAME : "<<name;
		cout<<"\n DEPt : "<<dept;
	}
};

class internal:public student
{
	float m1,m2,m3;
	public:
	  void put1()
	  {
	  	cout<<"\n ENTER MARKS OF SUBJECT M1, M2, M3 : ";
	  	cin>>m1>>m2>>m3;
	  }
	  int display1()
	  {
	  	return (m1+m2+m3);
	  }
};

class external
{
   float s1,s2,s3;
   public:
   	void put2()
   	{
   	   cout<<"\n ENTER MARKS OF SUBJECT S1, S2, S3 : ";
	  	cin>>s1>>s2>>s3;
	}
	  int display2()
	  {
	  	return (s1+s2+s3);
	  }	
};

class result:public internal,public external
{
	float total,avg;
	public:
	void cal()
	{
	put();
	put1();
	put2();
	display();
	total=(display1()+display2());
	cout<<"\n TOTAL : "<<total;
	avg=total/2;
	cout<<"\n AVERAGE : "<<avg;	
	}
};

int main()
{
    result r;
    r.cal();
    return 0;
}
*/

/*
class Employee
{
	int eno;
	string name;
	string designation;
	public:
	void put()
	{
	 cout<<"\n ENTER EMP NO: ";
	 cin>>eno;
	 cout<<"\n ENTER EMP NAME : ";
	 cin>>name;
	 cout<<"\n ENTER DESIGNATION: ";
	 cin>>designation;	
	}	
	void display()
	{
	  cout<<"\n EMPLOYEE NO : "<<eno;
	  cout<<"\n EMPLOYEE NAME : "<<name;
	  cout<<"\n EMPLOYEE DESIGNATION : "<<designation;	
	}
};

class dept
{
	int did;
	string dname;
	string city;
	public:
	void put1()
	{
	 cout<<"\n ENTER EMP DEPT ID: ";
	 cin>>did;
	 cout<<"\n ENTER EMP DEPT NAME : ";
	 cin>>dname;
	 cout<<"\n ENTER CITY : ";
	 cin>>city;	
	}	
	void display1()
	{
	  cout<<"\n EMPLOYEE NO : "<<did;
	  cout<<"\n EMPLOYEE NAME : "<<dname;
	  cout<<"\n EMPLOYEE DESIGNATION : "<<city;	
	}
		
};

class account: public Employee,public dept
{
	float basic,DA,TA,Gross_sal;
	public:
	void put3()
	{
		cout<<"\n ENTER BASIC SELLS, DA, TA OF EMPLOYEE : ";
		cin>>basic>>DA>>TA;
	}
	void res()
	{
	   put();
	   put1();
	   put3();
	   display();
	   display1();
	   Gross_sal=(basic+DA+TA);
	   cout<<"\n GROSS SALARY OF EMPLOYEE : "<<Gross_sal;
	}	
};

int main()
{
	account a;
	a.res();
	return 0;
}
*/

/*

#include<fstream>
int main()
{
      int rno,fee;
      char name[50];
      
      cout<<"Enter the Roll Number:";
      cin>>rno;
       
      cout<<"\nEnter the Name:";
      cin>>name;
       
      cout<<"\nEnter the Fee:";
      cin>>fee;
   
      ofstream fout("E:/student.txt");
   
      fout<<"\n roll no "<<rno<<"\n name : "<<name<<"\n fees : "<<fee;   //write data to the file student
   
      cout<<"\n DATA WRITTEN SUSSESSFULLY ";
      fout.close();
   
      ifstream fin("E:/student.txt");
   
      fin>>rno>>name>>fee;   //read data from the file student
   
      fin.close();
   
      cout<<"\n "<<rno<<"\n "<<name<<"\n "<<fee;
      
      cout<<"\n DATA READ SUSSESSFULLY ";
   
    return 0;   
}
*/

/*
class A
{
	public:
		int x=10;
		virtual void f1()
		{
			cout<<"\n X VALUE : "<<x;
		}
		
};

class B:public A
{
  protected:
  int y=20;
  public:
  void f1()
      {
  	cout<<"\n VALUE OF Y : "<<y;
      }
   void f2()
      {
  	cout<<"\n VALUE OF X : "<<x;
      }	
};

int main()
{
	A *ptr;
	A a;
	B b;
	//call dynamin binding
	ptr=&a;
	ptr->f1();
	ptr=&b;
	ptr->f1();
	//call ststic binding
	b.f2();
	return 0;
	
}

*/

//file

/*
#include<fstream>
int main()
{
	int roll;
	string name;
	float fees;
	cout<<"\n ENTER ROLL NO NAME & AND FEES : ";
	cin>>roll>>name>>fees;
	fstream f("E:/student.txt",ios::app);
	f<<"\n\t "<<roll<<"\t "<<name<<"\t "<<fees;
	f.close();
	
	cout<<"\n FILE WRITE OPERATION COMPLETED !";
	
	ifstream o("E:/student.txt",ios::in);
      o>>roll>>name>>fees;
	cout<<"\n\t "<<roll<<"\t "<<name<<"\t "<<fees;
	o.close();
	
	cout<<"\n READING OPERATION COMPLETED! ";
	return 0;
	
}*/

/*
class A
{
	public:
	int x,y;
		void put()
		{
			cout<<"\n ENTER X AND Y ";
			cin>>x>>y;
		}
		
		virtual void display()
		{
		  cout<<"\n BASE CLASS ";
		  cout<<"\n ADDITION : "<<(x+y);	
		}
	  
};

class B:public A
{
	int z=49;
	public:
	 void display()
		{
		  cout<<"\n DERIVED CLASS ";
		  cout<<"\n VALUE OF Z : "<<z;	
		}
	void show()	
	{
		cout<<"\n FUNCTION CALL BY OBJECT ";
	}
};

int main()
{
	A a,*p;
	B b;
	a.put();
	p=&a;
	p->display();
	p=&b;
	p->display();
	b.show();
	return 0;
}

*/



















