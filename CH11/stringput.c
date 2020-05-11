#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
    char name[20], dept[20];
    
    print("%s", "학과 입력 >> ");
    scanf("%s", dept);
    printf("%s", "이름 입력 >> ");
    scasnf("%s", name);
    printf("출력: %10s %10s\n", dept, name);

    return 0;
}