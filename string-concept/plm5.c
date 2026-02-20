// to find highest frequency

#include <iostream>
#include<string>
using namespace std;
int main()
{
   string s;
   cin>>s;
   char maxchar;
   int c,max=0;
   int len = s.length();
   for(int i=0; i<len; i++){
       c=1;
       if(s[i]=='\0')
       continue;
       for(int j=i+1; j<len; j++){
           if(s[i]==s[j]){
               c++;
               s[j]='\0';
           }
       }
       if(c>max){
           max=c;
           maxchar=s[i];
       }
   }
   cout<<maxchar<<" "<<max<<" occurs time ";
}