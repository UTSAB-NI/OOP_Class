#include<iostream>
using namespace std;



class Human{



protected:
int saving=20;
private:
int salary=10000;
public:
int age=28;
void showDetailHuman()
{
cout<<"Huamn age is is "<<age<<endl;
cout<<"Human saving is "<<saving<<endl;
cout<<"Human salary is "<<salary<<endl;
}
};



class Man : public Human
{
public:
void showDetailMan()
{
cout<<"Man age is is "<<age<<endl;
cout<<"Man saving is "<<saving<<endl;
//cout<<"Man salary is "<<salary;
}
};



int main(){



//Instantiating of object
Human obj;
Man objman;
obj.showDetailHuman();
objman.showDetailMan();



//cout<<endl<<"***********"<<obj.salary;
return 0;



}