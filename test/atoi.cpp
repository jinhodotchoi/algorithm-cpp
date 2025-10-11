#include <bits/stdc++.h>

using namespace std;

int main() {
    string str = "123";
    //* atoi 함수는 문자열을 정수로 변환해주는 함수다.
    cout << "정상:" << atoi(str.c_str()) << endl;

    string str2 = "hello world";
    //* 비정상인 경우 0을 반환한다.
    cout << "비정상:" << atoi(str2.c_str()) << endl;

    return 0;
}