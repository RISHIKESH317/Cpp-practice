// left rotation for both number and letters

#include<iostream>
using namespace std;
int main(){
    int n,k;
    cin>>n;
    char a[n];             // here we use char data type
    for(int i=0; i<n; i++)
    cin>>a[i];
    cin>>k;
    k=k%n;
    for(int i=k; i<n; i++)
    cout<<a[i]<<" ";
    for(int i=0; i<k; i++)
    cout<<a[i]<<" ";
}