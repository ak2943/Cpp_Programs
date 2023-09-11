#include <iostream>
#include <string.h>
#include<stdlib.h>
#include<fstream>

using namespace std;

char guess;
int total;

class student
{
 char roll[10];
 char name[30];
 char address[30];
 char contactno[10];
 char Class[20];
 public:
  student(){}
  void getdata();
  void display();
};

void student::getdata()
{
 system("COLOR AC");
 cout<<"\nEnter roll no.:";
 cin>>roll;
 cin.ignore();
 cout<<"\nEnter name:";
 cin.getline(name,30);
 cout<<"\nEnter address:";
 cin>>address;
 cout<<"\nEnter contact no:";
 cin>>contactno;
 cout<<"\nEnter Class:";
 cin>>Class;
}

void student::display()
{
 std::cout<<"\n---------------------------------------------------------------------------------\n";
 std::cout<<"\nRoll no      ::"<<roll;
 std::cout<<"\nName         ::"<<name;
 std::cout<<"\nAddress      ::"<<address;
 std::cout<<"\nContact No   ::"<<contactno;
 std::cout<<"\nClass        ::"<<Class;
 std::cout<<"\n----------------------------------------------------------------------------------\n";
}

class result
{
  public:
   getresult()
   {
       if(total>=90)
        cout<<"FIRST CLASS\n"<<"GRADE IS 'S'\n";
       else if(total>=80 && total<90)
        cout<<"SECOND CLASS\n"<<"GRADE IS 'A'\n";

   }
};

class Question:public result{
public:
    void setValues(string, string, string, string, string, char, int);
    void askQuestion();

private:
    std::string Question_Text;
    std::string answer_1;
    std::string answer_2;
    std::string answer_3;
    std::string answer_4;

    char correct_answer;
    int Question_Score;
};



