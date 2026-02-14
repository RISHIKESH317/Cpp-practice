//right angle triangle pattern of letters


#include <iostream>
using namespace std;
int main()
{
    int a=65,num;
    cin>>num;
    for(int i=1; i<=num; i++){
        for(int j=1; j<=i; j++){
            cout<<(char)a;
        }
        a++;
        cout<<endl;
    }

    return 0;
}