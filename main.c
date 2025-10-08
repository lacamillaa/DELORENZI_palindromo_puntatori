#include <stdio.h>
#include <string.h>

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

int palindromo(char* s) {
    char* first = s;
    char* last = s + strlen(s); // => 0
    int cmp = 1;
    while (first < last && cmp) {
        while (!lettera(*first)) first++;
        while (!lettera(*last)) last--;
        cmp *= comp(*first, *last);
        first++;
        last--;
    }
    return cmp;
}

int main(void) {
    char s[] = "Annalisa";
    puts(s);
    if (palindromo(s)) {
        printf("e' un palindromo\n");
    } else {
        printf("non e' un palindromo\n");
    }
    return 0;
}