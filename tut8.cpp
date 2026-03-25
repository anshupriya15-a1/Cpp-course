#include<iostream>
using namespace std;
int main(){
    int age;
    cout<<"tell me your age"<<endl;
    cin>>age;
    //selection control structure:if-else ladder
    // if((age<18) && (age>0)){
    //     cout<<"u can't come to the party"<<endl;
    // }
    // else if(age==18){
    //     cout<<"u r a kid and u will get kid pass"<<endl;
    // }
    // else if(age<1){
    //     cout<<"u r not yet born"<<endl;
    // }
    // else{
    //     cout<<"u can come to the party"<<endl;
    // }
    //selection control structure:switch case statement
    switch(age)
    {
        case 18:
        cout<<"you are 18"<<endl;
        //break;
        case 22:
        cout<<"you are 22"<<endl;
       // break;
        case 2:
        cout<<"you are 2"<<endl;
        //break;
     default:
     cout<<"no special cases"<<endl;
     break;
    }
    return 0;
}