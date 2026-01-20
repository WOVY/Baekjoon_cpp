#include <iostream>

using namespace std;

int main()
{
    int a, b, c, r, tmp;

    cin >> a >> b;
    c = a * b;

    if (a < b)
    {
        tmp = a;
        a = b;
        b = tmp;
    }

    while (1)
    {
        r = a % b;

        if (r == 0)
        {
            cout << b << endl;
            break;
        }

        a = b;
        b = r;
    }

    cout << c / b;

    return 0;
}