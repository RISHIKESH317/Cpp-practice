//second largest

#include<iostream>
using namespace std;
int main(){
    int n,temp;
    cin>>n;
    int a[n],b[n];
    for(int i=0; i<n; i++)
    cin>>a[i];
    for(int i=0; i<n; i++)
    b[i]=a[i];
    for(int i=0; i<n; i++){
        for(int j=i+1; j<n; j++){
            if(b[i]>b[j]){
                temp=b[i];
                b[i]=b[j];
                b[j]=temp;
            }
        }
    }
    cout<<b[n-2]<<endl;
    
      
}