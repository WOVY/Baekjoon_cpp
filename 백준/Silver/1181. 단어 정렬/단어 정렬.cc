#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

bool compare(string a, string b)
{
    if (a.length() != b.length())
    {
        return a.length() < b.length();
    }
    return a < b;
}

int main()
{
    int N, index = 0;
    string word;
    string temp;

    cin >> N;

    vector<string> words;
    words.assign(N, "");

    for (int i = 0; i < N; i++)
        cin >> words[i];

    sort(words.begin(), words.end(), compare);

    words.erase(unique(words.begin(), words.end()), words.end());

    for (int i = 0; i < words.size(); i++)
        cout << words[i] << endl;

    return 0;
}