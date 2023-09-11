#include <iostream>  
using namespace std;
 /* 
class Account 
 {  
   public:  
   float salary = 60000;   
 };  
 
class Programmer: public Account 
 {  
   public:  
   float bonus = 5000;    
 };       
int main() 
  {  
     Programmer p1;  
     cout<<"\n Salary: "<<p1.salary;    
     cout<<"\n Bonus: "<<p1.bonus;    
    return 0;  
 }  
 */
 
 
 
 //single Inheratance
 /*
 class employee
 {
 	int eid;
 	string name;
 	string dept;
 	float salary;
 	 public:
 	 	void put()
 	 	{
 	 	  cout<<"\n ENTER EMPLOYEE DETAILS: ";
		  cout<<"\n\n ENTER EMPLOYEE ID : ";
		  cin>>eid;
		  cout<<"\n ENTER EMPLOYEE NAME : ";
		  cin>>name;
		  cout<<"\n ENTER EMPLOYEE DEPARTMENT : ";
		  cin>>dept;
		  cout<<"\n ENTER EMPLOYEE SALARY : ";
		  cin>>salary;
		}
		
		
		void show()
 	 	{
 	 	  cout<<"\n EMPLOYEE DETAILS: ";
		  cout<<"\n\n ENTER EMPLOYEE ID : "<<eid;
		  cout<<"\n ENTER EMPLOYEE NAME : "<<name;
		  cout<<"\n ENTER EMPLOYEE DEPARTMENT : "<<dept;
		  cout<<"\n ENTER EMPLOYEE SALARY : "<<salary;
		}
 	
 };
 
 
 
 class sales:protected employee
 {
 	float s1,s2,s3,s4;
 	public:
 		void display()
 		{
 			put();
 			cout<<"\n ENTER SALES OF COMPANY S1 S2 S3 S4 : ";
 			cin>>s1>>s2>>s3>>s4;
 			show();
 			cout<<"\n\n SALES OF COMPANY : "<<(s1+s2+s3+s4);
		}
		
 };
 
 int main()
 {
 	sales s1;
 	s1.display();
 	return 0;
 }
 */
 
 
 //multilevel inheritance
 /*
 class employee
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
 
 class product:public employee
 {
 	string pname;
 	string company;
 	 public:
 	 	void productput()
 	 	{
 	 	  cout<<"\n ENTER PRODUCT DETAILS*  ";
 	 	  cout<<"\n\n  ENTER PRODUCT NAME : ";
		  cin>>pname;
		  cout<<"\n ENTER COMPANY OF PRODUCT : ";
		  cin>>company;	
		  cout<<"\n ------------------------";
		}
		void productshow()
		{
			cout<<"\n DISPLAY PRODUCT DETAILS* ";
			cout<<"\n PRODUCT NAME : "<<pname;
			cout<<"\n PRODUCT COMPANY : "<<company;
			cout<<"\n ------------------------";
		}
 };
 
 class sales:protected product
 {
 	float s1,s2,s3,s4;
 	public:
 		void display()
 		{
 			put();
 			productput();
 			cout<<"\n ENTER SALES OF COMPANY for S1 S2 S3 & S4: ";
 			cin>>s1>>s2>>s3>>s4;
 			show();
 			productshow();
 			cout<<"\n\n SALES OF COMPANY : "<<(s1+s2+s3+s4);
 	    }	
 };
 
 int main()
 {
 	sales s1;
 	s1.display();
 	return 0;
 }
 /*/

 
 //MULTIPLE INHERITANCE 
 /*
 class employee
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
 
 
 class sales
 {
 	float s,s1,s2,s3,s4;
 	public:
 		void salput()
 		{
 			cout<<"\n ENTER SALES OF COMPANY S1 S2 S3 S4 : ";
 			cin>>s1>>s2>>s3>>s4;
 			s=(s1+s2+s3+s4);
		}
		float salshow()
		{
			return s;
		}
 };
 
 class project:public employee,protected sales
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
		
		void display_result()
		{
			put();
			putproject();
			salput();
			show();
			showproject();
			salshow();
			float total;
			total=salshow()+showproject();
			cout<<"\n TOTAL OF SALES AND PROJECT PRICE : "<<total;
		}
 };
 
int main()
{
	project p1;
	p1.display_result();
	return 0;
}*/

//hybrid inheritance

/*
class employee
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

class project:public employee
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

class invest
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
} 
*/
 
 
 //heirachical inheritance
 /*
 class employee
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
 
 class project:public employee
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
			cout<<"\n TOTAL PROJECT PRICE : "<<projectprice;
		}
 };
 
 class sales:public employee
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
			cout<<"\n TOTAL SALES OF 4 YEARS : "<<s;
		}
 };
 
 int main()
 {
 	project p;
 	sales s;
 	p.put();
 	p.putproject();
 	s.salesput();
 	p.show();
 	p.showproject();
 	s.salesshow();
 	return 0;
 }
 */
 
 //constructor in Derived class-----

class base
{
   protected:
   int t1,t2;
   public:
   base(int x, int y)
  {
    t1=x;
    t2=y;
    cout<<"\n MARKS IN FIRST TEST = "<<t1;
	cout<<"\n MARKS IN SECOND TEST = "<<t2;
  }
};

class derived:public base
{
  protected:
    float avg;
    int total;
    public:
    derived(int a, int b):base(a,b)
    {
      total=t1+t2;
      avg=float(total)/2;
      cout<<"\n TOTAL MARKS OF 2 TESTS :  "<<total;
	  cout<<"\n AVERAGE MARKS IN TWO TESTS :  "<<avg;
    }
};
int main()
{

   int m1,m2;
   cout<<"\n ENTER MARKS IN 2 TESTS : ";
   cin>>m1>>m2;
   class derived d(m1,m2);
   return 0;
}
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
