#include<iostream>
using namespace std;
class Student{

int age;
public:

    Student():age(12){}

    void findAge(){
    cout<<"Age:"<<age<<endl;
    }
};

int main(){

Student* ptr=new Student();

ptr->findAge();

delete ptr;
return 0;

}
