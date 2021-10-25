#include <iostream>
#include <string.h>
#include <vector>
using namespace std;
void success(int user1Flag, int user2Flag)
{
    if (user2Flag == 0)
    {
        user2Flag = 1;
        user1Flag = 0;
    }
    else
    {
        user1Flag = 1;
        user2Flag = 0;
    }
}
class User
{
public:
    string username;
    int totalWin;
    //contructor
    User()
    {
        totalWin = 0;
    }
};
User *user1 = new User();
User *user2 = new User();
/**
 * 1. Matrix = 3 x 3
 *  x  x  x
 *  0  0  0
 *  0  0  0
 * */

/**
 * Row:{00,01,02}, {10,11,12},{20,21,22}
 * Col: {00,10,20},{01,11,21},{02,21,22}
 * diagonal: {00,11,22},{02,11,20}
*/
bool isSolved(char matrix[3][3])
{
    //{00,01,02}
    if (matrix[0][0] == matrix[0][1] && matrix[0][1] == matrix[0][2])
    {
        if (matrix[0][0] == 'x' || matrix[0][0] == 'X')
        {
            cout << user1->username << " Won";
            user1->totalWin++;
        }
        else
        {
            cout << user2->username << " Won";
            user2->totalWin++;
        }
        return true;
    }
    //{10,11,12}
    else if (matrix[1][0] == matrix[1][1] && matrix[1][1] == matrix[1][2])
    {
        if (matrix[0][0] == 'x' || matrix[0][0] == 'X')
        {
            cout << user1->username << " Won";
            user1->totalWin++;
        }
        else
        {
            cout << user2->username << " Won";
            user2->totalWin++;
        }
        return true;
    }
    //{20,21,22}
    else if (matrix[2][0] == matrix[2][1] && matrix[2][1] == matrix[2][2])
    {
        if (matrix[0][0] == 'x' || matrix[0][0] == 'X')
        {
            cout << user1->username << " Won";
            user1->totalWin++;
        }
        else
        {
            cout << user2->username << " Won";
            user2->totalWin++;
        }
        return true;
    }
    //{00,10,20}
    else if (matrix[0][0] == matrix[1][0] && matrix[1][0] == matrix[2][0])
    {
        if (matrix[0][0] == 'x' || matrix[0][0] == 'X')
        {
            cout << user1->username << " Won";
            user1->totalWin++;
        }
        else
        {
            cout << user2->username << " Won";
            user2->totalWin++;
        }
        return true;
    }
    //{01,11,21}
    else if (matrix[0][1] == matrix[1][1] && matrix[1][1] == matrix[2][1])
    {
        if (matrix[0][0] == 'x' || matrix[0][0] == 'X')
        {
            cout << user1->username << " Won";
            user1->totalWin++;
        }
        else
        {
            cout << user2->username << " Won";
            user2->totalWin++;
        }
        return true;
    }
    //{02,21,22}
    else if (matrix[0][2] == matrix[2][1] && matrix[2][1] == matrix[2][2])
    {
        if (matrix[0][0] == 'x' || matrix[0][0] == 'X')
        {
            cout << user1->username << " Won";
            user1->totalWin++;
        }
        else
        {
            cout << user2->username << " Won";
            user2->totalWin++;
        }
        return true;
    }
    //{00,11,22}
    else if (matrix[0][0] == matrix[1][1] && matrix[1][1] == matrix[2][2])
    {
        if (matrix[0][0] == 'x' || matrix[0][0] == 'X')
        {
            cout << user1->username << " Won";
            user1->totalWin++;
        }
        else
        {
            cout << user2->username << " Won";
            user2->totalWin++;
        }
        return true;
    }
    //{02,11,20}
    else if (matrix[0][2] == matrix[1][1] && matrix[1][1] == matrix[2][0])
    {
        if (matrix[0][0] == 'x' || matrix[0][0] == 'X')
        {
            cout << user1->username << " Won";
            user1->totalWin++;
        }
        else
        {
            cout << user2->username << " Won";
            user2->totalWin++;
        }
        return true;
    }
    return false;
}

