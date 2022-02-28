#include <iostream>

using namespace std;

//Добавил умножение
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

    cout << "A + B = " << a + b << '\n'
     << "A - B = " << a - b << '\n'
     << "A * B = " << a * b << '\n'
     << "A / B = " << a / b << '\n'
     << "MAX = " << max << '\n';

    return 0;
}
