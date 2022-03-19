#include<iostream>
using namespace std;
int main(){

int s,t,a;
cout<<"Enter your salary: "<<endl;
cin>>s;
if(s<=400000)
{
    t= 4000;
cout<<"THe tax is: "<<t;
}
else if(s>400000 && s<500000){
a=s-400000;
t=4000+0.1*a;
    cout<<"THe tax is: "<<t;
}
else if(s>500000 && s<600000){
    a=s-500000;
t=14000+0.2*a;
    cout<<"THe tax is: "<<t;
}
else if(s>600000 && s<700000){
 a=s-600000;
t=34000+0.3*a;
    cout<<"THe tax is: "<<t;
}else{
   a=s-700000;
   t=64000+0.35*a;
    cout<<"THe tax is: "<<t;
}
return 0;


}





