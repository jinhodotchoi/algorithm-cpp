/**
 * @copyright Copyright (c) 2025 jinho.choi
 * @see https://www.acmicpc.net/problem/2559
 * @license This code is for educational purposes only.
 */

#include <bits/stdc++.h>

using namespace std;

void impl() {
    int N, K;
    cin >> N >> K;

    vector<int> v(N);

    for (int i = 0; i < N; i++) cin >> v[i];

    int result = 0;

    for (int i = 0; i < K; i++) result += v[i];

    int max_result = result;

    for (int i = K; i < N; i++) {
        result += v[i];
        result -= v[i - K];
        //* max 함수가 있었다!
        max_result = max(max_result, result);
    }

    cout << max_result << endl;
}

int main() {
    // This line is uncommented when starting process in local.
    // freopen("./questions/boj-2559.txt", "r", stdin);
    // for faster input/output
    ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);

    impl();

    return 0;
}
