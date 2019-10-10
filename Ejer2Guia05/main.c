#include <stdio.h>
int factoiterando(long long int num);
int main() {
    int i, j = 1, k = 1; 
    int n = 15;
    for (i = 0; i < n; i++) {
        for (j = 1; j < n - i; j++)
            printf("   ");
        for (k = 0; k <= i; k++)
            printf("%6d", (factoiterando(i)) / (factoiterando(k) * (factoiterando(i - k))));
        printf("\n");
    }
}
int factoiterando(long long int num) {
    int i = num;
    long long fact = 1;
    for (i = num; i > 1; i--) {
        fact *= i;
    }
    return fact;
}
