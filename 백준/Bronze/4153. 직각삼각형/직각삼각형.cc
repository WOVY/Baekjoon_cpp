#include <iostream>
#include <math.h>

using namespace std;

int main()
{
    int num[3], tmp;

    while (1)
    {
        for (int i = 0; i < 3; i++)
            cin >> num[i];

        if (num[0] == 0 && num[1] == 0 && num[2] == 0)
            break;

        for (int i = 0; i < 2; i++)
        {
            if (num[i] > num[i + 1])
            {
                tmp = num[i];
                num[i] = num[i + 1];
                num[i + 1] = tmp;
            }
        }

        if (pow(num[2], 2) == pow(num[0], 2) + pow(num[1], 2))
            cout << "right" << endl;
        else
            cout << "wrong" << endl;
    }
    
    return 0;
}