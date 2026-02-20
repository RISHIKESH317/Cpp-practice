//to insert number at a position
#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int a[n];
    for(int i=0; i<n ; i++)
        cin>>a[i];
        int num,pos;
        cin >> num >> pos;
        for(int i=n; i>=pos; i--){
            a[i]=a[i-1];
        }
      a[pos-1]=num;
        n++;
        for(int i=0; i<n ;i++)
        cout<<a[i]<<" ";
    }