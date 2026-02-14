//palindrome range


#include <iostream>
using namespace std;
int main()
{
    int a,b;
   cin>>a>>b;
    for(int i=a; i<=b; i++)
    {
        int c=i;
        int sum=0,num;
        while(c>0)
        {
            
            num=c%10;
            sum=sum*10+num;
            c/=10;
        }
         if(sum==i) {
            cout<<i<<" is a palindrome number"<<endl;
      }

    }

    return 0;
}