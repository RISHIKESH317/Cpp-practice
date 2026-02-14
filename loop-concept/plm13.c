//kaprekar number

#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int a;
    cin >> a;

    if (a <= 0)
    {
        cout << "Invalid input";
    }
    else
    {
        int square = a * a;
        int b = square;
        int c = 0;

        // Count digits in square
        while (b > 0)
        {
            c++;
            b = b / 10;
        }

        for (int i = 1; i < c; i++)
        {
            int power = pow(10, i);
            int right = square % power;
            int left = square / power;

            if (right > 0 && (left + right == a))
            {
                cout << a << " is a Kaprekar number";
                return 0;
            }
        }

        cout << a << " is NOT a Kaprekar number";
    }

    return 0;
}
