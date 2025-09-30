#include <stdio.h>

int main(void) {
    int year;
    scanf_s("%d", &year);

    if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0)) {
        printf("1\n");  // À±³â
    }
    else {
        printf("0\n");  // Æò³â
    }

    return 0;
}
