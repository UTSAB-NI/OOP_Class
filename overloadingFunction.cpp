#include<iostream>
using namespace std;

void display(int var1,double var2){
cout<<"Integer number:"<<var1<<"\t";
cout<<"double number:"<<var2<<endl;


}

void display(double var){
cout<<"Double number:"<<var<<endl;
}

void display(int var){
cout<<"Integer number:"<<var<<endl;

}

int main(){

int a;
double b;
cout<<"Enter value of Integer a:"<<endl;
cin>>a;
cout<<"Enter value of Double b:"<<endl;
cin>>b;

display(a);
display(b);
display(a,b);
display(10.5,32);
return 0;

}
