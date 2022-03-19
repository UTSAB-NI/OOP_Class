#include<iostream>
using namespace std;

class Test{
public :
 mutable int x;
int y;
Test(){

    x=4;
    y=45;
}


};
int main(){
const Test t1;
t1.x=47;
cout<<"x= "<<t1.x;
//t1.y=56;
//cout<<"y= "<<t1.y<<;
    return 0;
}