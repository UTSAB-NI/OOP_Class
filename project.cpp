#include<iostream>
using namespace std;
int main(){
float s,t;
cout<<"Enter salary: "<<endl;
cin>>s;

if (s-400000<=0){
    t=(1/100)*s;
    cout<<t;
}else{
    cout<<"wrong";
}
return 0;



}
