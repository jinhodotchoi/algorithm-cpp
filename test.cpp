#include <bits/stdc++.h>

using namespace std;

int main() {
    string str = "apple,banana,cherry";

    for (auto s : str) {
        // char로 쓰는것 주의!
        if (s == ',' || s == '.') {
            cout << endl;
        } else {
            cout << s;
        }
    }

    return 0;
}