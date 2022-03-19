#include<iostream>
using namespace std;
class student{
    public:
string name,email,Dob;
int regID;
void print_info(){
            cout<<"Name: "<<name
                <<"\nEmail: "<<email
                <<"\nRegistration ID: "<<regID
                <<"\nDate of Birth: "<<Dob;


           }
};

int main(){
student stu1;
stu1.name="Utsab Singh";
stu1.email="utsabsingh5@gmail.com";
stu1.regID=11540245;
stu1.Dob="2002/03/01";
stu1.print_info();


}
