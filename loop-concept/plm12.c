//alpahabetic pattern


#include <iostream>
using namespace std;
int main()
{
    char ch='A';
    int num;
    cin>>num;
    for(int i=1; i<=num; i++){
        for(int j=1; j<=i; j++){
            cout<<ch++<<" ";
        }
        cout<<endl;
    }

    return 0;
}