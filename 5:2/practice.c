#include <stdio.h>
int main()
{
    int a;
    int b;
    int math;

    printf("사칙연산에 사용될 두 수의 값을 입력해주세요 : ");
    scanf("%d", &a);
    scanf("%d", &b);
    printf("사용활 사칙연산 선택하기 > 더하기(1), 빼기(2), 곱하기(3), 나누기(4), 전부 다(5) : ");
    scanf("%d", &math);
    switch (math)
    {
    case 1:
        printf("%d + %d = %d\n", a, b, a + b);
        break;
    case 2:
        printf("%d - %d = %d\n", a, b, a - b);
        break;
    case 3:
        printf("%d * %d = %d\n", a, b, a * b);
        break;
    case 4:
        printf("%d / %d = %d\n", a, b, a / b);
        break;

    case 5:
        printf("%d + %d = %d\n", a, b, a + b);
        printf("%d - %d = %d\n", a, b, a - b);
        printf("%d * %d = %d\n", a, b, a * b);
        printf("%d / %d = %d\n", a, b, a / b);
        break;

    default:
        printf("1~4번 사이에서 선택해주세요.");
    }
}