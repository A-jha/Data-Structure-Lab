// password encryption
//form name, gmail, password

#include <iostream>
#include <string.h>
using namespace std;
//encrypt
string encrypt(string password)
{
    //if character than conver it into it ascii value
    // digit ----> 1--->!, 2---->@, 3---->#,4---->$,5----%.....
    string enc = "";
    for (int i = 0; i < password.length(); i++)
    {
        switch (password[i])
        {
        case '1':
            enc += "!";
            break;
        case '2':
            enc += "@";
            break;
        case '3':
            enc += "#";
            break;
        case '4':
            enc += "$";
            break;
        case '5':
            enc += "%";
            break;
        case '6':
            enc += "^";
            break;
        case '7':
            enc = enc + "&";
            break;
        case '8':
            enc = enc + "*";
            break;
        case '9':
            enc = enc + "+";
            break;
        default:
            enc = enc + to_string(int(password[i]));
        }
    }
    return enc;
}

//validate email avi@gmail.com
//last 4 charecters .com
// it must contains @
bool validateEmail(string email)
{
    int conditionCount = 0;
    for (int i = 0; i < email.length(); i++)
    {
        if (email[i] == '@')
        {
            conditionCount++;
            break;
        }
    }
    //avi@gmail.com ----> a[3] = @
    int lengthOfEmail = email.length();
    if (email[lengthOfEmail - 4] == '.' && email[lengthOfEmail - 3] == 'c' && email[lengthOfEmail - 2] == 'o' && email[lengthOfEmail - 1] == 'm')
    {
        conditionCount++;
    }
    if (conditionCount == 2)
    {
        cout << "All good\n";
        return true;
    }
    else
    {
        cout << "email is invalid so user is not created\n";
        return false;
    }
}
//oops
class User
{
    //encapsulation
    string name;
    string mail;
    string password;
    string confirmPassword;
    //methods
public:
    void setName(string key)
    {
        name = key;
    }
    void setMail(string key)
    {
        mail = key;
    }
    void setPassword(string key)
    {
        password = key;
    }
    void setConfirmPassword(string key)
    {
        confirmPassword = key;
    }
    string getMail()
    {
        return mail;
    }
    string getName()
    {
        return name;
    }
    string getPassword()
    {
        return encrypt(password);
    }
    string getConfirmPassword()
    {
        return encrypt(password);
    }
    void createUser()
    {
        string temp;
        cout << "Enter Your name: ";
        cin >> temp;
        setName(temp);
        cout << "\nEnter Your email: ";
        cin >> temp;
        setMail(temp);

        cout << "\nEnter Password: ";
        cin >> temp;
        setPassword(temp);

        cout << "\n Confirm Password: ";
        cin >> temp;
        setConfirmPassword(temp);
    }
    void details()
    {
        if (getPassword() == getConfirmPassword() && validateEmail(getMail()))
        {
            cout << "Name of User:" << getName() << "\n";
            cout << "Email of user: " << getMail() << "\n";
            cout << "Password of User: " << getPassword() << "\n";
        }
        else
        {
            cout << "sorry password did not matched hence user not created";
        }
    }
};
int main()
{
    class User u1;
    u1.createUser();
    u1.details();
}