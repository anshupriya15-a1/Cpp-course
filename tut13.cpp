#include<iostream>
using namespace std;
int main(){
    //array example

    int marks[] = {23,45,89,67};

    int mathsmarks[4];
     mathsmarks[0]= 45;
     mathsmarks[1]=56;
     mathsmarks[2]=90;
     mathsmarks[3]=76;

     cout<<"these are maths marks "<<endl;
     cout<<mathsmarks[0]<<endl;
     cout<<mathsmarks[1]<<endl;
     cout<<mathsmarks[2]<<endl;
     cout<<mathsmarks[3]<<endl;
     
     //u can change the value of an array

     mathsmarks[2]=67;
     cout<<mathsmarks[2]<<endl;

     cout<<"these are marks"<<endl;
     cout<<marks[0]<<endl;
     cout<<marks[1]<<endl;
     cout<<marks[2]<<endl;
     cout<<marks[3]<<endl;

     // for loop
for (int i = 0; i < 4; i++) {
    cout << "the value of marks " << i << " is " << marks[i] << endl;
}

// while loop
int i = 0;
while (i < 4) {
    cout << "value of marks " << i << " is " << marks[i] << endl;
    i++;
}

// do-while loop
i = 0;
do {
    cout << "value of marks " << i << " is " << marks[i] << endl;
    i++;
} while (i < 4);


//pointers and arrays
int *p=marks;
cout<<*(p++)<<endl;
cout<<*(++p)<<endl;
cout<<"the value at *p "<<*p<<endl;
cout<<"the value at *(p+1) is"<<*(p+1)<<endl;
cout<<"the value at *(p+2) is"<<*(p+2)<<endl;
cout<<"the value at *(p+3) is"<<*(p+3)<<endl;

    return 0;
}