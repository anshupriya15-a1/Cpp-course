#include <iostream>
using namespace std;
class car{
    string brand;
    string name;
    int year;
};
void getSum(int a, int b ){
    int _sum = a + b;
    cout <<"the sum is :"<< _sum;
}
int main(){
    int studentage=20;
    double accountbalance = 2345.78;
    string studentname="karan";
    getSum(2,10);
    return 0;
}
