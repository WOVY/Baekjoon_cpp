//단어 공부

#include <iostream>
#include <string>
#include <vector>

using namespace std;

void count_word(string str) {
    int max = 0;
    char answer;

    vector<int> alphabet(26, 0);
    for (int i = 0; i < str.size(); i++) {
        alphabet[str[i] - 65]++;
    }

    for (int j = 0; j < 26; j++) {
        if (alphabet[j] > max) {
            max = alphabet[j];
            answer = j + 65;
        }
        else if (alphabet[j] == max) {
            answer = '?';
        }
    }

    cout << answer << endl;
}

int main() {
    string s;
    cin >> s;

    for (int i = 0; i < s.size(); i++) {
        if (islower(s[i]))
            s[i] -= 32;
    }

    count_word(s);

    return 0;
}