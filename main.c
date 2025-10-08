#include <stdio.h>

int lettera(char c)
{
    if (c >= 'a' && c <= 'z' || c >= 'A' && c <= 'Z') return 1;
    return 0;
}

int main(void) {
    printf("Hello, World!\n");
    return 0;
}