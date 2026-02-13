//perfect number between range

#include<iostream>
using namespace std;
int main(){
    int a,b,sum;
    cout<<"Enter the two number ";
    cin>>a>>b;
    if(b<=a){
        cout<<"invalid";
    }
    else{
        for(int i=a+1; i<b; i++){
            sum=0;
    for(int j=1; j<i; j++){
        if(i%j==0){
            sum=sum+j;
            }
    }
    if(sum==i){
        cout<<i<<" is perfect number";
    }
        }
    
    
return 0;
}

}