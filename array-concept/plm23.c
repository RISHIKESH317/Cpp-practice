//ranking 

#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int a[n],r[n];
    for(int i=0; i<n ; i++)
        cin>>a[i];
       int temp;
       for(int i=0; i<n; i++){
           temp =1;
           for(int j=0; j<n; j++){
               if(a[i]>a[j]){
                   temp++;
               }
           }
           r[i]=temp;
       }
         for(int i=0; i<n; i++){
             cout<<r[i];
         }
}