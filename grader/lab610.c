#include <stdio.h>

int main() {
    int a, b;
    if (scanf("%d %d", &a, &b) != 2) return 0;
    if (a > b) {
        printf("0\n");
    } else {
        for (int i = a; i <= b; i++) {
            printf("%d\n", i);
        }
    }
    return 0;
}
