// to print each word of string on separate line


#include <iostream>
#include<string>
using namespace std;
int main()
{
    string s ;        //cin>>s leads to print from the second word
    while(cin>>s){
        cout<<s<<endl;
    }
    return 0;
}