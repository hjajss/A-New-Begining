#define _CRT_SECURE_NO_WARNINGS
char* reverseLeftWords(char* s, int n) {
    int i = 0;
    for (i = 0;s[i] != '\0';i++) {
        ;
    }
    char* arr = malloc(sizeof(s) * i * 2 + 1);
    strcpy(arr, s);
    strcat(arr, s);
    arr[n + strlen(s)] = '\0';
    return arr + n;
}

char* replaceSpace(char* s) {
    char* arr = malloc(sizeof(char) * 30000 + 1);
    int i = 0, j = 0;
    int len = strlen(s);
    for (i = 0;i < len;i++) {
        if (s[i] == ' ') {
            arr[j++] = '%';
            arr[j++] = '2';
            arr[j++] = '0';
        }
        else {
            arr[j++] = s[i];
        }
    }
    arr[j] = '\0';
    return arr;
}