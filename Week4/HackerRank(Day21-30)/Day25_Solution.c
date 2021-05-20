#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int isPrime(int n) {
    int i,res = 1;
    if (n < 2) {
        return 0;
    }
    for (i = 2; i <= sqrt(n); i++) {
        if (n % i == 0) {
            res = 0;
            break;
        }
    }
    return res;
}
int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */ 
    int i,t,n;
    scanf("%d", &t);
    for (i = 0; i < t; i++) {
        scanf("%d", &n);
        if (isPrime(n)) {
            printf("Prime\n");
        } else {
            printf("Not prime\n");
        }
    }

    return 0;
}
