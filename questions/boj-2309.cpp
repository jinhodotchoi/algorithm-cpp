#include <bits/stdc++.h>

using namespace std;

void printV(vector<int> &v) {
    for (int i = 0; i < v.size(); i++) {
        cout << v[i] << endl;
    }
}

// 누적합으로 접근했는데 생각해보니 그럴 필요가 없음...
void mainImpl() {
    vector<int> v;

    for (int i = 0; i < 9; i++) {
        int tmp;
        cin >> tmp;
        v.push_back(tmp);
    }

    sort(v.begin(), v.end());

    do {
        int sum = 0;
        for (int i = 0; i < 7; i++) sum += v[i];
        if (sum == 100) break;
    } while (next_permutation(v.begin(), v.end()));

    for (int i = 0; i < 7; i++) cout << v[i] << endl;

    return;
}

int main() {
    freopen("./questions/boj-2309.txt", "r", stdin);
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    mainImpl();

    return 0;
}