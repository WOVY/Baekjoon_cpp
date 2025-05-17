#include <iostream>
#include <string>

using namespace std;

bool check_Palindrome(string s) { //Palindrome인지 확인하는 함수
    int i = 0;
    bool flag = true;
    while (i < s.length() / 2) {
        if (s[i] != s[s.length() - 1 - i]) {
            flag = false;
            break;
        }
        i++;
    }

    return flag;
}

int main()
{
    string s;
    cin >> s;

    if (check_Palindrome(s))
        cout << 1 << endl;
    else
        cout << 0 << endl;

    return 0;
}