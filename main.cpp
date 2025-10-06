#include <iostream>
#include <vector>

using namespace std;

/**
 * factorial function
 * @param n
 * @return n!
 */
int factorial(int n) {
    if (n == 0) return 1;
    return n * factorial(n - 1);
}

int fibonacci(int n) {
    if (n == 0) return 0;
    if (n == 1) return 1;
    return fibonacci(n - 1) + fibonacci(n - 2);
}

int main() {
    vector<vector<int>> v = {
        {1, 2, 3}, 
        {4, 5, 6}, 
        {7, 8, 9}
    };

    for (auto a : v) {
        for (auto b : a) {
            cout << b << " ";
        }
        cout << endl;
    }


    return 0;
}
