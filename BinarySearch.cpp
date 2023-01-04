#include<iostream>
using namespace std;

int main(){
    int arr[]={12,14,15,16};
    int n,k;
    n=sizeof(arr)/sizeof(arr[0]);
    cout<<"Enter the value of k"<<endl;
    cin>>k;
    for (int i = 0; i < n; i++)
    {
        if(arr[i]==k)
        cout<<i;
    }
    return -1;
    
}