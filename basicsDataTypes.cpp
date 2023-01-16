#include<iostream>
#include<iomanip>

using namespace std;
    int main(){
        int a;
        long b;
        char c;
        float d;
        double e;
        cin>>a>>b>>c>>d>>e;
        cout<<"The output is as Follows"<<endl;
        cout<<a<<endl;
        cout<<b<<endl;
        cout<<c<<endl;
        cout<<fixed<<setprecision(3)<<d<<endl;
        cout<<fixed<<setprecision(9)<<e<<endl;
        return 0;

    }