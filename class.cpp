#include<iostream>
#include<string.h>
using namespace std;

class A
            {
                public:
                int a=10;
                  void showvalue()
                 {
                       cout<<"\n VALUE OF A : "<<a;
                 }
            };
            int main()
          {
               A Object1,Object2;
               Object1.showvalue();
               Object2.showvalue();
               return 0;
          }


                  
/*class stud
{
	int rollno;
	string name;
	float cgpa;
	
	public:
		void put()
		{
			cout<<"\n ENTER ROLL NO OF STUDENT: ";
			cin>>rollno;
			cout<<"\n ENTER NAME OF STUDENT: ";
			cin>>name;
			cout<<"\n ENTER CGPA OF STUDENT: ";
			cin>>cgpa;
		}
		void show()
		{
			cout<<"\n Roll NO: "<<rollno;
			cout<<"\n NAME: "<<name;
			cout<<"\n CGPA: "<<cgpa;
		}
};

int main()
{
	stud s;
	int i;
	for(i=1;i<6;i++)
	{
		cout<<"\n\n ENTER DATA FOR STUDENT "<<i;
		s.put();
		s.show();
	}
	return 0;
}*/


/*
class product
{
	int p_id;
	char pname[10];
	float price;
	
	public:
		void insert()
		{
			cout<<"\n\n ENTER PRODUCT DETAILS!";
			cout<<"\n ENTER PRODUCT ID: ";
			cin>>p_id;
			cout<<"\n ENTER PRODUCT NAME: ";
			cin>>pname;
			cout<<"\n ENTER PRODUCT PRICE: ";
			cin>>price;
		}
		
		void display()
		{
			cout<<"\n PRODUCT ID: "<<p_id;
			cout<<"\n PRODUCT NAME: "<<pname;
			cout<<"\n PRODUCT PRICE: "<<price;
			
		}
};

int main()
{
	product p;
	p.insert();
	p.display();
	return 0;
}
/*/
/*
class Triangle
{ 
    public:   
    float base,height;

};

int main()
{
	Triangle t;
	cout<<"\n\n ENTER BASE AND HEIGHT OF TRIANGLE: ";
   	cin>>t.base>>t.height;
	cout<<"\n AREA OF TRIANGLE : "<<(0.5*t.base*t.height);
	return 0;
}*/

/*
class book
{
	int b_id;
	string bname;
	string publn;
	float price;
	
	void put()
	{
		cout<<"\n\n ENTER DETAILS OF BOOK!";
		cout<<"\n ENTER BOOK ID: ";
		cin>>b_id;
		cout<<"\n ENTER BOOK NAME: ";
		cin>>bname;
		cout<<"\n ENTER BOOK PUBLICATION: ";
		cin>>publn;
		cout<<"\n ENTER PRICE OF BOOK: ";
		cin>>price;
	}
	
	void show()
	{
		cout<<"\n BOOK DETAILS ARE : ";
		cout<<"\n BOOK ID : "<<b_id;
		cout<<"\n BOOK NAME : "<<bname;
		cout<<"\n BOOK PUBLICATION : "<<publn;
		cout<<"\n BOOK PRICE : "<<price;
	}
	public:
	void display()
	{
	  put();
	  show();	
	}
};

int main()
{
	book b;
	b.display();
	return 0;
}*/

/*

class emp
{
  int emp_id;
  char name[20];
  string dept;
  public:
   void insert(int id,char n[],string d)
   {
   	  emp_id=id;
   	  strcpy(name,n);
   	  dept=d;
   }
   
   void display()
   {
   	cout<<"\n EMPLOYEE ID : "<<emp_id;
   	cout<<"\n ENPLOYEE NAME: "<<name;
   	cout<<"\n EMPLOYEE DEPARTMENT : "<<dept;
   }	
};

int main()
{
	emp e;
	e.insert(201,"JOHN","ELECTRICAL");
	e.display();
	return 0;
}*/

/*
#include<iostream>
using namespace std;
class stud
{
	public:
	int rollno;
	string name;
	string dept;
	float fees;
	
		stud()
		{
			cout<<"\n ENTER ROLLNO OF STUDENT : ";
			cin>>rollno;
			cout<<"\n ENTER NAME OF STUDENT : ";
			cin>>name;
			cout<<"\n ENTER DEAPRTMENT OF STUDENT : ";
			cin>>dept;
			cout<<"\n ENTER FEES OF STUDENT : ";
			cin>>fees;
			cout<<"\n -------------------------------\n";
		}
		
		void display()
		{
			cout<<"\n ROLL NO : "<<rollno;
			cout<<"\n NAME : "<<name;
			cout<<"\n DEPARTMENT : "<<dept;
			cout<<"\n FEES : "<<fees;
			cout<<"\n ------------------\n";
		}
};

int main()
{
   stud s[3];
   int ch,i,r;
   string n;
   float f;
   cout<<"\n 1.SEARCH_BY_NAME \n 2.SEARCH_BY_ROLLNO \n 3.SEARCH_BY_FEES \n 4.EXIT \n";
   do
   {
   	 cout<<"\n\n ENTER YOUR CHOICE : ";
   	 cin>>ch;
   	 switch(ch)
   	 {
   	 	case 1: 
   	 	        cout<<"\n ENTER NAME TO SRAECH : ";
   	 	        cin>>n;
   	 	        for(i=0;i<3;i++)
   	 	        {
   	 	          
   	 	          //if(strcmp(n,s[i].name))	
   	 	          if(n==s[i].name)
   	 	          {
   	 	          	n=s[i].name;
   	 	          	break;
				  }
				}
				
				for(i=0;i<3;i++)
				{
					if(n==s[i].name)
					{
						s[i].display();
					}
				}
				break;
				
		case 2: 
   	 	        cout<<"\n ENTER ROLLNO TO SRAECH : ";
   	 	        cin>>r;
   	 	        for(i=0;i<3;i++)
   	 	        {
   	 	      
   	 	          if(r==s[i].rollno)	
   	 	          {
   	 	          	r=s[i].rollno;
   	 	          	break;
				  }
				}
				
				for(i=0;i<3;i++)
				{
					if(r==s[i].rollno)
					{
						s[i].display();
					}
				}
				break;
				
		case 3: 
   	 	        cout<<"\n ENTER FEES TO SRAECH : ";
   	 	        cin>>f;
   	 	        for(i=0;i<3;i++)
   	 	        {
   	 	      
   	 	          if(f==s[i].fees)	
   	 	          {
   	 	          	f=s[i].fees;
   	 	          	break;
				  }
				}
				
				for(i=0;i<3;i++)
				{
					if(f==s[i].fees)
					{
						s[i].display();
					}
				}
				break;
				
		case 4:
		        cout<<"\n EXIT";
				exit(0);
				break;
				 		
		default: cout<<"\n WRONG CHOICE ! ";		         					
	 }
   	
   }while(ch!=4);
   	
  return 0;	
}

*/




