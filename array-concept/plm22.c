// to swap element based on position

#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int a[n];
    for(int i=0; i<n ; i++)
        cin>>a[i];
        int a1,b,temp;
        cin >>a1>>b ;
        temp = a[a1];
        a[a1]=a[b];
        a[b]=temp;
        for(int i=0; i<n; i++){
            cout<<a[i]<<" ";
        }
        
    }