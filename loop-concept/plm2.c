//strong number

#include<iostream>
using namespace std;
int main(){
    int a,temp,c=0;
    cin>>a;
    temp=a;
    while(temp!=0){
        int b=temp%10;
        c++;
        temp/=10;
    }
    int sum=0,d,temp1=a;
    for(int i=0; i<c; i++){
        d=temp1%10;
        int mul=1;
        for(int i=1; i<=d; i++){
            mul=mul*i;
        }
        sum=sum+mul;
        temp1/=10;
    }
    if(sum==a){
        cout<<a<<" is strong number";
    }
    else{
        cout<<a<<" is not a strong number";
    }
    return 0;
}