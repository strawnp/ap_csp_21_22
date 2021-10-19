#include <stdio.h>

int main(void)
{
    int num[5];

    num[0] = 42;
    num[1] = 83;
    num[4] = 77;
    num[2] = num[4] - num[1];
    num[3] = num[0] / num[2];

    int garbage[42];

    printf("done\n");
}