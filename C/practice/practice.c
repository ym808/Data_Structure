#include <stdio.h>

int main() {
    int num = 10;

    // 레이블 설정
    label:
    printf("현재 숫자는 %d입니다.\n", num);

    // num이 0보다 크면 레이블로 이동
    if (num > 0) {
        num--;
        goto label;
    }

    return 0;
}