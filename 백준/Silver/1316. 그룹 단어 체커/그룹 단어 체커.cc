#include <iostream>
#include <string>
#include <vector>

using namespace std;

int cnt = 0;

void check_group_word(string s, vector<bool>& alphabet) {
    int j, i = 0, n = s.size();
    bool flag = true;
    while (i < n) {
        if (alphabet[s[i] - 97]) {
            return;
        } else {
            alphabet[s[i] - 97] = true;
            j = i;
            while (s[j] == s[j+1]) {
                j++;
            }
            i = j + 1;
        }
    }
    cnt++;
}

int main() {
    int N;
    cin >> N;
    string s;

    vector<bool> alphabet;
    for (int i = 0; i < N; i++) {
        alphabet.assign(26, false);
        cin >> s;
        check_group_word(s, alphabet);
    }

    cout << cnt << endl;
}