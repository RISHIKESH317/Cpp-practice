//to find max frequency and its number

#include<iostream>
using namespace std;
int main(){
    int n,k,c;
    cin>>n;
    int a[n];
    for(int i=0; i<n ; i++)
        cin>>a[i];
    
    int max=0;
    for(int i=0; i<n; i++){
        c=1;
        if(a[i]==-1)
        continue ;
        for(int j=i+1; j<n; j++){
            if(a[i]==a[j]){
                a[j]=-1;
                c++;
            }
        }
        if(c>max){
             max=c;
            k=a[i];
           
        }
    }
    cout<<k<<endl<<max;
    
}