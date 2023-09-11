#include<iostream>
using namespace std;
/*class stud
{
	int rollno;
	string name;
	string city;
	float fees;
	public:
		stud()
		{
			cout<<"\n Enter rollno of student: ";
			cin>>rollno;
			cout<<"\n Enter Name of Student: ";
			cin>>name;
			cout<<"\n Enter City of student: ";
			cin>>city;
			cout<<"\n Enter Fees of student: ";
		    cin>>fees;
		}
		
		stud(int r,string n,string c,float p)
		{
		  rollno=r;
		  name=n;
		  city=c;
		  fees=p;
	   } 
		
	    stud(stud &x)
	    {
	    	rollno=x.rollno;
	    	name=x.name;
	    	city=x.city;
	    	fees=x.fees;
	    	
		}
		void display()
		{
			cout<<"\n RollNo Of student : "<<rollno;
			cout<<"\n Name Of student : "<<name;
			cout<<"\n Address Of student : "<<city;
			cout<<"\n Fees Of student : "<<fees;
			cout<<"\n -------------------------";
		}
};

int main()
{
	stud s,s1(10,"Alisha","Mahagaon",2899.89),s2(s1);
	s.display();
	s1.display();
	s2.display();
	return 0;
	
} */

/*
class sample
{
	int a,b;
	public:
		sample()
		{
			cout<<"\n I AM DEFAULT CONSTRUCTOR\n";
		}
		
		sample(int a,int b)
		{
			cout<<"\n A: "<<a<<"\n B: "<<b;
			cout<<"\n I AM PARAMETRISED CONSTRUCTOR\n";
		}
		
		sample(sample &z)
		{
		  a=z.a;
		  //b=z.b;
		  cout<<"\n A: "<<a;
	      
		  cout<<"\n I AM COPY CONSTRUCTOR\n";	
		}
};

int main()
{
	sample s,s1(2,5),s2(s1);
	return 0;
	
}*/


class mobile
{
	int mid;
	char name[10];
	char model[20];
	public:
		mobile()
		{
			cout<<"\n ENTER MOBILE ID : ";
			cin>>mid;
			cout<<"\n ENTER MOBILE NAME : ";
			cin>>name;
			cout<<"\n ENTER MOBILE MODEL : ";
			cin>>model;
			
		}
		
		void dispaly()
		{
			cout<<"\n MOBILE ID : "<<mid;
			cout<<"\n MOBILE NAME : "<<name;
			cout<<"\n MOBILE MODEL : "<<model;
		}
		~mobile()
		{
			cout<<"\n\n I AM DESTRUCTOR ";
		}
};

int main()
{
	mobile m;
	m.dispaly();
	return 0;
}

/*
class product
{
	int pid;
	string pname;
	float price;
	
	public:
		product(int id,string name,float p)
		{
			pid=id;
			pname=name;
			price=p;
			cout<<"\n -------PARAMETERIZED CONSTRUCTOR-------\n";
			cout<<"\n PRODUCT ID : "<<pid;
			cout<<"\n PRODUCT NAME : "<<pname;
			cout<<"\n PRODUCT PRICE : "<<price;
		}
		
		product(product &x)
		{
			pid=x.pid;
			pname=x.pname;
			price=x.price;
			cout<<"\n\n --------COPY CONSTRUCTOR---------\n";
			cout<<"\n PRODUCT ID : "<<pid;
			cout<<"\n PRODUCT NAME : "<<pname;
			cout<<"\n PRODUCT PRICE : "<<price;
		}
		
		~product()
		{
			cout<<"\n\n --------DESTRUCTOR IS HERE----------- ";
		}
};

int main()
{
	product p(202,"iPhone",7299.90),p1(p);
	return 0;
	
}*/





















