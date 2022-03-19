#include<iostream>
using namespace std;

class sample{

private:
int age;

public:
void displayAge(int a){
age=a;
cout<<"Your age is: "<<age<<endl;

}


};
int main(){
int ageInput;
sample obj;

cout<<"Enter your age:";
cin>>ageInput;

obj.displayAge(ageInput);
return 0;



}