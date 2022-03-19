#include<iostream>
using namespace std;

class student{

public:
int age,fees;
void displayage(){
cout<<"My age is: "<<age;

}
void displayfees(){
cout<<"Fees is "<<fees;

}
};


int main(){

student obj;
cout<<"Enter your age: ";
cin>>obj.age;

cout<<"Enter your fees: ";
cin>>obj.fees;

obj.displayage();
obj.displayfees();
return 0;







}