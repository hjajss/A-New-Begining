#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>


//int lengthOfLongestSubstring(char* s) {
//    int count = 0, length = 0, j = 0, i = 0;
//    while (s[count])
//    {
//        for (i = j;i < count;i++)
//        {
//            if (s[i] == s[count])
//            {
//                j = i + 1;
//                break;
//            }
//        }
//        count++;
//        if (count - j> length)
//            length = count - j;
//    }
//    return length;
//}
//int main()
//{
//    char s[] = "abcabcbb";
//    int ret = lengthOfLongestSubstring(s);
//    printf("%d\n", ret);
//    return 0;
//}

//��̲����һ�����ӣ���ֻ�������֡���һֻ���Ӱ��������ƽ����Ϊ��ݣ�����
//һ������ֻ ���ӰѶ��һ�����뺣�У�������һ�ݡ��ڶ�ֻ���Ӱ�ʣ�µ�����
//��ƽ���ֳ���ݣ��ֶ��� һ������ͬ���Ѷ��һ�����뺣�У�������һ�ݣ���
//�������ġ�����ֻ���Ӷ����������ģ� �ʺ�̲��ԭ�������ж��ٸ����ӣ�
//int main()
//{
//	int i = 0, j = 1, peach;
//	while (i < 5)
//	{
//		peach = 4 * j;
//		for (i = 0;i < 5;i++)
//		{
//			if (peach % 4 != 0)
//				break;
//			peach = peach / 4 * 5 + 1;
//		}
//		j++;
//	}
//	printf("%d\n", peach);
//	return 0;
//}

//int a = 0;
//int* p = &a;
//int** pp = &p;