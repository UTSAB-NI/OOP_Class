#include<iostream>
using namespace std;
class Room{
private:
double length,breadth,height;

public:
void initData(double len,double brth,double hgt){
length=len;
breadth=brth;
height=hgt;
}
double calculateArea(){
return length*breadth;

}
double calculateVolume(){
    return length*breadth*height;
}
};
int main(){
Room room1;

room1.initData(43.2,34,22);
cout<<"Area: "<<room1.calculateArea()<<endl;
cout<<"Volume: "<<room1.calculateVolume()<<endl;


return 0;
}