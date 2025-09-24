#include "rdlib/rdlib.h"

int main() {
    printf("enter something :)\n");
    char input[100];
    scanf("%99s", input);
    printf("you entered: %s\n", input);
    printf("length: %d\n", GetLength(input));
    return 0;
}
