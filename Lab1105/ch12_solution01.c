#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
    char ch;

    printf("문자를 입력하시오: ");
    scanf("%c", &ch);

    printf("아스키 코드값 = %d\n", ch);
    return 0;
}