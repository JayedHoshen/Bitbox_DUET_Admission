// Count the digits of a given number in C Language using recursive

#include <stdio.h>

int countDigits(num);

int main()
{
    int num, count;

    printf("Enter a number = ");
    scanf("%d", &num);

    count = countDigits(num);

    printf("Total digits is = %d\n", count);

    return 0;
}

int countDigits(int num) {
    static int count = 0;
    if (num != 0) {
        count++;
        countDigits(num/10);
    }
    return count;
}
