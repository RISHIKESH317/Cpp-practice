//happy number

#include<iostream>
using namespace std;
int main(){
    int a,sum,b;
    cin>>a;
    int temp=a;
    while(a!=1&&a!=4){
        sum=0;
        while(a>0){
            b=a%10;
            b=b*b;
            sum=sum+b;
            a/=10;
        }
        a=sum;
    }
    if(a==1||sum==1){
        cout<<temp<<" is happy number";
    }
    else{
        cout<<temp<<" is not a happy number";
    }
}