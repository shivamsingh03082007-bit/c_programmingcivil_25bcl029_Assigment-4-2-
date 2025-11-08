#include <stdio.h>

int isLeap(int y) {
    if((y % 400 == 0) || (y % 4 == 0 && y % 100 != 0))
        return 1;
    return 0;
}

int main() {
    int year;
    printf("Enter year: ");
    scanf("%d", &year);

    if(isLeap(year))
        printf("%d is a Leap Year\n", year);
    else
        printf("%d is Not a Leap Year\n", year);

    return 0;
}
