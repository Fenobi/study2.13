#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h> 
//int get_max(int x, int y)
//{
//	int z = 0;
//	if (x > y)
//	{
//		z = x;
//	}
//	else
//		z = y;
//	return z;
//}
//int main()
//{
//	int a = 10;
//	int b = 20;
//	int max = get_max(a, b);
//	printf("%d\n", max);
//	return 0;
//}


////�������͵ĵط�д����void����ʾ������������κ�ֵ��Ҳ����Ҫ�����κ�ֵ
//void swap(int *pa, int *pb)
//{
//	int z = 0;
//	z = *pa;
//	*pa = *pb;
//	*pb = z;
//}
//int main()
//{
//	int a = 20;
//	int b = 10;
//	printf("����ǰ��a=%d b=%d\n", a, b);
//	swap(&a, &b);
//	printf("������a=%d b=%d\n", a, b);
//	return 0;
//}




//int main()
//{
//	char ch[] = "as13һ��";
//	char arr[] = { 'a','dfe','12','�ҵ�','\0'};
//	float a = 12.3l;
//	printf("%s\n", ch);
//	printf("%s\n", arr);
//	printf("%f\n", a);
//	return 0;
//}

//int main()
//{
//	char ch[] = "����sb";
//	int i = 1;
//	while (i <= 3)
//	{
//		char password[20];
//		scanf("%s", password);
//		if (strcmp(password, ch))
//		{
//			printf("�������,����������\n");
//			i++;
//		}
//		else
//		{
//			printf("������ȷ\n");
//			break;
//		}
//	}
//	return 0;
//}

//int main()
//{
//	int ch = 0;
//	while ((ch = getchar()) != EOF)
//	{
//		putchar(ch);
//	}
//
//	return 0;
//}


//#include <string.h>
//#include <windows.h>
//int main()
//{
//	char arr1[] = "abcdefggfedcba";
//	char arr2[] = "**************";
//	int left = 0;
//	int right = strlen(arr1) - 1;
//	while (right >= left)
//	{
//		arr2[left] = arr1[left];
//		arr2[right] = arr1[right];
//		left++;
//		right--;
//		
//		Sleep(500);
//		system("cls"); 
//		printf("%s\n", arr2);
//	}
//	return 0;
//
//}