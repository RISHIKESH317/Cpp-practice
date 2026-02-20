//to compare the largest

#include <iostream>
#include<string>
using namespace std;
int main()
{
    string s1,s2,s3,largest ;
    s1 = "hi";
    s2 = "hello";
    s3 = "hi hello";
    if(s1>s2&&s1>s3)
    largest  = s1;
    else if(s2>s1&&s2>s3)
    largest  =s2;
    else
  largest = s3;
  cout<<"larhgest is"<<" "<<largest;
    
}