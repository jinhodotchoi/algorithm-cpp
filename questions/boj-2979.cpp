/**
 * @copyright Copyright (c) 2025 jinho.choi
 * @see https://www.acmicpc.net/problem/2979
 * @license This code is for educational purposes only.
 */

#include <bits/stdc++.h>

using namespace std;

void impl() {
    int A, B, C;
    vector<int> v(101, 0);
    int result = 0;

    cin >> A >> B >> C;

    for (int i = 0; i < 3; i++) {
        int start, end;
        cin >> start >> end;
        for (int j = start; j < end; j++) v[j]++;
    }

    for (int i = 0; i < 101; i++) {
        if (v[i] == 1) result += A;
        else if (v[i] == 2) result += B * 2;
        else if (v[i] == 3) result += C * 3;
    }

    cout << result << endl;

    return;
}

int main() {
    // comment below line when submitting to boj website.
    // freopen("./questions/boj-2979.txt", "r", stdin);
    // for faster input/output
    ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);

    impl();

    return 0;
}
