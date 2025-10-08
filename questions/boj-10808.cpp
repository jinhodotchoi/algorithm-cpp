/**
 * @copyright Copyright (c) 2025 jinho.choi
 * @see https://www.acmicpc.net/problem/10808
 * @license This code is for educational purposes only.
 */

#include <bits/stdc++.h>

using namespace std;

void mainImpl() {
    string str;
    cin >> str;

    vector<int> v(26, 0);

    for (auto c : str) v[c - 'a']++;

    for (auto i : v) cout << i << " ";

    return;
}

int main() {
    // comment below line when submitting to boj website.
    // freopen("./questions/boj-10808.txt", "r", stdin);
    // for faster input/output
    ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);

    mainImpl();

    return 0;
}
