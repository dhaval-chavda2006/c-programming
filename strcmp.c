//compare two string

#include <stdio.h>
#include <string.h>

int main() {
    char str1[20] = "apple";
    char str2[20] = "banana";

    int result = strcmp(str1, str2);

    if (result == 0) {
        printf("The strings are equal.\n");
    } else if (result < 0) {
        printf("str1 ('%s') is lexicographically smaller than str2 ('%s').\n", str1, str2);
    } else {
        printf("str1 ('%s') is lexicographically greater than str2 ('%s').\n", str1, str2);
    }

    return 0;
}
