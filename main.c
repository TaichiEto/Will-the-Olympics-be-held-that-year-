#include <stdio.h>

int main (void)
{
    int year, isOlympicYear = 0;
    printf("判定したい西暦年を入力してください。:");
    scanf("%d", &year);

    if (year % 4 == 0) 
    {
        isOlympicYear = 1;
    }

    if (year % 4 != 0 && year %2 == 0) 
    {
        isOlympicYear = 2;
    }

    if (isOlympicYear == 0) printf("%d年は オリンピックが開催されません。\n",year);
    if (isOlympicYear == 1) printf("%d年は 夏季オリンピックが開催されます。\n", year);
    if (isOlympicYear == 2) printf("%d年は 冬季オリンピックが開催されます。\n", year);
}