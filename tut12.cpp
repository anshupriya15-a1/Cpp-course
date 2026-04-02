#include<iostream>
using namespace std;
int main(){
int a =3;
int *b=&a;
//&-->(address of) operator
cout<<"the addresss of a is " << &a<<endl;
cout<<"the address of b is "<<b<<endl;

//*--> value at (derefrence) operator
cout<<"the value at address b is"<<*b<<endl;

//pointer to pointer
int **c=&b;
cout<<"the address of b is "<<&b<<endl;
cout<<"the address of b is "<<c<<endl;
cout<<"the value at address c is "<<*c<<endl;
cout<<"the value at address valuea_at(value_at(c)) "<<**c<<endl;


    return 0;
}