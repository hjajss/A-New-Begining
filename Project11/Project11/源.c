#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
//����һ���ַ��� s���ҵ� s ����Ļ����Ӵ���
//����ַ����ķ�����ԭʼ�ַ�����ͬ������ַ�����Ϊ�����ַ�����
#include <string.h>
char* longestPalindrome(char* s) {
    int length = strlen(s);
    if (length == 0) {
        return NULL;
    }
    if (length == 1) {
        return s;
    }
    int left = 0, right = 0, L = 0, m = 0, i = 0, j = 0, flag = 0;
    char* arr = (char*)malloc(sizeof(char) * length);
    for (i = 0;i < length - 1;i++) {
        for (j = i + 1;j < length;j++) {
            left = i;
            right = j;
            if (s[left] == s[right]) {
                flag = 1;
                if (L >= right - left + 1) {
                    break;
                }
                while ((++left) <= (--right)) {
                    if (s[left] != s[right]) {
                        break;
                    }
                }
                if (left > right) {
                    L = j - i + 1;
                    m = i;
                    break;
                }
            }
        }
    }
    if (flag == 0) {
        s[1] = '\0';
        return s;
    }
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