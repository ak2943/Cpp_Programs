/* STATIC DATA MEMBERS GET INITILIZED TO 0 WHEN OBJECT OF THE CLASS IS CREATED 
   ONLY ONE COPY OF STATIC DATA MEMBERS GET CREATED AND IT IS SHARED BY ALL OBJECTS
   IT IS VISIBLE IN A CLASS BUT ITS LIFETIME IS ENTIRE LIFE
*/

  
//preprocessor sends the program to compiler, while compiling preprocessos conver all micros to its original values.
//#define p 3.14 //3.14 micro extension //p micro   
  

#include<iostream>
#include<string.h>
using namespace std;

/*
/*CPP program to display the total amount of all students fees.If Total amount>30000 then
  display the total fees  of only cse department Students*/
  
  /*
class stud
{
	int rollno;
	string name;
	string dept;
	float fees;
	static float total_fees;
	static float cse_fees;
	int count;
	
	public:
		stud()
		{
			cout<<"\n ENTER ROLL NO OF STUDENT : ";
			cin>>rollno;
			cout<<"\n ENTER NAME OF STUDENT : ";
			cin>>name;
			cout<<"\n ENTER DEPARTMENT OF STUDENT : ";
			cin>>dept;
			cout<<"\n ENTER FEES OF STUDENT : ";
			cin>>fees;
			cout<<"\n -------------------------\n";
			total_fees=total_fees+fees;
			
		}
		void display(stud s[])
		{
			int i;
			if(total_fees>30000)
			{
				cout<<"\n STUDENTS OF CSE DEPARTMENT ";
					for(i=0;i<5;i++)
					{
						if(s[i].dept=="cse")
						{
						 cout<<"\n "<<s[i].name;	
						 cse_fees=cse_fees+s[i].fees;	
					    }	
					}
			  cout<<"\n\n TOTAL FEES OF CSE DEPARTMENT : "<<cse_fees;
			}
			else
			cout<<"\n\n TOTAL FEES OF ALL STUDENTS : "<<total_fees;
		}
		
};

float stud::total_fees;
float stud::cse_fees;

int main()
{
	stud s[5];
	s[5].display(s);
	return 0;
}
*/
/*class count_obj
{
	static int count;
	public:
		count_obj()
		{
			count++;
		}
		void display()
		{
			cout<<"\n NUMBER OF OBJECT CREATED: "<<count;
		}	
};

int count_obj::count;

int main()
{
  count_obj c,c1,c2,c3;
  c.display();
  return 0;	
}
*/

//cpp program to display the employee count having age greater than 21
/*class employee
{
	int eid;
	string name;
	int age;
	float salary;
	static int count_emp;
	public:
		employee()
		{       
	        	cout<<"\n\n ENTER EMPLOYEE ID : ";
			    cin>>eid;
			    cout<<"\n ENTER EMPLOYEE NAME: ";
			    cin>>name;
			    cout<<"\n ENTER EMPLOYEE AGE : ";
			    cin>>age;
			    cout<<"\n ENTER EMPLOYEE SALARY : ";
			    cin>>salary;
			    cout<<"\n ------------------------- ";
				
		}
		
		void above21age(employee e1[])
		{
			for(int i=0;i<3;i++)
			{
				if(e1[i].age>=21)
			  {
				count_emp++;
			  }
			  
			}
		 cout<<"\n TOTAL NO OF EMPLOYEE HAVING AGE>21 IS : "<<count_emp;
		}
 };
 
 int employee::count_emp;
 
 int main()
 {
 	employee e1[3];
 	e1[2].above21age(e1);
 	return 0;
 } 
 
 */
 
 
 //-------------------STATIC FUNCTIONS -----------------------------
 
/* class test
 {
 	int a,b;
 	public:
 		static int count;
		test()
		{
			cout<<"\n ENTER VALUE OF A : ";
			cin>>a;
			cout<<"\n ENTER VALUE OF B : ";
			cin>>b;
			cout<<"\n ADDITION : "<<a+b;
			count++;
		}
		
		static int getcount()
		{
			//only static data members are accessable.
			return count;
		}
 };
 int test::count;
 int main()
 {
 	test t1,t2;
 	cout<<"\n CREATED OBJECT OF CLASS TEST : "<<t1.getcount();
 	return 0;
 }
 
 */
 
class sample
{
	static int count;
	int n;
	public:
		void set()
		{
			n=++count;
		}
		
		void show()
		{
			cout<<"\n VALUE OF N : "<<n;
		}
		
		static void show_num()
		{
			cout<<"\n VALUE OF COUNT : "<<count;
		}
	
 };
 
 int sample::count;
 int main()
 {
 	sample s1,s2;
 	s1.set();
 	s2.set();
 	s1.show();
 	s2.show();
 	s1.show_num();
 	//sample::show_num();
 	return 0;
 }
 
 
 
 
 
 
 
 
 
 
 
 
 
 //----------------------------------INLINE FUNCTION------------------
 //calculate area using inline function
 /*
 #define p 3.14
 inline float calculate(int r)
{
	return (p*r*r);
}

inline float calculate(int b, int h)
{
	return (b*h);
}

inline float calculate(float s)
{
	return (s*s);
}

int main()
{
	int r;
	float area;
	cout<<"\n\n ENTER RADIUS : ";
	cin>>r;
	area=calculate(r);
	cout<<"\n AREA OF CIRCLE : "<<area;
	
	int base,height;
	cout<<"\n\n ENTER BASE AND HIGHT OF TRIANGLE : ";
	cin>>base>>height;
	area=calculate(base,height);
	cout<<"\n AREA OF TRIANGLE : "<<area;
	
	float side;
	cout<<"\n\n ENTER SIDE OF SQUARE : ";
	cin>>side;
	area=calculate(side);
	cout<<"\n AREA OF SQUARE : "<<area;
	return 0;
}
 
*/

/*
class operation
{
	int a,b;
	public:
		void get()
		{
			cout<<"\n ENTER VALUE OF A : ";
			cin>>a;
			cout<<"\n ENTER VALUE OF B : ";
			cin>>b;
		}
		
	   inline int add()
		{
			return(a+b);
		}
		
		inline int sub()
		{
			return(a-b);
		}
		
		inline int mult()
		{
			return(a*b);
		}
};

int main()
{
	cout<<"\n -----PROGRAM USING INLINE FUNCTIONS----- \n";
	operation o;
	o.get();
	
	cout<<"\n ADDITION : "<<o.add();
	cout<<"\n\n SUBSTRACTION : "<<o.sub();
	cout<<"\n\n MULTIPLICATION : "<<o.mult();
	return 0;
}*/
 
 
 
 
 
 
