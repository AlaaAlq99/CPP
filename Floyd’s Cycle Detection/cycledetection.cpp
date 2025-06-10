#include <iostream>
using namespace std;

const unsigned int MOD = 1U << 31;

unsigned int next(unsigned int x, unsigned int p, unsigned int q) {
    return (x * p + q) % MOD;
}

int main() {
    unsigned int n, s, p, q;
    //use  Linear Congruential Generator (LCG) to geberate random numbers
    // Input: n (number of steps), s (initial seed), p (multiplier), q (increment)
    
    cin >> n >> s >> p >> q;

    unsigned int slow = s % MOD;
    unsigned int fast = s % MOD;

    if (n == 0) {
        cout << 0 << "\n";
        return 0;
    }

    slow = next(slow, p, q);
    fast = next(next(fast, p, q), p, q);

    unsigned int steps = 1;

    while (slow != fast && steps < n) {
        slow = next(slow, p, q);
        fast = next(next(fast, p, q), p, q);
        steps++;
    }

    if (steps == n) {
        cout << n << "\n";
        return 0;
    }

    unsigned int start = 0;
    slow = s % MOD;
    while (slow != fast) {
        slow = next(slow, p, q);
        fast = next(fast, p, q);
        start++;
    }

    unsigned int length = 1;
    fast = next(slow, p, q);
    while (slow != fast) {
        fast = next(fast, p, q);
        length++;
    }

    unsigned int result = (n <= start) ? n : start + length;
    if (result > n) result = n;

    cout << result << "\n";
    return 0;
}
