#include<iostream>
#include<utility>
using namespace std;
/*----------Swap two pair----------*/
int main(){
pair<char, int >PAIR1('X',1);
pair<char, int> PAIR2('Y',2);

cout<<"before swaping"<<endl;
cout<<"PAIR1 : "<<PAIR1.first<<" "<<PAIR1.second<<endl;
cout<<"PAIR2 : "<<PAIR2.first<<" "<<PAIR2.second<<endl;
PAIR1.swap(PAIR2);
cout<<"After Swapping"<<endl;
cout<<"PAIR1 : "<<PAIR1.first<<" "<<PAIR1.second<<endl;
cout<<"PAIR2 : "<<PAIR2.first<<" "<<PAIR2.second<<endl;
}
/*
before swaping
PAIR1 : X 1
PAIR2 : Y 2
After Swapping
PAIR1 : Y 2
PAIR2 : X 1
*/