// to find frequency

#include<iostream>
using namespace std;
int main(){
    int n,c;
    cin>>n;
    int a[n];
    for(int i=0; i<n; i++)
    cin>>a[i];
    for(int i=0; i<n; i++){
        if(a[i]==-1)
        continue ;
        c=1;
        for(int j=0; j<n; j++){
            if(a[i]==a[j]&&i!=j){
                c++;
                a[j]=-1;
            }
        }
        cout<<a[i]<<" occurs"<<" "<<c<<" "<<"times"<<endl;;
    }
    
    
    return 0;
}