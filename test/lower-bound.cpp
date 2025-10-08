#include <bits/stdc++.h>

using namespace std;

int main() {
    vector<int> v = {1, 2, 3, 4, 5};
    int target = 3;
    auto it = lower_bound(v.begin(), v.end(), target);

    cout << "begin: " << *v.begin() << endl;
    cout << "end: " << *v.end() << endl; // 아, `끝 + 1`을 가리키는 것이었다.

    if (it == v.end()) {
        cout << "not found" << endl;
    } else {
        cout << *it << endl;
    }

    return 0;
}