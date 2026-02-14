//even and odd from give given integer

#include<iostream>
using namespace std;
int main(){
    int a;
    cin>>a;
    if(a%2==0){
        for(int i=2; i<=a; i++){
            if(a%i==0){
                cout<<i<<" ";
            }
        }
    }
    else if(a%2!=0){
        for(int i=1; i<=a; i++){
            if(a%2!=0){
                cout<<i<<" ";
            }
        }
    }
  ;
}