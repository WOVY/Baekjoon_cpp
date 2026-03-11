#include <iostream>

using namespace std;

int main()
{
    int N, num;
    cin >> N;

    int count[10001] = {0};

    for (int i = 0; i < N; i++)
    {
        cin >> num;
        count[num]++;
    }

    for (int i = 1; i < 10001; i++)
    {
        while (count[i] != 0)
        {
            cout << i << "\n";
            count[i]--;
        }
    }

    return 0;
}