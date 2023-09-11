#include <iostream>
#include <string.h>
#include<stdlib.h>
#include<mysql.h>  ///THIS LIBRARYS WHERE ADDED BY INCLUUDING FOLDERS TO PROJECT OPTIONS
#include<mysqld_error.h>

char HOST[]="localhost";
char USER[]="root";
char PASS[]="alisha@123";

using namespace std;
char guess;
static int total;

class student
{
	public:
   char roll[10];
   char name[30];
   char address[30];
   char contactno[10];
   string Class;
   student(){}
    void getdata();
    void display();
};

void student::getdata()
{
 system("COLOR AC");
 cout<<"\n Enter roll no.:";
 cin>>roll;
 cin.ignore();
 cout<<"\n Enter name:";
 cin.getline(name,30);
 cout<<"\n Enter address:";
 cin>>address;
 cout<<"\n Enter contact no:";
 cin>>contactno;
 cout<<"\n Enter Class :";
 cin>>Class;
}

void student::display()
{
 cout<<"\n---------------------------------------------------------------------------------\n";
 cout<<"\n Roll no      ::"<<roll;
 cout<<"\n Name         ::"<<name;
 cout<<"\n Address      ::"<<address;
 cout<<"\n Contact No   ::"<<contactno;
 cout<<"\n Class        ::"<<Class;
 cout<<"\n----------------------------------------------------------------------------------\n";
}


class result
{
  public:
   getresult()
   {
       if(total>4)
       {
       	cout<<"\n PASS!";
	   }
        
       else
       {
       	system("COLOR B");
       	cout<<"\n FAIL!\n";
	   }
       
   }
};

class Question:public result{
public:
    void setValues(string,string,string,string,string, char, int);
    void askQuestion();

private:
    string Question_Text;
    string answer_1;
    string answer_2;
    string answer_3;
    string answer_4;

    char correct_answer;
    int Question_Score;
};

void Question::setValues(string q,string a1,string a2,string a3,string a4, char ca, int pa)
{
    Question_Text = q;
    answer_1 = a1;
    answer_2 = a2;
    answer_3 = a3;
    answer_4 = a4;
    correct_answer = ca;
    Question_Score = pa;
}

void Question::askQuestion()
{
    cout << "\n";
    cout << Question_Text << "\n";
    cout << "\n a. " << answer_1;
    cout << "\n b. " << answer_2;
    cout << "\n c. " << answer_3;
    cout << "\n d. " << answer_4;
    cout << "\n";

    cout << "What is your answer?" << "\n";
    cin >> guess;

    if (guess == correct_answer) 
	{
        cout << "\n";
        total = total + Question_Score;
        cout << "\n";
    }

}

