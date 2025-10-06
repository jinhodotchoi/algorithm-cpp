#include <iostream>

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
    cout << "hello, world" << endl;

    cout << factorial(5) << endl;

    cout << fibonacci(5) << endl;

    return 0;
}
