#include <stdio.h>

int main(void)
{
    char ch = 'A';
    printf("%c %d\n", ch, ch);

    char java[] = {'J', 'A', 'V', 'A', '\0'};
    printf("%s\n", java);

    char c[] = "C language";
    printf("%s\n", c);

    char csharp[5] = "C#";
    printf("%s\n", csharp);

    printf("%c%c\n",csharp[0], csharp[1]);

    return 0;
}