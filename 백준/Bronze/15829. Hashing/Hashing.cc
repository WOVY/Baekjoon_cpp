#include <iostream>
#include <math.h>

using namespace std;

#define r 31
#define M 1234567891

int main()
{
    int L;
    long long power = 1, result = 0;
    string s;
    cin >> L;
    cin >> s;

    for (int i = 0; i < L; i++)
    {
        // cout << s[i] - 96 << endl;
        result += (s[i] - 96) * power;
        result = result % M;
        // cout << result << endl;
        power = (power * r) % M;
    }

    cout << result << endl;

    return 0;
}