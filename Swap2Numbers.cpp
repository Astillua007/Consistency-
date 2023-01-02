#include<iostream>
using namespace std;

void swap(int a,int b){
    a=a+b;
    b=a-b;
    a=a-b;
    cout<<a<<" "<<b;
}
int main(){
    int x,y;
    cout<<"Enter Two Numbers"<<endl;
    cin>>x>>y;
    swap(x,y);
}