#include <iostream>
#include <math.h>

using namespace std;

#define r 31
#define M 1234567891

int main()
{
    int a, L, power = 1, result = 0;
    string s;
    cin >> L;
    cin >> s;

    for (int i = 0; i < L; i++)
    {
        result += (s[i] - 96) * power;
        power *= r;
    }

    cout << result % M << endl;
    
    return 0;
}