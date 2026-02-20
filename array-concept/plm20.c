//to find frequency of only prime number 

#include<iostream>
using namespace std;
int main(){
    int n,c,s=0,flag;
    cin>>n;
    int a[n],b[n];
    for(int i=0; i<n; i++)
    cin>>a[i];
    for(int i=0; i<n; i++){
        flag=0;
        for(int j=2; j<a[i]; j++){
            if(a[i]%j==0)
            flag=1;
        }
        if(flag==0){
            b[s]=a[i];
            s++;
        }
    }
     
     for(int i=0; i<s; i++){
         c=1;
         if(b[i]==-1)
         continue;
         for(int j=i+1; j<s; j++){
             if(b[i]==b[j]){
                 c++;
                 b[j]=-1;
             }
         }
         cout<<b[i]<<"occurs"<<c<<"times"<<endl;
     }
    
    
    
    return 0;
}