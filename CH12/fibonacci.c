#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

// 전역변수
int count;
// 함수원형
void fibonacci(int prev_number, int number);

// return 0를 하기때문에 int로 변경했습니다.
int main() {
    // 자동 지역변수
    auto int prev_number = 0, number = 1;

    printf("피보나츠를 몇 개 구할까요?(3 이상) >> ");
    // 전역변수를 표준입력으로 저장
    scanf("%d", &count);
    if (count <= 2)
        return 0;

    printf("1 ");
    fibonacci(prev_number, number);
    printf("\n");
    return 0;
}

void fibonacci(int prev_number, int number)
{
    // 정적 지역변수 1
    static int i = 1;
    // 전역변수 count와 함수의 정적 지역변수를 비교
    while (i++ < count)
    {
        int next_num = prev_number + number;
        prev_number = number;
        number = next_num;
        printf("%d ", next_num);
        fibonacci(prev_number, number);
    }
}
