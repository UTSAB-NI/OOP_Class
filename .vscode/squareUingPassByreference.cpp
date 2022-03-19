#include<iostream>
using namespace std;
 void square(int & x)
{
    x=x*x;
}
int main(){
    int a;
a=10;
cout<<"Value before change: "<<a;
square(a);
cout<<"value after change: "<<a;



}