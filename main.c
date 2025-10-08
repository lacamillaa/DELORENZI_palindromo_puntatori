#include <stdio.h>

int lettera(char c)
{
    if (c >= 'a' && c <= 'z') return -1;
    if (c >= 'A' && c <= 'Z') return 1;
    return 0;
}

int comp(char c1, char c2) {
    if (lettera(c1) == lettera(c2) && c1 == c2) return 1;
    if (lettera(c1) && lettera(c2) && (c1 + ' ' == c2 || c2 + ' ' == c1)) return 1;
    return 0;
}

int main(void) {
    printf("Hello, World!\n");
    return 0;
}