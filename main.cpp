#include <iostream>

using namespace std;

int main()
{
    cout << "Enter A and B: ";
    double a, b;
    cin >> a >> b;

    double max;
    if (a >= b)
    {
        max = a;
    }
    else
    {
        max = b;
    }

    cout << "A + B = " << a + b << '\n'
     << "A - B = " << a - b << '\n'
     << "A * B = " << a * b << '\n'
     << "A / B = " << a / b << '\n'
     << "MAX = " << max << '\n';

    return 0;
}
