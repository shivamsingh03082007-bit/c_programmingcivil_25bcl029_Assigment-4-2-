#include <stdio.h>

void printRec(int n) {
    if(n == 0)
        return;
    printRec(n - 1);
    printf("%d ", n);
}

int main() {
    int n;
    printf("Enter n: ");
    scanf("%d", &n);

    printRec(n);
    return 0;
}
