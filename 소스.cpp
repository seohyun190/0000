#include <stdio.h>

int main() {
    int A, B;
    printf("두 자연수를 입력하세요: ");
    scanf("%d %d", &A, &B);

    printf("A + B = %d\n", A + B);
    printf("A - B = %d\n", A - B);
    printf("A * B = %d\n", A * B);
    printf("A / B = %d\n", A / B);   // 몫
    printf("A %% B = %d\n", A % B); // 나머지

    return 0;
}
#include <stdio.h>

int main() {
    char ch;
    printf("알파벳 또는 숫자(0-9) 하나를 입력하세요: ");
    scanf(" %c", &ch);

    printf("'%c'의 아스키 코드 값은 %d 입니다.\n", ch, (int)ch);

    return 0;
}
#include <stdio.h>

int main() {
    int A, B, C;
    printf("세 수 A, B, C를 입력하세요: ");
    scanf("%d %d %d", &A, &B, &C);

    int left1 = (A + B) % C;
    int right1 = ((A % C) + (B % C)) % C;

    int left2 = (A * B) % C;
    int right2 = ((A % C) * (B % C)) % C;

    printf("(A + B) %% C = %d\n", left1);
    printf("((A %% C) + (B %% C)) %% C = %d\n", right1);
    printf("(A * B) %% C = %d\n", left2);
    printf("((A %% C) * (B %% C)) %% C = %d\n", right2);

    return 0;
}
