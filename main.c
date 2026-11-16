#include <stdio.h>

int main(void)
{
    int input_number;
    long sum = 0;

    scanf("%d", &input_number);

    if (input_number < 0)
    {
        printf("NG");
        return 0;
    }

    for (int current_number = 1; current_number <= input_number; current_number++)
    {
        /* 3の倍数または5の倍数は数えない */
        if (current_number % 3 == 0 || current_number % 5 == 0)
        {
            continue;
        }

        /* 条件を満たす数の合計を求める */
        sum += current_number;
    }

    printf("%ld", sum);

    return 0;
}
