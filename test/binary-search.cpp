#include <bits/stdc++.h>

using namespace std;

int main() {
    vector<int> v = {1, 2, 3, 4, 5};
    int target = 3;
    // TODO: 어디 인덱스에 있는지 알 수 있을까?
    auto it = binary_search(v.begin(), v.end(), target);
    cout << it << endl;
    return 0;
}