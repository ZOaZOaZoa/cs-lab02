#include <iostream>

using namespace std;

int main()
{
    cout << "Enter A and B: ";
    int a, b;
    cin >> a >> b;

    int max;
    if (a >= b)
    {
        max = a;
    }
    else
    {
        max = b;
    }

    int min;
    if (a <= b)
    {
        min = a;
    }
    else
    {
        min = b;
    }

    cout << "A + B = " << a + b << '\n'
     << "A - B = " << a - b << '\n'
     << "A * B = " << a * b << '\n'
     << "A / B = " << a / b << '\n'
     << "MAX = " << max << '\n'
     << "MIN = " << min << '\n';

    return 0;
}