int main()
{

    char str1[50]="#sgmcse"; char str2[50];
    system("COLOR EC");
    cout<<"WELCOME TO ONLINE EXAMINATION..........\n\n";
    cout<<"LOGIN MODULE\n\n";
    cout<<"\nEnter your login identity\n\n";
    cin>>str2;
    if(strcmp(str1,str2)==0)
    {
     cout<<"Login Successfull\n\n";
    }
    else{


        cout<<"Login failed\n";
        exit(0);}


    student s[1];
    fstream file;
    int i;
    file.open("E:\final project\\file4.txt",ios::out);
    cout<<"\nSTUDENT REGISTRATION\n\n"<<endl;
    cout<<"\nEnter student details\n\n "<<endl;
    for(i=0;i<1;i++)
    {
     s[i].getdata();
     file.write((char*)&s[i],sizeof(s[i]));
    }
    file.close();

    cout << "Press enter to start...\n";
    cin.get();



    string respond;
    system("COLOR E2");
    cout<<"\nEXAM MODULE\n\n";
    cout << "Are you ready to start the quiz, "  << "? Yes/No.\n";
    cin >> respond;


    if (respond == "Yes" || respond == "yes") {
        cout << "\n";
        cout<<"---------------------------------------------------------------------\n\n";
        cout<<"INSTRUCTIONS...........\n\n";
        cout<<"Total Questions = 25\n\n";
        cout<<"Enter the right option to answer\n\n";
        cout<<"Total Marks = 100\n\n";
        cout<<"Mark  90 and above , First Class and grade S\n\n";
        cout<<"Mark  above 80 and below 90 , Second Class and grade A\n\n";
        cout<<"Mark less than 60 , Fail\n\n";
        cout << "Good luck!\n";
        cout<<"----------------------------------------------------------------------\n\n";
        cout << "\n";
        cout << "Press enter to continue.";
        cin.get();
        cin.ignore();
    }
	else
	{
        cout << "\n";
        cout << "Goodbye!\n";
        cin.ignore();
        cin.get();
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
    Question  q11;
    Question  q12;
    Question  q13;
    Question  q14;
    Question  q15;
    Question  q16;
    Question  q17;
    Question  q18;
    Question  q19;
    Question  q20;
    Question  q21;
    Question  q22;
    Question  q23;
    Question  q24;
    Question  q25;

    Question  res;


    q1.setValues("1. What command prints something to the screen?",
        "cin",
        "cout",
        "char",
        "print",
        'b',
        4);

    q2.setValues("2. Which of the following categories does C++ belong to?",
        "Operating System",
        "High-level programming language",
        "low-level programming language",
        "Compiler",
        'b',
        4);

    q3.setValues("3. Which command is correctly written?",
        "cout >>",
        "cin <<",
        "cout <>",
        "cin >>",
        'd',
        4);

    q4.setValues("4. What is this called, <iostream>?",
        "directive",
        "pre-processor directive",
        "file",
        "command",
        'b',
        4);

    q5.setValues("5. What punctuation ends most lines of code?",
        " . ",
        " ; ",
        " : ",
        " ' ",
        'b',
        4);

    q6.setValues("6. Which of the following is a correct comment?",
        "*/ Comments */",
        "** Comment **",
        "/* Comment */",
        "{ Comment }",
        'c',
        4);

    q7.setValues("7. Which of the following is the boolean operator for logical-and?",
        "&",
        "|",
        "&&",
        "|&",
        'c',
        4);

    q8.setValues("8. Which of the following shows the correct syntax for an if statement?",
        "if expression",
        "if {expression",
        "if (expression)",
        "expression if",
        'c',
        4);

    q9.setValues("9. How many times is a do while loop guaranteed to loop?",
        "1",
        "0",
        "Infinitely",
        "Variable",
        'a',
        4);

    q10.setValues("10. A subscipt is a(n) __________ .",
        "element in an array",
        "alternate name for an array",
        "number that represents the highest value stored within an array",
        "number that indicates the position of the particular item in an array",
        'd',
        4);

    q11.setValues("11. Which of the following correctly declares an array?",
        "int anarray[10];",
        "int anarray",
        "anarray{10};",
        "array anarray[10];",
        'a',
        4);

    q12.setValues("12. What is the index number of the last element of an array with 29 elements?",
        "29",
        "28",
        "0",
        "Programmer-defined",
        'b',
        4);

    q13.setValues("13. Which is not a loop structure?",
        "for",
        "do while",
        "while",
        "repeat until",
        'd',
        4);

    q14.setValues("14. When does the code block following while(x < 100) execute?",
        "When x is less than one hundred",
        "When x is greater than one hundred",
        "When x is equal to one hundred",
        "While it wishes",
        'a',
        4);

    q15.setValues("15. Most programmers use a for loop __________ .",
        "for every loop they write",
        "when a loop will not repeat",
        "when they do not know the exact number of times a loop will repeat",
        "when they know the exact number of times a loop will repeat",
        'd',
        4);

    q16.setValues("16. Adding 1 to a  variable is also called __________ it.",
        "digesting",
        "incrementing",
        "decrementing",
        "resetting",
        'b',
        4);

    q17.setValues("17. What is required to avoid falling through from one case to the next?",
        "end;",
        "break;",
        "Stop;",
        "A semicolon",
        'b',
        4);

    q18.setValues("18. A __________ is a variable that you set to indicate whether some event has occured.",
        "subscript",
        "banner",
        "counter",
        "flag",
        'd',
        4);

    q19.setValues("19. Identify the C++ compiler of Linux.",
        "cpp",
        "g++",
        "Borland",
        "vc++",
        'b',
        4);

    q20.setValues("20. What is the size of 'int'? ",
        "2",
        "4",
        "8",
        "Compiler dependent",
        'd',
        4);

    q21.setValues("21. Which data type can be used to hold a wide character in C++?",
        "unsigned char;",
        "int",
        "wchar",
        "none of the above.",
        'c',
        4);

    q22.setValues("22. C++ does not support the following",
        "Multilevel inheritance",
        "Hierarchical inheritance",
        "Hybrid inheritance",
        "None of the above.",
        'd',
        4);

    q23.setValues("23. Which is not a protection level provided by classes in C++?",
        "protected",
        "hidden",
        "private",
        "public",
        'b',
        4);

    q24.setValues("24. What purpose do classes serve?",
        "data encapsulation",
        "providing a convenient way of modeling real-world objects",
        "simplifying code reuse",
        "all of the above",
        'd',
        4);

    q25.setValues("25. Who developed the C++ language?",
        "Steve Jobs",
        "Linus Torvalds",
        "Bill Gates",
        "Bjarne Stroustrup",
        'd',
        4);


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
    q11.askQuestion();
    q12.askQuestion();
    q13.askQuestion();
    q14.askQuestion();
    q15.askQuestion();
    q16.askQuestion();
    q17.askQuestion();
    q18.askQuestion();
    q19.askQuestion();
    q20.askQuestion();
    q21.askQuestion();
    q22.askQuestion();
    q23.askQuestion();
    q24.askQuestion();
    q25.askQuestion();

    fopen("file4.txt","w+");
    system("COLOR 80");
    cout<<"\nStudent Details\n"<<endl;
    for(i=0;i<1;i++)
    {
     file.read((char*)&s[i],sizeof(s[i]));
     s[i].display();
    }
    fclose();


    cout<<"RESULT MODULE\n\n";
    cout<<"\nRESULT....\n"<<endl;
    cout << "Your Total Score is " << total << " out of 100!\n";
    cout << "\n";


    res.getresult();

    if (total > 69) {

        cout << "\n";
        cin.get();
        cin.ignore();
        return 0;
    }
    else
    {
        cout << "You failed... Sorry, better luck next time.\n";
        cout << "\n";
    }
    cin.get();
    cin.ignore();

    return 0;
}

void Question::setValues(std::string q, std::string a1, std::string a2, std::string a3, std::string a4, char ca, int pa)
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
    std::cout << "\n";
    std::cout << Question_Text << "\n";
    std::cout << "a. " << answer_1 << "\n";
    std::cout << "b. " << answer_2 << "\n";
    std::cout << "c. " << answer_3 << "\n";
    std::cout << "d. " << answer_4 << "\n";
    std::cout << "\n";


    std::cout << "What is your answer?" << "\n";
    std::cin >> guess;

    if (guess == correct_answer) {
        std::cout << "\n";
        //std::cout << "Correct!" << "\n";
        total = total + Question_Score;
        std::cout << "\n";
        std::cout << "Press enter to continue." << "\n";
        std::cin.get();
        std::cin.ignore();
    }
    else

    {
        std::cout << "\n";
        std::cout << "Press enter to continue." << "\n";
        std::cin.get();
        std::cin.ignore();
    }
}
