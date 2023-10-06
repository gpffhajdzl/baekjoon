#include <stdio.h>

int main() {
    int x, y, n, p, q;
    double ans;

    scanf("%d %d", &x, &y);
    double seven25 = (double) x / y;
    ans = seven25;

    scanf("%d", &n);

    for (int i = 0; i < n; i++) {
        scanf("%d %d", &p, &q);
        double other = (double) p / q;
        if (other < ans) {
            ans = other;
        }
    }

    printf("%.2lf", ans * 1000);

    return 0;
}