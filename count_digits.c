#include <stdio.h>

int count_digits(char* str) {
    int count = 0;
    int i = 0;
    while (str[i] != '\0') {
        if (str[i] >= '0' && str[i] <= '9') {
            count++;
        }
        i++;
    }
    return count;
}

int main(int argc, char** argv) {
    if (argc < 2) {
        printf("Usage: %s <string>\n", argv[0]);
        return 1;
    }
    printf("String contains %d digits, right???\n", count_digits(argv[1]));
    return 0;
}