void choice()
{
    cout << "Please choose Your input\n";
    cout << "press 1 form 00 index\npress 2 form 01 index\npress 3 form 02 index\n";
    cout << "press 4 form 10 index\npress 5 form 11 index\npress 6 form 12 index\n";
    cout << "press 7 form 20 index\npress 8 form 21 index\npress 9 form 22 index\n";
    cout << "press 10 to exit the game\n";
}

int main()
{

    bool enter = true;
    while (enter)
    {
        cout << "To Exit the program enter 0\npress 1 to contine\n";
        int temp;
        cin >> temp;
        char matrix[3][3];
        if (temp == 0)
        {
            enter = false;
        }

        cout << "Please enter 1st User\n";
        string name;
        cin >> name;
        user1->username = name;

        cout << "Please enter 2nd User\n";
        cin >> name;
        user2->username = name;

        // flag
        int user1Flag = 1;
        int user2Flag = 0;
        bool exit = false;
        vector<int> lookUp;
        char marker; //x , O
        string currentUser;

        while (!exit)
        {
            choice();
            if (user1Flag == 1)
            {
                marker = 'x';
                currentUser = user1->username;
                cout << currentUser << "'s Turn:";
            }
            else if (user2Flag == 1)
            {
                marker = 'O';
                currentUser = user2->username;
                cout << currentUser << "'s Turn:";
            }

            int input;
            cin >> input;
            for (int i = 0; i < lookUp.size(); i++)
            {
                if (lookUp[i] == input)
                {
                    cout << "Sorry This box is already filled\n";
                }
                continue;
            }
            switch (input)
            {
            case 1:
                lookUp.push_back(1);
                if (user1Flag == 1)
                {
                    matrix[0][0] = 'x';
                }
                else
                {
                    matrix[0][0] = 'o';
                }
                isSolved(matrix);
                break;
            case 2:
                lookUp.push_back(2);
                if (user1Flag == 1)
                {
                    matrix[0][1] = 'x';
                }
                else
                {
                    matrix[0][1] = 'o';
                }
                isSolved(matrix);
                break;
            case 3:
                lookUp.push_back(3);
                if (user1Flag == 1)
                {
                    matrix[0][2] = 'x';
                }
                else
                {
                    matrix[0][2] = 'o';
                }
                isSolved(matrix);
                break;
            case 4:
                lookUp.push_back(4);
                if (user1Flag == 1)
                {
                    matrix[1][0] = 'x';
                }
                else
                {
                    matrix[1][0] = 'o';
                }
                isSolved(matrix);
                break;
            case 5:
                lookUp.push_back(5);
                if (user1Flag == 1)
                {
                    matrix[1][1] = 'x';
                }
                else
                {
                    matrix[1][1] = 'o';
                }
                isSolved(matrix);
                break;
            case 6:
                lookUp.push_back(6);
                if (user1Flag == 1)
                {
                    matrix[1][2] = 'x';
                }
                else
                {
                    matrix[1][2] = 'o';
                }
                isSolved(matrix);
                break;
            case 7:
                lookUp.push_back(7);
                if (user1Flag == 1)
                {
                    matrix[2][0] = 'x';
                }
                else
                {
                    matrix[2][0] = 'o';
                }
                isSolved(matrix);
                break;
            case 8:
                lookUp.push_back(8);
                if (user1Flag == 1)
                {
                    matrix[2][1] = 'x';
                }
                else
                {
                    matrix[2][1] = 'o';
                }
                isSolved(matrix);
                break;
            case 9:
                lookUp.push_back(9);
                if (user1Flag == 1)
                {
                    matrix[2][2] = 'x';
                }
                else
                {
                    matrix[2][2] = 'o';
                }
                isSolved(matrix);
                break;
            case 10:
                cout << "exiting\n";
                exit = true;
                break;
            default:
                cout << "Wrong input \n";
            }
        }
    }
}
