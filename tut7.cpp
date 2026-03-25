#include<iostream>
#include<iomanip>
using namespace std;
int main(){
    // int a =34;
    // cout<<"the value of a was"<<a;
    // a=45;
    // cout<<"the value of a is:"<<a;

    //constants in c++
    //  const int a =3;
    //  cout<<"the value of a was:" <<a<<endl;
    //  a=45;//getting an error because a is constant
    //  cout<<"the value of a is :"<<a<<endl;

    //  int a =3,b=78,c=33;
    //  cout<<"value of a is:"<<a<<endl;
    //  cout<<"value of b is:"<<b<<endl;
    //  cout<<"value of c is:"<<c<<endl;
    //  //manipulator
    //  cout<<"value of a is without setw is: "<<a<<endl;
    //  cout<<"value of b is without setw is: "<<b<<endl;
    //  cout<<"value of c is without setw is: "<<c<<endl;

    //  cout<<"value of a is: "<<setw(4)<<a<<endl;
    //  cout<<"value of b is: "<<setw(4)<<b<<endl;
    //  cout<<"value of c is: "<<setw(4)<<c<<endl;

     //operator precedence
     int a =3, b=4;
     //int c =(a*5)+b;
     int c = ((((a*5)+b)-45)+87);
     cout<<c;

    return 0;
}