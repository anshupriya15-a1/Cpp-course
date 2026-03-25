//two types of header file 1.system header flle(comes with compiler) 
#include<iostream>
//2.user defined header file(written with programer)
//#include "this.h"  //this will show error if this is not present in current directory
using namespace std;
int main(){
    int a =4,b=5;
    cout<<"operators in c++: "<<endl;
    cout<<"following types of operators in c++"<<endl;
    //arithmetic operator
    cout<<"the value of a+b is:"<<a+b<<endl; 
    cout<<"the value of a+b is:"<<a-b<<endl;   
    cout<<"the value of a+b is:"<<a*b<<endl;    
    cout<<"the value of a+b is:"<<a/b<<endl;    
    cout<<"the value of a+b is:"<<a%b<<endl;   
    cout<<"the value of a+b is:"<<a++<<endl;
    cout<<"the value of a+b is:"<<a--<<endl;
    cout<<"the value of a+b is:"<<++a<<endl;    
    cout<<"the value of a+b is:"<<--a<<endl; 
    //assignment operators
    //int a = 3,b=9;
    //char b='d' ; 

    //comparison operator    
    cout<<"the value of a == b is "<<(a==b)<<endl;
    cout<<"the value of a > b is "<<(a>b)<<endl;
    cout<<"the value of a < b is "<<(a<b)<<endl;
    cout<<"the value of a >= b is "<<(a>=b)<<endl;
    cout<<"the value of a <= b is "<<(a<=b)<<endl;
    cout<<"the value of a != b is "<<(a!=b)<<endl;

    //logical operator
    cout<<"following are the logical operator in c++"<<endl;
    cout<<"value of logical and operator ((a==b) && (a<b)) is:"<<((a==b) && (a<b));
    cout<<"\nvalue of logical or operator ((a==b) || (a<b)) is:"<<((a==b) || (a<b));
     cout<<"\nvalue of logical not operator (!a==b) is:"<<(!(a==b))<<endl;
    return 0;
}