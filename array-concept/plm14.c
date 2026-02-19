//to remove first occurance duplicate number

#include<iostream>
using namespace std;
int main(){
    int n,c;
    cin>>n;
    int a[n];
    for(int i=0; i<n; i++)
    cin>>a[i];
    for(int i=0; i<n; i++){
        c=0;
        for(int j=i+1; j<n; j++){
            if(a[i]==a[j]&&i!=j){
                c++;
            }
        }
        if(c==0)
        cout<<a[i];
    }
    return 0;
}