/**
 * File              : int vc_sqrt(int n).c
 * Author            : Danilo, Guilherme
 * Date              : Tue 7 Feb 2019
 */


// Exercise 6: vc_is_prime

#include <stdio.h>

int vc_is_prime(int n) {
    int i;
    if (n == 1 || n == 0){
        return 0;
    }
    for (i = 2; i < n; i++) {
        if (n % i == 0) {
            return 0;
        }
    }
    return 1;
}

int main() {
    int isPrime10 = vc_is_prime(10);
    int isPrime7 = vc_is_prime(7);
    int isPrime2 = vc_is_prime(2);
    int isPrime13 = vc_is_prime(13);
    return 0;
}
