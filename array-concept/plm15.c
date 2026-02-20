// to print index value of fiesst pair of sum
#include<iostream>
using namespace std;
int main(){
    int n,c,flag;
    cin>>n;
    int a[n];
    for(int i=0; i<n; i++)
    cin>>a[i];
    cin>>c;
    for(int i=0; i<n; i++){
        flag=0;
        for(int j=0; j<n; j++){
            if(a[i]+a[j]==c&&i!=j){
            cout<<i<<" "<< j;
            flag=1;
             break;
        }
        }
        if(flag==1)
        break;
    }
    return 0;
}