int main()
{
	MYSQL* obj;   
    student s;
    Question  res;
    
    bool ProgramIsOpened=true;
	int answer;
	char* consult;
	char* sentence;
	string sentence_aux;
	
	if(!(obj=mysql_init(0)))
  {
     cout<<"\n ERROR : MySQL OBJECT COULD NOT BE CREATED "; 	
  }	
  else
  {
  	if(!mysql_real_connect(obj,HOST,USER,PASS,"school",3306,NULL,0))
  	{
       cout<<"\n ERROR: SOME DATABASE INFO IS WRONG OR DO NOT EXIST";
       cout<<mysql_error(obj)<<endl;
    }
    else
    {
    char str1[50]="#sgmcse"; 
	char str2[50];
    system("COLOR EC");
    cout<<"\n WELCOME TO ONLINE EXAMINATION..........\n\n";
    cout<<"\n LOGIN MODULE\n\n";
    cout<<"\n Enter your login identity\n\n";
    cin>>str2;
    if(strcmp(str1,str2)==0)
    {
     cout<<"\n Login Successfull\n\n";
    }
    else
	   {
        cout<<"\n Login failed\n";
        exit(0);
		}

    string respond;
    system("\n COLOR E2");
    cout<<"\n EXAM MODULE\n\n";
    cout << "\n Are you ready to start the quiz, "  << "\n ? Yes/No.\n";
    cin >> respond;


    if (respond == "Yes" || respond == "yes") 
	{
        cout << "\n";
        cout<<"---------------------------------------------------------------------\n\n";
        cout<<"\nINSTRUCTIONS...........\n\n";
        cout<<"\n---- Total Questions = 10 :: TOTAL MARKS 10 ----\n\n";
        cout<<"\n--- #Marks greater than 6 Pass  #Mark less than 5 Fail ---\n\n";
        cout<<"----------------------------------------------------------------------\n\n";  
        s.getdata();
    }
	else
	{
        cout << "\n";
        cout << "Goodbye!\n";
        return 0;
    }

    Question  q1;
    Question  q2;
    Question  q3;
    Question  q4;
    Question  q5;
    Question  q6;
    Question  q7;
    Question  q8;
    Question  q9;
    Question  q10;

    q1.setValues("1. What command prints something to the screen?",
        "cin",
        "cout",
        "char",
        "print",
        'b',
        1);

    q2.setValues("2. Which of the following categories does C++ belong to?",
        "Operating System",
        "High-level programming language",
        "low-level programming language",
        "Compiler",
        'b',
        1);

    q3.setValues("3. Which command is correctly written?",
        "cout >>",
        "cin <<",
        "cout <>",
        "cin >>",
        'd',
        1);

    q4.setValues("4. What is this called, <iostream>?",
        "directive",
        "pre-processor directive",
        "file",
        "command",
        'b',
        1);

    q5.setValues("5. What punctuation ends most lines of code?",
        " . ",
        " ; ",
        " : ",
        " ' ",
        'b',
        1);

    q6.setValues("6. Which of the following is a correct comment?",
        " /Comments *",
        "** Comment **",
        "/* Comment *",
        "{ Comment }",
        'c',
        1);

    q7.setValues("7. Which of the following is the boolean operator for logical-and?",
        "&",
        "|",
        "&&",
        "|&",
        'c',
        1);

    q8.setValues("8. Which of the following shows the correct syntax for an if statement?",
        "if expression",
        "if {expression",
        "if (expression)",
        "expression if",
        'c',
        1);

    q9.setValues("9. How many times is a do while loop guaranteed to loop?",
        "1",
        "0",
        "Infinitely",
        "Variable",
        'a',
        1);

    
    q10.setValues("10. Who developed the C++ language?",
        "Steve Jobs",
        "Linus Torvalds",
        "Bill Gates",
        "Bjarne Stroustrup",
        'd',
        1);


    q1.askQuestion();
    q2.askQuestion();
    q3.askQuestion();
    q4.askQuestion();
    q5.askQuestion();
    q6.askQuestion();
    q7.askQuestion();
    q8.askQuestion();
    q9.askQuestion();
    q10.askQuestion();


    cout<<"\n----------------------------------------------------------------------------------\n";
    cout<<"\n RESULT MODULE\n\n";
    cout<<"\n RESULT....\n"<<endl;
    cout << " Your Total Score is " << total << " out of 10!\n";
    res.getresult();
    s.display();
    	
    	while(ProgramIsOpened)
    	{
    		cout<<"\n ROLL NO : ";
    		cin>>roll;
    		cin.ignore(100,'\n');
    		
    		cout<<"\n NAME : ";
    		cin.getline(name,20,'\n');
    		
    		cout<<"\n ADDRESS : ";
    		cin.getline(address,20,'\n');
    		
    		cout<<"\n CONTACTNO : ";
    		cin>>contactno;
    		cin.ignore(100,'\n');
    		
    		cout<<"\n CLASS : ";
    		cin.getline(Class,20,'\n');
    		
    		cout<<"\n TOTAL : ";
    		cin>>total;
    		cin.ignore(100,'\n');
    		
    		cout<<endl;
    		
    		//setting our update
    		sentence_aux="INSERT INTO exam(roll, name, address, contactno,Class,total) VALUES('%d','%s','%s','%d','%s','%d')";
    		sentence=new char[sentence_aux.length()+1];
    		strcpy(sentence,sentence_aux.c_str());  //copy string statements into a *char
    		
    		consult=new char[strlen(sentence)+sizeof(int)+strlen(name)+strlen(address)+sizeof(int)+strlen(Class)+sizeof(int)];
    		sprintf(consult,sentence,roll,name,address,contactno,Class,total); //substitu %d for actual values
    		
    		//make our attempt
    		
    		if(mysql_ping(obj))
            {
               cout<<"\n ERROR: IMPOSSIBLE TO CONNECT ";
			   cout<<mysql_error(obj)<<endl;
			}    		
			
			if(mysql_query(obj,consult))
			{
				cout<<"\n ERROR: "<<mysql_error(obj);
				rewind(stdin);
				getchar();
			}
			else
			{
				cout<<"\n INFO ADDED CORRECTLY! ";
				
			}
	
		
		  	ProgramIsOpened=false;
    		
    	    cout<<endl;	
		}
	}
  }
    return 0;
}



