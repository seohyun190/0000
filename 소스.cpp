#include <stdio.h>

int main() {
    int A, B;
    printf("�� �ڿ����� �Է��ϼ���: ");
    scanf("%d %d", &A, &B);

    printf("A + B = %d\n", A + B);
    printf("A - B = %d\n", A - B);
    printf("A * B = %d\n", A * B);
    printf("A / B = %d\n", A / B);   // ��
    printf("A %% B = %d\n", A % B); // ������

    return 0;
}
#include <stdio.h>

int main() {
    char ch;
    printf("���ĺ� �Ǵ� ����(0-9) �ϳ��� �Է��ϼ���: ");
    scanf(" %c", &ch);

    printf("'%c'�� �ƽ�Ű �ڵ� ���� %d �Դϴ�.\n", ch, (int)ch);

    return 0;
}
#include <stdio.h>

int main() {
    int A, B, C;
    printf("�� �� A, B, C�� �Է��ϼ���: ");
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
