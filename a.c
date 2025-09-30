#include <stdio.h>

int main(void) {
    int year;
    scanf_s("%d", &year);

    if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0)) {
        printf("1\n");  // 윤년
    }
    else {
        printf("0\n");  // 평년
    }

    return 0;
}
#include <stdio.h>

int main(void) {
    int N;
    scanf("%d", &N);

    for (int i = 1; i <= 9; i++) {
        printf("%d * %d = %d\n", N, i, N * i);
    }

    return 0;
}
#include <stdio.h>

int main(void) {
    int X; // 총 금액
    int N; // 구매한 물건 종류 수
    int a, b; // 물건 가격, 개수
    int sum = 0;

    scanf("%d", &X);
    scanf("%d", &N);

    for (int i = 0; i < N; i++) {
        scanf("%d %d", &a, &b);
        sum += a * b;
    }

    if (sum == X)
        printf("Yes\n");
    else
        printf("No\n");

    return 0;
}