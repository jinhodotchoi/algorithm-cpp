/**
 * @copyright Copyright (c) 2025 jinho.choi
 * @see https://www.acmicpc.net/problem/11655
 * @license This code is for educational purposes only.
 */

#include <bits/stdc++.h>

using namespace std;

void impl() {
    string str;
    // 이런게 있다니;;;
    getline(cin, str);

    for (int i = 0; i < str.length(); i++) {
        if (str[i] >= 'a' && str[i] <= 'z') {
            if (str[i] + 13 > 'z') {
                str[i] = str[i] + 13 - 'z' + 'a' - 1;
            } else {
                str[i] = str[i] + 13;
            }
        } else if (str[i] >= 'A' && str[i] <= 'Z') {
            if (str[i] + 13 > 'Z') {
                str[i] = str[i] + 13 - 'Z' + 'A' - 1;
            } else {
                str[i] = str[i] + 13;
            }
        }
    }

    cout << str << endl;
}

int main() {
    // comment below line when submitting to boj website.
    freopen("./questions/boj-11655.txt", "r", stdin);
    // for faster input/output
    ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);

    impl();

    return 0;
}
