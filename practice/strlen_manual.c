#include <stdio.h>

int my_strlen(const char *s) {
    int len = 0;
    while (s[len] != '\0') len++;
    return len;
}

int main(void) {
    char s[] = "Hello";
    printf("%d\n", my_strlen(s));
    return 0;
}
