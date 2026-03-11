#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main()
{
    string isbn;
    cin >> isbn;

    int idx, x, sum = 0;
    idx = (int)isbn.find('*');

    for (int i = 0; i < 13; i++)
    {
        if (i == idx)
        {
            continue;
        }
        else if (i % 2 == 0)
        {
            sum += isbn[i] - '0';
        }
        else if (i % 2 != 0)
        {
            sum += 3 * (isbn[i] - '0');
        }
    }

    for (x = 0; x < 10; x++)
    {
        if (idx % 2 == 0)
        {
            if ((sum + x) % 10 == 0)
                break;
        }
        else
        {
            if ((sum + 3 * x) % 10 == 0)
                break;
        }
    }

    cout << x;

    return 0;
}