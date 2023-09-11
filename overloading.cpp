#include<iostream>

using namespace std;
/*

class sample
{
   public:
   static int add(int a,int b)
   {
   	return a+b;
   }
   
   static int add(int a,int b,int c)
   {
   	return a+b+c;
   }
   
   static int add(double a,double b)
   {
     return a+b;   	
   }	
};

int main()
{
	sample s;
	cout<<"\n ADDITION(10+29)     : "<<s.add(10,29);
	cout<<"\n ADDITION(10.3+34.2) : "<<s.add(10.3,34.2);
	cout<<"\n ADDITION(45+56)     : "<<s.add(45,2,56);
	return 0;
}
*/

/*
float calculate(int r)
{
	return (3.14*r*r);
}

float calculate(int b, int h)
{
	return (b*h);
}

float calculate(float s)
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

//OPERATOR OVERLOADING
/*
class sample
{
	int x,y,z;
	public:
		void get(int a,int b,int c)
		{
			x=a;
			y=b;
			z=c;
		}
		
		void display()
		{
			cout<<"\n X : "<<x<<"\n Y : "<<y<<"\n Z : "<<z;
		}
		
		void operator +()
		{
			x=-x;
			y=-y;
			z=-z;
		}
};

int main()
{
	sample s;
	s.get(10,-29,-90);
	+s;
	s.display();
	return 0;
}
*/
/*
class count
{
	int a;
	public:
		count()
		{
			cout<<"\n ENTER VALUE OF A : ";
			cin>>a;
		}
		void operator ++()
		{
			a++; //++a;
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
class first
{
	int x;
	public:
		first(int i)
		{
			x=i;
		}
		void operator +(first);
		
};

void first::operator +(first f)
{
	int m;
	m=x+f.x; 
	cout<<"\n THE RESULTOF ADDITION OF TWO OBJECTS : "<<m;
}

int main()
{
	first f1(10);
	first f2(2);
	f1+f2;
	return 0;
}*/
/*

class sample
{
	int x=10;
	int y=20;
	int z=-30;
	public:
		void show()
		{
			cout<<"\n X : "<<x<<"\n Y : "<<y<<"\n Z : "<<z;
			cout<<"\n ";
		}
		void friend operator -(sample &a)
		{
			a.x=-a.x;
			a.y=-a.y;
			a.z=-a.z;
		}
};

int main()
{
	sample s;
	cout<<"\n BEFORE OVERLOADING : ";
	s.show();
	
	-s;
	cout<<"\n AFTER OVERLOADING : ";
	s.show();
	return 0;
	
}*/

//== overload comprasion operator
class product
{
	int price;
	public:
		void input()
		{
			cin >>price;
		}
		int operator ==(product &p)
		{
			if(price==p.price)
			{
				return 1;
			}
			else
			{
				return 0;
			}
		}
};

int main()
{
	product p1,p2;
	cout<<"\n ENTER PRICE OF P1 OBJECT : ";
	p1.input();
	cout<<"\n ENTER PRICE OF P2 OBJECT : ";
	p2.input();
	if(p1==p2)
	{
		cout<<"\n BOTH OBJECT HAVE SAME PRICE !	";
	}
	else
	{
		cout<<"\n BOTH OBJECT ARE UNEQUAL !	";
	}
	    
	return 0;
}




















