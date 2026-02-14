//fibonnaci series

#include<iostream>
using namespace std;
int main(){
    int num;
    cin>>num;
    int a=0,b=1,z,c=0;
    while(c<num){
        cout<<a<<endl;
        z=a+b;
        a=b;
        b=z;
        c++;
    }
return 0;
}

