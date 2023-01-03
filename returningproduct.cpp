#include<iostream>
using namespace std;

int product(int a,int b){
    return{a*b};
}
int main(){
    int x,y;
    cout<<"Enter two number to get their product"<<endl;
    cin>>x>>y;
    cout<<product(x,y)<<endl;
    
}