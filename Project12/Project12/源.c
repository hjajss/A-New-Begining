#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
//八进制转换为十进制
int main() {
	int n, num = 0;
	scanf("%d", &n);
	while (n != 0) {
		num = n % 10 + num * 8;
		n /= 10;
	}
	printf("%d\n", num);
	return 0;
}

//请你来实现一个 myAtoi(string s) 函数，使其能将字符串转换成一个 32 位有符号整数
//（类似 C / C++ 中的 atoi 函数）。
//函数 myAtoi(string s) 的算法如下：
//读入字符串并丢弃无用的前导空格
//检查下一个字符（假设还未到字符末尾）为正还是负号，读取该字符（如果有）。
//确定最终结果是负数还是正数。 如果两者都不存在，则假定结果为正。
//读入下一个字符，直到到达下一个非数字字符或到达输入的结尾。字符串的其余部分将被忽略。
//将前面步骤读入的这些数字转换为整数（即，"123" -> 123， "0032" -> 32）。
//如果没有读入数字，则整数为 0 。必要时更改符号（从步骤 2 开始）。
//如果整数数超过 32 位有符号整数范围[−231, 231 − 1] ，需要截断这个整数，使其保持在这个范围内。
//具体来说，小于 −231 的整数应该被固定为 −231 ，大于 231 − 1 的整数应该被固定为 231 − 1 。
//返回整数作为最终结果。
//#include <string.h>
//int myAtoi(char* s) {
//    int n = strlen(s);
//    int i = 0, m = 1, count = 0, flag = 0;
//    long num = 0;
//    for (i = 0;i < n;i++) {
//        if (s[i] == '-') {
//            m = -1;
//            flag++;
//        }
//        else if (s[i] == '+') {
//            flag++;
//        }
//        if ((s[i] == '-' || s[i] == '+') && flag > 1) {
//            break;
//        }
//        if (s[i] >= '1' && s[i] <= '9') {
//            count++;
//            num = 10 * num + (s[i] - '0');
//        }
//        else if (((s[i] >= 'a' && s[i] <= 'z') || s[i] == '.') && count == 0) {
//            break;
//        }
//        if ((s[i] < '1' || s[i]>'9') && count != 0) {
//            break;
//        }
//    }
//    num *= m;
//    if ((int)num == num) {
//        return num;
//    }
//    else {
//        if (num > 0) {
//            return (long)2147483647;
//        }
//        else {
//            return (long)(-2147483648);
//        }
//    }
//    return 0;
//}
//int main() {
//    char s[] = "21474836460";
//    long ret = myAtoi(s);
//    printf("%d\n", ret);
//    return 0;
//}

//将一个给定字符串 s 根据给定的行数 numRows ，以从上往下、从左到右进行 Z 字形排列。
//#include <string.h>
//比如输入字符串为 "PAYPALISHIRING" 行数为 3 时，排列如下：
//P   A   H   N
//A P L S I I G
//Y   I   R
//char* convert(char* s, int numRows) {
//    int n = strlen(s);
//    if (numRows == 1 || numRows >= n) {
//        return s;
//    }
//    int i = 0, j = 0, m = 0;
//    char* arr = (char*)malloc(sizeof(char) * (n+1));
//    for (i = 0;i < numRows;i++) {
//        for (j = i;j < n;j++) {
//            if (j % (2 * numRows - 2) == i || j % (2 * numRows - 2) == 2 * numRows - 2 - i) {
//                arr[m] = s[j];
//                m++;
//            }
//        }
//    }
//    arr[m] = '\0';
//    return arr;
//}
//
//int main() 
//{
//    int i = 0, num = 4;
//    char s[] = "PAYPALISHIRING";
//    int max = strlen(s);
//    char* arr = convert(s, num);
//    for (i = 0;i < max;i++) 
//    {
//        printf("%c", arr[i]);
//    }
//	return 0;
//}