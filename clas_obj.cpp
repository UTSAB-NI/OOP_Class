#include<iostream>
using namespace std;
class Operation{
public: 

double addition(double a,double b){
    return a+b;
}
double subtraction(double a,double b){
    return a-b;
}
double multiply(double a,double b){
    return a*b;
}
double division(double a,double b){
    return a/b;
}

};


int main(){
Operation obj1;
cout<<"Addition: "<<obj1.addition(4,5)<<endl;
cout<<"Subtraction: "<<obj1.subtraction(5,7)<<endl;
cout<<"Multiplication: "<<obj1.multiply(2,3)<<endl;
cout<<"Division: "<<obj1.division(10,3)<<endl;
return 0;
}