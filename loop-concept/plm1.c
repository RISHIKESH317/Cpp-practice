//palindrome
#include<iostream>
using namespace std;
int main(){
    int a,c=0,d;
    cin>>a;
    int temp=a;
    while(temp!=0){
        int b=temp%10;
        c++;
        temp/=10;
    }
    int temp1=a;
    int sum=0;
    for(int i=0; i<c; i++){
        d=temp1%10;
        sum=(sum*10)+d;
        temp1/=10;
    }
    if(sum==a){
        cout<<a<<" is palindrome";
    }
    else{
        cout<<a<<"is not a palindrome";
    }
    return 0;
}