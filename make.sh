#!/bin/bash

pushd questions > /dev/null

questionName=boj-$1

touch $questionName.cpp

touch $questionName.txt

cat > $questionName.cpp << EOF
/**
 * @copyright Copyright (c) $(date '+%Y') jinho.choi
 * @see https://www.acmicpc.net/problem/$1
 * @license This code is for educational purposes only.
 */

#include <bits/stdc++.h>

using namespace std;

void impl() {

}

int main() {
    // This line is uncommented when starting process in local.
    // freopen("./questions/$questionName.txt", "r", stdin);
    // for faster input/output
    ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);

    impl();

    return 0;
}
EOF

echo ">>> created files regarding to $questionName"

popd > /dev/null