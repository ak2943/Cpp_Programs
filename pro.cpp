#include<iostream>
using namespace std;	 
class exam
{
	public:
	int ch,c,i,rollno,n,ans;
	string name,subject,dept;
	
		void resultofexam();
		
		static int count;
		
		int put()
		{
			cout<<"\n -------ONLINE EXAM MANAGEMENT SYSTEM -------";
			cout<<"\n DO YOU WANT TO GIVE EXAM : \n ENTER  1 TO START & O TO END ";
			cin>>c;
			do
			{
				
			cout<<"\n SELECT SUBJECT FOR EXAM : ";
			cout<<"\n 1.CPP \n 2.DATA STRUCTURE \n 3.C# \n 4.C PROGRAMMING \n 5.EXIT \n";
			cout<<"\n ENTER YOUR CHOICE : ";
			cin>>ch;
			switch(ch!=5)
			{
			  case 1: cout<<"\n START YOR CPP EXAM (TIME -1 hr)";
        			  cout<<"\n ENTER ROLL NO : ";
        			  cin>>rollno;
        	          cout<<"\n ENTER NAME : ";
        	          cin>>name;
        	          cout<<"\n ENTER DEPARTMENT : ";
        	          cin>>dept;
        	         	
		  	             if(c==1)
        	             {
        	 	           cout<<"\n EXAM STARTED TIME: 1 hr! ";
        	 	           cout<<"\n Q.1 C++ is object oriented Programming language(True/False) ";
        	               cout<<"\n 1.True \n 2.False \n ";
        	 	           cin>>ans;
        	 	           if(ans==1)
        	 	           {
        	 	 	           count++;
				           }
				          else
				          {
				 	        count=count+0;
				          }
				 
				          cout<<"\n Q.2 Which of the following is not a type of Inheritance ";
        	 	          cout<<"\n 1.Multiple \n 2.Abstract \n 3.Single \n 4.Hybrid \n ";
        	 	          cin>>ans;
        	 	          if(ans==2)
        	 	          {
        	 	 	        count++;
				          }
				           else
				          {
				 	       count=count+0;
				          }
				 
				          cout<<"\n Q.3 which block is used for Handling Exception. ";
        	 	          cout<<"\n 1.try & catch \n 2.try \n 3.catch \n 4.None \n";
        	 	          cin>>ans;
        	 	          if(ans==1)
        	 	          {
        	 	 	       count++;	
				          }
				          else
				          {
				 	        count=count+0;
				          }
				          
				          cout<<"\n Q.4 Identify tha correct extention of the user defined header file in c++.";
        	 	          cout<<"\n 1. .cpp \n 2. .hg \n 3. .h \n 4. .hf \n";
        	 	          cin>>ans;
        	 	          if(ans==3)
        	 	          {
        	 	 	       count++;	
				          }
				          else
				          {
				 	        count=count+0;
				          }
				          
				          cout<<"\n Q.5 Which of the following data type is supported in c++ but not in C.";
        	 	          cout<<"\n 1.int \n 2.bool \n 3.double \n 4.float \n";
        	 	          cin>>ans;
        	 	          if(ans==2)
        	 	          {
        	 	 	       count++;	
				          }
				          else
				          {
				 	        count=count+0;
				          }
				          resultofexam();
				          break;
		         }
		         
		         
		    case 2: cout<<"\n START YOR DATA STRUCTURE EXAM (TIME -1 hr)";
		            break;
		            
		    case 3: cout<<"\n START YOR C# EXAM (TIME -1 hr)";
		            break;
		            
		    case 4: cout<<"\n START YOR CPP EXAM (TIME -1 hr)";
		            break;
		            
		    case 5:cout<<"\n THANK YOU !";
			         exit(0);
		            
		    default : cout<<"\n WRONG CHOICE :(Enter valid Option)*";
		    
	       } 
		    
	   } while(c!=1);
	   
	}	
};

void exam::resultofexam()
			 {
			 	if(count>=2)
			 	{
			 		 cout<<"\n ROLL NO : "<<rollno;
			 		 cout<<"\n NAME : "<<name;
			 		 cout<<"\n DEPARTMENT : "<<dept;
			 		 cout<<"\n CHECK THE RESULT : ";
			         cout<<"\n PASS "<<"\n MARKS OBTAINED : "<<count;
			
				 }
				 else
				 {
				 	 cout<<"\n ROLL NO : "<<rollno;
			 		 cout<<"\n NAME : "<<name;
			 		 cout<<"\n DEPARTMENT : "<<dept;
			 		 cout<<"\n CHECK THE RESULT : ";
				 	 cout<<"\n FAIL "<<"\n MARKS OBTAINED : "<<count;
				 }
			 }
			 
int exam::count;

int main()
{
	exam e;
	e.put();
	return 0;
}

