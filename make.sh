#!/bin/bash

pushd questions

questionName=boj-$1

touch $questionName.cpp

touch $questionName.txt

cat > $questionName.cpp << EOF
/**
 * @copyright 2025
 * Backjoon $questionName
 */

#include <bits/stdc++.h>

using namespace std;

void mainImpl() {
}

int main() {
    freopen("./$questionName.txt", "r", stdin);
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    mainImpl();

    return 0;
}
EOF

echo ">>> created files regarding to $questionName"

popd