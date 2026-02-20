// sum of duplicaate numbers

#include<iostream>
using namespace std;
int main(){
    int n,sum=0;
    cin>>n;
    int a[n],r[n];
    for(int i=0; i<n ; i++)
        cin>>a[i];
    int temp;
    for(int i=0; i<n; i++){
        temp=0;
        for(int j=i+1; j<n; j++){
            if(a[i]==a[j]){
                temp++;
            }
        }
        if(temp==1){
            cout<<a[i]<<" ";
            sum = sum+a[i];
        }
    }
    cout<<endl<<sum;
}