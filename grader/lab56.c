#include <stdio.h>

int main() {
    int n;
    if (scanf("%d", &n) != 1) return 0;
    if (n > 0) {
        printf("%d positive\n", n);
    } else {
        printf("%d negative\n", n);
    }
    return 0;
}
