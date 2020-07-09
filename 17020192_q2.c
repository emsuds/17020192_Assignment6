#include <stdio.h>
#include <stdlib.h>

int main() {
    int i, n, t1 = 0, t2 = 1, count;
    printf("Enter the number of terms: ");
    scanf("%d", &n);

    for (i = 0; i <= n; ++i) {
        printf("%d \n", t1);
        count= t1 + t2;
        t1 = t2;
        t2 = count;
    }

    return 0;
}
