/**
 * File              : int vc_sqrt(int n).c
 * Author            : Danilo, Guilherme
 * Date              : Tue 7 Feb 2019
 */

// Exercise 05: vc_sqrt

#include <stdio.h>

int vc_sqrt(int n) {
    int i = 1;
    int m = 1;
    if (n == 0 || n == 1) {
        return n;
    }
    while (m <= n) {
        i++;
        m = i * i;
    }
    i = i - 1;
    if ((i * i) < n) {
        return 0;
    } else {
        return i;
    }
}

int main() {
    int sq1 = vc_sqrt(4);
    int sq2 = vc_sqrt(9);
    int sq3 = vc_sqrt(10);
    return 0;
}
