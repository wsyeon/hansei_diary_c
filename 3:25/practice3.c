#include <stdio.h>

void main() {
    char name[] = "KimHansei";
    int age = 18;
    char gender = 'M';
    int a[] = {100, 95, 80};

    printf("이름 : %s\n", name);
    printf("나이 : %d\n", age);
    printf("성별 : %c\n", gender);
    printf("국어 : %d점 \n영어 : %d점 \n수학 : %d점", a[0], a[1], a[2]);
}