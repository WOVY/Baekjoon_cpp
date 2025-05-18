#include <iostream>
#include <vector>
#include <string>

using namespace std;

int cnt = 0;

void check_croatian(string s) {
    int i = 0;
    int n = s.size();

    while (i < n) {
        if (s.substr(i,2) == "c=") {
            cnt++;
            i += 2;
        }
        else if (s.substr(i,2) == "c-") {
            cnt++;
            i += 2;
        }
        else if (s.substr(i,2) == "d-") {
            cnt++;
            i += 2;
        }
        else if (s.substr(i,2) == "lj") {
            cnt++;
            i += 2;
        }
        else if (s.substr(i,2) == "nj") {
            cnt++;
            i += 2;
        }
        else if (s.substr(i,2) == "s=") {
            cnt++;
            i += 2;
        }
        else if (s.substr(i,2) == "z=") {
            cnt++;
            i += 2;
        }
        else if (s.substr(i,3) == "dz=") {
            cnt++;
            i += 3;
        }
        else {
            cnt++;
            i += 1;
        }
    }
}

int main() {
    string s;
    cin >> s;

    check_croatian(s);

    cout << cnt << endl;

    return 0;
}