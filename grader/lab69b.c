#include <stdio.h>

int main() {
    int n;
    if (scanf("%d", &n) != 1) return 0;
    int even_count = 0;
    for (int i = 0; i < n; i++) {
        int x;
        if (scanf("%d", &x) == 1) {
            if (x % 2 == 0) {
                even_count++;
            }
        }
    }
    printf("%d\n", even_count);
    return 0;
}
