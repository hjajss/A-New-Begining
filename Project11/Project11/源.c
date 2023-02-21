#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
//给你一个字符串 s，找到 s 中最长的回文子串。
//如果字符串的反序与原始字符串相同，则该字符串称为回文字符串。
#include <string.h>
char* longestPalindrome(char* s) {
    int length = strlen(s);
    int left = 0, right = 0, L = 0, m = 0, i = 0, j = 0;
    for (i = 0;i < length - 1;i++) {
        for (j = i + 1;j < length;j++) {
            left = i;
            right = j;
            if (s[left] == s[right]) {
                while ((++left) <= (--right)) {
                    if (s[left] != s[right]) {
                        break;
                    }
                }
                if (left > right && L < j - i + 1) {
                    L = j - i + 1;
                    m = i;
                }
            }
        }
    }
    if (L == 0) {
        s[1] = '\0';
        return s;
    }
    char* arr = (char*)malloc(sizeof(char) * (L + 1));
    int k = 0;
    for (k = 0;k < L;k++) {
        arr[k] = s[m];
        m++;
    }
    arr[L] = '\0';
    return arr;
}
int main() {
    char s[] = "ac";
    char* ret = longestPalindrome(s);   
    int i;
    for (i = 0;i < (signed int)strlen(ret);i++)
    {
        printf("%c", ret[i]);
    }
}

//int main()
//{
//	int a[5] = { 1,2,3,4,5 };
//	int* ptr = (int*)(&a + 1);
//	printf("%d,%d\n", *(a + 1), *(ptr - 1));
//	return 0;
//}