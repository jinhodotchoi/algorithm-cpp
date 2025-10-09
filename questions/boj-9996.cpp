/**
 * @copyright Copyright (c) 2025 jinho.choi
 * @see https://www.acmicpc.net/problem/9996
 * @license This code is for educational purposes only.
 */

#include <bits/stdc++.h>

using namespace std;

void impl() {
    int N; cin >> N;
    string str; cin >> str;
    string pattern1 = str.substr(0, str.find('*'));
    string pattern2 = str.substr(str.find('*') + 1);

    for (int i = 0; i < N; i++) {
        string tmp;
        cin >> tmp;

        if (tmp.length() < pattern1.length() + pattern2.length()) {
            cout << "NE" << endl;
            continue;
        }

        if (tmp.substr(0, pattern1.length()) != pattern1) {
            cout << "NE" << endl;
            continue;
        }

        if (tmp.substr(tmp.length() - pattern2.length()) != pattern2) {
            cout << "NE" << endl;
            continue;
        }
        
        cout << "DA" << endl;
    }

}

int main() {
    // comment below line when submitting to boj website.
    // freopen("./questions/boj-9996.txt", "r", stdin);
    // for faster input/output
    ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);

    impl();

    return 0;
}
