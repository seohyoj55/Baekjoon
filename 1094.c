#include <stdio.h>
int main() {
    int n, count=0;
    scanf("%d", &n);
    while (n > 0) {
        n = (n-1)&n;
        count++;
    }
    printf("%d\n", count);
    return 0;
}