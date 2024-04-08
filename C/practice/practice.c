#include <stdio.h>

int main() {
    int num = 10;

    // ���̺� ����
    label:
    printf("���� ���ڴ� %d�Դϴ�.\n", num);

    // num�� 0���� ũ�� ���̺��� �̵�
    if (num > 0) {
        num--;
        goto label;
    }

    return 0;
}