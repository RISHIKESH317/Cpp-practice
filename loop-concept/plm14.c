//automorphic number

#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int a, b, c = 0, square, num;

    cin >> a;

    if (a <= 0)
    {
        cout << "Invalid input";
    }
    else
    {
        square = a * a;
        b = a;

        // Count digits in original number
        while (b > 0)
        {
            c++;
            b /= 10;
        }

        int power = pow(10, c);
        num = square % power;

        if (num == a)
        {
            cout << a << " is an automorphic number";
        }
        else
        {
            cout << a << " is not an automorphic number";
        }
    }

    return 0;
}
