#include <bits/stdc++.h>

using namespace std;

// 조합을 생성할 원본 배열
vector<int> v = {1, 2, 3, 4, 5};

// 현재 조합을 저장할 벡터
vector<int> res;

void printV(vector<int> &v) {
    for (int i = 0; i < v.size(); i++) {
        cout << v[i] << " ";
    }
    cout << endl;
}

/**
 * 순열 만들기
 * @param n 총 원소의 개수
 * @param r 뽑을 원소의 개수
 * @param depth 현재 깊이
 */
void makePermutation(int n, int r, int depth) {
    if (depth == r) {
        printV(v);
        return;
    }

    for (int i = depth; i < n; i++) {
        swap(v[i], v[depth]);
        makePermutation(n, r, depth + 1);
        swap(v[i], v[depth]);
    }
}

// 3개 미만 -> 중첩 for문
// 3개 이상 -> 재귀
void comb(int n, int r, int depth) {
    if (r == 0) {
        printV(v);
        return;
    }

    for (int i = depth; i < n; i++) {
        v.push_back(i);
        comb(n, r, depth + 1);
        v.pop_back();
    }
}

// 직접 구현필요한 split 함수
vector<string> split(string str, string delimiter) {
    vector<string> result;

    int start = 0;
    int end = str.find(delimiter);

    while (end != string::npos) {
        result.push_back(str.substr(start, end - start));
        start = end + delimiter.length();
        end = str.find(delimiter, start);
    }

    result.push_back(str.substr(start));

    return result;
}


int main() {
    // 중복 제거하기
    {
        vector<int> v = {1, 2, 3, 2, 4, 1, 5, 3, 6};

        set<int> s(v.begin(), v.end());

        vector<int> result(s.begin(), s.end());
    }

    ////////////////////////////////////////////////////////////
    
    return 0;
}