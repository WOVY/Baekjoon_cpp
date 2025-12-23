#include <iostream>

using namespace std;

int main()
{
    int N;
    int size[6];
    int T, P;

    int cnt1 = 0;

    cin >> N;
    for (int i = 0; i < 6; i++)
        cin >> size[i];
    cin >> T >> P;

    for (int i = 0; i < 6; i++)
    {
        if (size[i] != 0)
        {
            if (size[i] % T != 0)
                cnt1 += 1;
            cnt1 += (size[i] / T);
        }
    }
    cout << cnt1 << endl;

    cout << N / P << " " << N % P << endl;

    return 0;
}