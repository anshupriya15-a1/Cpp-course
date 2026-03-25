#include<iostream>
using namespace std;
int c =45;
int main(){
    //int a , b ,c;
   // float d =34.4f;
    // cout<<"enter the value of a:"<<endl;
    // cin>>a;
    // cout<<"enter the value of b :"<<endl;
    // cin>>b;
    // c=a+b;
    // cout<<"enter value of sum is"<<c<<endl;
    // cout<<"the global c is "<<::c;
    //long double e = 34.4L;
    //literals
    // cout<<"the size of 34.4 is "<<sizeof(34.4)<<endl;
    // cout<<"the size of 34.4f is "<<sizeof(34.4f)<<endl;
    // cout<<"the size of 34.4F is "<<sizeof(34.4F)<<endl;
    // cout<<"the size of 34.4l is "<<sizeof(34.4l)<<endl;
    // cout<<"the size of 34.4L is "<<sizeof(34.4L)<<endl;
    // cout<<"the value of d is :" <<d<<endl<<"the value of e is: " <<e; 
    //reference variable
    float x= 455;
    float & y=x;
    cout<<x<<endl;
    cout<<y<<endl;
    
    //typecasting variable
    int a=45;
    float b=45.46;
    cout<<"value of a is: "<<(float)a<<endl;
    cout<<"value of a is: "<<float(a)<<endl;
    cout<<"value of b is: "<<(int)b<<endl;
    cout<<"value of a is: "<<int(b)<<endl;
    int c =int(b);
    cout<<"the expression is"<<a+b<<endl;
    cout<<"the expression is"<<a+int(b)<<endl;
    cout<<"the expression is"<<a+(int)b<<endl;


    return 0;
}
