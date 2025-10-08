/**
 * @copyright Copyright (c) 2025 jinho.choi
 * @see https://www.acmicpc.net/problem/1159
 * @license This code is for educational purposes only.
 */

#include <bits/stdc++.h>

using namespace std;

void impl() {
    int N;
    cin >> N;

    vector<int> v(26, 0);

    for (int i = 0; i < N; i++) {
        string str;
        cin >> str;
        v[str[0] - 'a']++;
    }

    bool flag = false;

    for (int i = 0; i < 26; i++) {
        if (v[i] >= 5) {
            // 아스키 코드 변환
            cout << (char)(i + 'a');
            flag = true;
        }
    }

    if (!flag) {
        cout << "PREDAJA" << endl;
    }

    return;
}

int main() {
    // comment below line when submitting to boj website.
    freopen("./questions/boj-1159.txt", "r", stdin);
    // for faster input/output
    ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);

    impl();

    return 0;
}
