

#include <iostream>
#include <utility>
using namespace std;

int main()
{

    /*------First declare then init one by one---------*/
    pair<int, char> PAIR1;
    PAIR1.first = 10;
    PAIR1.second = 'A';
    cout << PAIR1.first << " ";
    cout << PAIR1.second << endl;

    /*-----Declaration and initialization together---------*/
    pair<string, double> PAIR2("Avinash", 9.56);
    cout << "First : " << PAIR2.first << " ";
    cout << "Second : " << PAIR2.second << endl;

    /*--------first declare and the use make_pair() to set values-----*/
    pair<int, int> PAIR3;
    PAIR3 = make_pair(10, 100);
    cout << "First : " << PAIR3.first << " ";
    cout << "Second : " << PAIR3.second << endl;
}

/*----------Output-----------
10 A
First : Avinash Second : 9.56
First : 10 Second : 100
----------------------------*/