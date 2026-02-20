//Print Starting Index of Substring


#include <iostream>
#include<string>
using namespace std;
int main()
{
  string s1,s2;
  getline(cin,s1);
  getline(cin,s2);
  int n1 = s1.length();
  int n2 = s2.length();
  int j;
 for(int i=0; i<n1-n2; i++){
     for( j=0; j<n2; j++){
         if(s1[i+j]!= s2[j])
         break;
     }
     if(j==n2)
     cout<<i<<" ";
 }
    
}