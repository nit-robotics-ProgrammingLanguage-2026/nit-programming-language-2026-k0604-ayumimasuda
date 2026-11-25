#include <stdio.h>

int main(void)
{
    int input_number;
    long total_sum = 0;

    scanf("%d", &input_number);

    if (input_number < 0)
    {
        printf("NG");
        return 0;
    }

    /* 1から入力値までの数を順番に調べる */
    for (int current_number = 1; current_number <= input_number; current_number++)
    {
        /* 3の倍数または5の倍数は合計に加えない */
        if (current_number % 3 == 0 || current_number % 5 == 0)
        {
            continue;
        }

        /* 条件を満たした数だけを加算する */
        total_sum += current_number;
    }

    printf("%ld", total_sum);

    return 0;
}