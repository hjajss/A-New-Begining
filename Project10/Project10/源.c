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

//海滩上有一堆桃子，五只猴子来分。第一只猴子把这堆桃子平均分为五份，多了
//一个，这只 猴子把多的一个扔入海中，拿走了一份。第二只猴子把剩下的桃子
//又平均分成五份，又多了 一个，它同样把多的一个扔入海中，拿走了一份，第
//三、第四、第五只猴子都是这样做的， 问海滩上原来最少有多少个桃子？
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