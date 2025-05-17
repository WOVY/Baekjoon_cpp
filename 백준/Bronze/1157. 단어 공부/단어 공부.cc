//단어 공부

#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

void count_word(vector<char> str) { //각 알파벳의 개수를 세는 함수
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

    //소문자를 대문자로 변경 후 vector에 저장
    vector<char> str;
    for (int i = 0; i < s.size(); i++) {
        if (islower(s[i]))
            str.push_back(s[i] - 32);
        else
            str.push_back(s[i]);
    }

    count_word(str);

    return 0;
}