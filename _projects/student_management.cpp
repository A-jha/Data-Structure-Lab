#include <iostream>
#include <string.h>
using namespace std;

//greeting
void greet()
{
    cout << "Press 1: Add New Student\n";
    cout << "Press 2: Add New Teacher\n";
    cout << "Press 3: Rate teacher\n";
    cout << "Press 4: Get Student detais\n";
    cout << "Press 5: Get Teacher details\n";
    cout << "Press 0: To Exit\n";
}

class Student
{
    //private data used for encapsulation and abstraction
    int roll;
    string name;
    string hostel;
    string password;

public:
    //method ---> member functions can acces provate variables
    void setDetais(string user)
    {
        if (user == "s")
        {
            cout << "Sorry you are not allowed to update student data\n";
            return;
        }
        else if (user == "t")
        {
            cout << "Please enter roll no:\n";
            cin >> roll;
            cout << "Now enter name of student\n";
            cin >> name;
            cout << "Enter student's hostel name\n";
            cin >> hostel;
            cout << "enter student password\n";
            cin >> password;
            cout << "Student created successfully\n";
        }
        else
        {
            cout << "Unauthenticated user key:)\n";
        }
    }
    void getDetais()
    {
        cout << "-----Here is " << name << "'s detais-----\n";
        cout << "Roll: " << roll << "\n";
        cout << "Hostel: " << hostel << "\n";
    }
};

class Teacher
{
    //private
    string name;
    string subject;
    int exp;
    int rating;
    class Student *ptr;

public:
    void setDetais()
    {
        cout << "enter name of teacher\n";
        cin >> name;
        cout << "Enter subject: \n";
        cin >> subject;
        cout << "Enter experience: \n";
        cin >> exp;
        rating = 0;
    }
    void getDetais()
    {
        cout << "---Here is detais of Mr/Mrs " << name << "\n";
        cout << "Subject: " << subject << "\n";
        cout << "Exp: " << exp << "\n";
        cout << "Rating: " << rating << "\n";
    }
    void setRating(string user)
    {
        if (user == "s")
        {
            rating += 1;
        }
        else
        {
            cout << "sorry You are not student\n";
        }
    }
    void setStudent(Student *s)
    {
        ptr = s;
    }
};

int main()
{
    //teacher
    Teacher *teacher = new Teacher[5];
    Student *student = new Student[10];
    int studentIndex = 0;
    int teacherIndex = 0;
    int on = 1;
    int index = 0;
    string user;
    while (on)
    {
        greet();
        int ch;
        cin >> ch;
        switch (ch)
        {
        case 1:
            if (studentIndex <= 9)
            {
                cout << "Please enter\n s for student\nt for teacher\n";
                cin >> user;
                student[studentIndex].setDetais(user);
                studentIndex++;
            }
            else
            {
                cout << "All slots are full\n";
            }
            break;
        case 2:
            cout << "Please enter user id:\n";
            cin >> user;
            if (user == "hod" && teacherIndex <= 4)
            {
                teacher[teacherIndex].setDetais();
                teacherIndex++;
            }
            break;
        case 3:
            cout << "Please enter user id string:\n";
            cin >> user;
            cout << "please enter teacher index\n";
            cin >> index;
            teacher[index].setRating(user);
            break;
        case 4:
            cout << "Please Enter the index no\n";
            cin >> index;
            student[index].getDetais();
            break;
        case 5:
            cout << "Please Enter the index no\n";
            cin >> index;
            teacher[index].getDetais();
            break;
        case 0:
            cout << "Thanks for visiting :)\n";
            on = 0;
            break;
        default:
            cout << "Invalid option choosen:(\n";
        }
    }
}
