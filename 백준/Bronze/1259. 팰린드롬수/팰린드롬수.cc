#include <iostream>
#include <string>

using namespace std;

int main()
{
    int i, j, flag;
    string num_str;

    while (1)
    {
        cin >> num_str;
        if (num_str == "0")
            break;

        i = 0;
        j = num_str.size() - 1;
        flag = 1;

        if (i == j)
        {
            cout << "yes" << endl;
            flag = 0;
        }

        while (i < j && flag)
        {
            if (num_str[i] != num_str[j] || num_str[0] == '0')
            {
                cout << "no" << endl;
                break;
            }
            i++;
            j--;
            if (i >= j)
                cout << "yes" << endl;
        }
    }

    return 0;
}