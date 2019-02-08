/**
 * File              : vc_find_next_prime.c
 * Author            : Danilo, Guilherme
 * Date              : Tue 7 Feb 2019
 */

#include <stdio.h>

int vc_is_prime(int n) {
    int i;
    if (n < 2) {
        return 0;
    }
    for (i = 2; i < n; ++i) {
        if (n % i == 0) {
            return 0;
        }
    }
    return 1;
}


int vc_find_next_prime(int n) {
    int r = n + 1;
    for (;;) {
        int isPrime = vc_is_prime(r);
        if (isPrime == 1) {
            break;
        } else {
            r = ++r;
        }
    }
    return r;
}

int main() {
    int i = vc_find_next_prime(3);
    return 0;
}
