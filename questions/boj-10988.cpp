/**
 * @copyright Copyright (c) 2025 jinho.choi
 * @see https://www.acmicpc.net/problem/10988
 * @license This code is for educational purposes only.
 */

#include <bits/stdc++.h>

using namespace std;

void impl() {
    string str;
    cin >> str;

    int l = 0;
    int r = str.length() - 1;

    bool flag = true;

    while (l < r) {
        if (str[l] != str[r]) {
            flag = false;
            break;
        }
        l++;
        r--;
    }

    cout << (flag ? 1 : 0) << endl;

    return;
}

int main() {
    // comment below line when submitting to boj website.
    // freopen("./questions/boj-10988.txt", "r", stdin);
    // for faster input/output
    ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);

    impl();

    return 0;
}
