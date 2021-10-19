#include <cs50.h>
#include <stdio.h>

int main(void)
{
    int num = 42;                                   // 4 bytes
    char letter1 = 'A';                             // 1 byte
    char letter2 = 'B';                             // 1 byte
    int nums[3] = { 1, 2, 3 };                      // 3 bytes
    string word = "hello";                          // 6 bytes
    string school = "JHS";                          // 4 bytes
    char motto[4] = { 'A', 'M', 'D', 'G' };         // 4 bytes
    bool answer = true;                             // 1 byte

    printf("%p\n", &num);
    printf("%p\n", &letter1);
    printf("%p\n", &letter2);
    printf("%p\n", &nums);
    printf("%p\n", &word);
    printf("%p\n", &school);
    printf("%p\n", &motto);
    printf("%p\n", &answer);
}