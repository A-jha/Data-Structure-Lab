#include<iostream>
#include<string>
using namespace std;

int main(){
//declaration of string
 string f("Hello World");
 //print string
 cout<<"String f :"<<f<<endl;
 //length of string
 cout<< "String length : "<<f.length()<<endl;
//append to string
cout<<"String : "<<f.append("24x7")<<endl;
cout<<f<<endl;
 //substring
 cout<<"Substring : "<<f.substr(5,9)<<endl;
 cout<<f<<endl;
 //assign  string
 cout<<"changed string : "<<f.assign("gello")<<endl;
cout<<f<<endl;
 //insert to string
 cout<<"new string after insertion :" <<f.insert(1,"bye ")<<endl;
 cout<<f<<endl;
}
