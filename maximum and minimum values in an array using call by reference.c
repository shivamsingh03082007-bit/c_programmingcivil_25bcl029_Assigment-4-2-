#include <stdio.h>

void findMinMax(int arr[], int n, int *min, int *max) {
    *min = *max = arr[0];
    for(int i = 1; i < n; i++) {
        if(arr[i] > *max)
            *max = arr[i];
        if(arr[i] < *min)
            *min = arr[i];
    }
}

int main() {
    int a[50], n, min, max;
    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter elements: ");
    for(int i = 0; i < n; i++)
        scanf("%d", &a[i]);

    findMinMax(a, n, &min, &max);

    printf("Minimum = %d\nMaximum = %d\n", min, max);
    return 0;
}
