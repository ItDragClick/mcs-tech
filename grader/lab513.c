#include <stdio.h>

int main() {
    double score;
    if (scanf("%lf", &score) != 1) return 0;
    if (score >= 80.0) {
        printf("A\n");
    } else if (score >= 70.0) {
        printf("B\n");
    } else if (score >= 60.0) {
        printf("C\n");
    } else if (score >= 50.0) {
        printf("D\n");
    } else {
        printf("E\n");
    }
    return 0;
}
