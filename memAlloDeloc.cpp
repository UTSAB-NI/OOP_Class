#include <iostream>
using namespace std;
int main(){
int* pointInt;
float*pointFloat;

pointInt=new int;
pointFloat=new float;

*pointInt=45;
*pointFloat=15.25;

cout<<*pointInt<<endl;

cout<<*pointFloat;

delete pointInt;
delete pointFloat;
}
