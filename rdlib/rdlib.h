#ifndef RDLIB_H
#define RDLIB_H

#ifdef __cplusplus
extern "C" {
#endif

int printf(const char *format, ...);

int scanf(const char *format, ...);

int GetLength(char *input) {
    int i = 0;
    while (input[i] != '\0') {
        i++;
    }
    return i;
}



int IntLenght(int input) {
    int len = 0;

    if (input == 0) return 1;
    if (input < 0) input = -input;

    while (input != 0) {
        input /= 10;
        len++;
    }

    return len;
}

int EraseFirstNumber(int input) {
    return input % 10;
}

int EraseLastNumber(int input) {
    return input / 10;
}


#ifdef __cplusplus
}
#endif

#endif // RDLIB_H