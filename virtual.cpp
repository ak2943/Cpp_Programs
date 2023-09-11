
//--------------virtual base class -------------
#include<iostream>
using namespace std;
/*class employee
{
	int eid;
 	string name;
 	string dept;
 	float salary;
 	 public:
 	 	void put()
 	 	{
 	 	  cout<<"\n ENTER EMPLOYEE DETAILS* ";
		  cout<<"\n\n ENTER EMPLOYEE ID : ";
		  cin>>eid;
		  cout<<"\n ENTER EMPLOYEE NAME : ";
		  cin>>name;
		  cout<<"\n ENTER EMPLOYEE DEPARTMENT : ";
		  cin>>dept;
		  cout<<"\n ENTER EMPLOYEE SALARY : ";
		  cin>>salary;
		  cout<<"\n ------------------------";
		}
		
		void show()
 	 	{
 	 	  cout<<"\n DISPLAY EMPLOYEE DETAILS* ";
		  cout<<"\n\n ENTER EMPLOYEE ID : "<<eid;
		  cout<<"\n ENTER EMPLOYEE NAME : "<<name;
		  cout<<"\n ENTER EMPLOYEE DEPARTMENT : "<<dept;
		  cout<<"\n ENTER EMPLOYEE SALARY : "<<salary;
		  cout<<"\n ------------------------";
		}
};

class project:virtual public employee
{
	float projectprice;
 	 public:
 	 	void putproject()
 	 	{
		  cout<<"\n ENTER PROJECT PRICE : ";
		  cin>>projectprice;	
		}
		
		float showproject()
		{
			return projectprice;
		}
};

class invest:virtual public employee
{
	float empinvest;
	 public:
	 	void putinvest()
	 	{
	 	  cout<<"\n ENTER EMPLOYEE INVEST IN PROJECT ";
	 	  cin>>empinvest;
	 	  
		}
		float showinvest()
		{
			return empinvest;
		}
};

class result:protected invest,protected project
{
	float s,s1,s2,s3,s4;
 	public:
 		void salesput()
 		{
 			cout<<"\n ENTER SALES OF COMPANY S1 S2 S3 S4 : ";
 			cin>>s1>>s2>>s3>>s4;
 			s=(s1+s2+s3+s4);
		}
		float salesshow()
		{
			return s;
		}
		
	 void display()
	 {
	 	put();
	 	putproject();
	 	putinvest();
	 	salesput();
	 	show();
	 	float total=showproject()+showinvest()+salesshow();
	 	cout<<"\n TOTAL BUDGET FOR SALES EMPLOYEE INVEST & PROJECT PRICE : "<<total;
	 }
};

int main()
{
   result r1;
   r1.display();
   return 0;	
} */


//virtual function///by default cpp follow early binding
/*
class A
{
	public:
	int x=10;
	virtual void f1()
	{
		cout<<"\n VALUE OF X : "<<x;
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
		cout<<"\n VALUE OF X "<<x;
	}	
};


int main()
{
	A *ptr;
	A a;
	B b;
	ptr=&a;
	ptr->f1();
	ptr=&b;
	ptr->f1();
	b.f2();
	 return 0;
}

/*/
////VIRTUAL BASE CLASS--------------
/*
class A
{
	public:
	int x,y;
	
		void put()
		{
			cout<<"\n ENTER VALUES OF X AND Y : ";
		    cin>>x>>y;
		}
		void add()
		{
			cout<<"\n ADDITION : "<<x+y;
		}
		
};

class B:virtual public A
{
	public:
		void sub()
		{
			cout<<"\n SUBSTRACTION : "<<x-y;
		}
		
};

class C:virtual public A
{
	public:
	
		void mult()
		{
			cout<<"\n MULTIPLICATION : "<<x*y;
		}
		
};

class D:public B,protected C
{
   public:
	      
		void div()
		{
			add();
	        sub();
	        mult(); 
			cout<<"\n DIVISION : "<<x/y;
		}	
};

int main()
{
	D d;
	d.put();
	d.div();
	return 0;
}


*/

class A
{
	public:
	int x=10;
	virtual void f1()
	{
		cout<<"\n VALUE OF X : "<<x;
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
	A *ptr[2];
	A a;
	B b;
	ptr[0]=&a;
	ptr[1]=&b;
	for(int i=0;i<2;i++)
	{
		ptr[i]->f1();
	}
	ptr.f2();
	return 0;
}






