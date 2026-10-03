#include <stdio.h>

int main() {
    int n;
    if (scanf("%d", &n) != 1) return 0;
    if (n >= 100 && n <= 1000) {
        printf("%d is in between 100 and 1000\n", n);
    } else {
        printf("%d is NOT in between 100 and 1000\n", n);
    }
    return 0;
}
