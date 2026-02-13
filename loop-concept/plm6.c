// neon number

#include<iostream>
using namespace std;
int main(){
    int a,b,sum=0,d;
    cout<<"Enter the number ";
    cin>>a;
    b=a*a;
    int temp=b;
    while(temp>0){
        d=temp%10;
        sum=sum+d;
        temp/=10;
    }
    if(sum==a){
        cout<<a<<" is neon number";
    }
    else{
        cout<<a<<" is not a neon number";
    }
    
return 0;
}

