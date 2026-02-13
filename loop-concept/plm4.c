// perfect number

#include<iostream>
using namespace std;
int main(){
    int a,sum=0;
    cin>>a;
    for(int i=1; i<a; i++){
        if(a%i==0){
            sum=sum+i;
            }
    }
    if(sum==a){
        cout<<a<<" is perfect number";
    }
    else{
        cout<<a<<" is not a perfect number";
    }
}