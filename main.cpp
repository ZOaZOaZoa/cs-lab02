#include <iostream>

using namespace std;

//Добавил умножение
int main()
{
    cout << "Enter A and B: ";
    int a, b;
    cin >> a >> b;

    cout << "A + B = " << a + b << '\n'
     << "A - B = " << a - b << '\n'
     << "A * B = " << a * b << '\n'
     << "A / B = " << a / b << '\n';

    return 0;
}
