#include <iostream>
using namespace std;
int main(){
int num,i;
cout<<"Enter total number of student:";
cin>>num;
float* ptr;

ptr=new float[num];

cout<<"Enter GPA of student."<<endl;
for(i=0;i<num;++i){
    cout<<"Student "<<i+1<<": ";
    cin>>*(ptr+i);

}
cout<<"\nDisplaying GPA of student."<<endl;
for(i=0;i<num;++i){
    cout<<"Student"<<i+1<<": "<<*(ptr+i)<<endl;
}

delete[] ptr;
}
