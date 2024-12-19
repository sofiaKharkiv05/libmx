#include "libmx.h"

char* mx_strndup(const char *s1, size_t n) {
    size_t length = mx_strlen(s1);

    if (n < length) {
        length = n;
    }
    char *dup = (char*)malloc(length+1);
    if (dup) {
        mx_strncpy(dup, s1, length);
    }
    return dup;
}


