char *_strcpy(char *dest, char *src) {
    char *ptr = dest;
    while (*src != '\0') {
        *dest = *src;
        dest++;
        src++;
    }
    *dest = '\0'; // Add the null terminator
    return ptr;
}

