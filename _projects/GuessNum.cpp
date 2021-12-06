/*
=======Guess The Number =======

1. Greet the user and give him a choice to start the game
2. Generate a random number between 1 to 100
3. let user to guess the number
*/

#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    // a number to be guessed between 1 to 10
    int _num = rand() % 10 + 1;
    int initScore = 1000;

    bool isGameOn = true;
    cout << "\n=====Guess The Number=====\n";
    cout << "\nAny time you want to exit the game then press 69\n";
    while (isGameOn)
    {
        int userNum;
        cout << "Your Game Credit score left = " << initScore << "\n";
        cout << "Enter the prediction\n";
        cin >> userNum;
        if (userNum == _num)
        {
            cout << "Woo hoo You Won :)\n";
            cout << "Your correct Number is " << _num << "\n";
            cout << "Your score is " << initScore << "\n";
            break;
        }
        else if (abs(userNum - _num) > 20)
        {
            cout << "You  are not nearer :(\n";
        }
        if (userNum == 69)
        {
            cout << "Thanks for playing see you soon\n";
            break;
        }
        if (initScore < 0)
        {
            cout << "Nice But learn to predict \n";
            break;
        }
        initScore -= 10;
    }
}
