#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <string.h>


int main()
{
	int a ;
	printf("请输入年份");
	scanf("%d", &a);
	if (a % 400 == 0 || (a%4==0 && a%100!=0))
	{
		printf("yes\n");
	}
	else
	{
		printf("no\n");
	}
}



//int main()
//{
//	int a, b;
//	scanf("%d%d", &a, &b);
//	printf("%d\n", a + b);
//	return 0;
//}




//int main()
//{
//	int i,j;
//	char c;
//	scanf("%d", &i);
//	printf("i=%d\n", i);
//	scanf("%f", &j);
//	printf("c=%f\n", j);
//}




//int main()
//{
//	int i = 5;
//	float j = i / 2;
//	float k = (float)i / 2;
//	printf("j=%.5f   k=%f", j,k);
//}





//int main()
//{
//	char c = 'a';
//	printf("请输入需要转换的字符：");
//	c =  c- 32;
//	printf("转换后的字符是：%c",c);
//	
//}





//int main()
//{
//	char x = 'a';
//	printf("%d\n", x);
//	printf("%c\n", x);
//	printf("%c\n", 67);
//}



//int main()
//{
//	int a = 5;
//	int y = {0123};
//	float f = 3e-3;
//	float x = 3.1416;
//	printf("%f\n", 3.1416);
//	printf("%f\n", f);
//	printf("%d\b", y);
//}





//#define pi 3
//int main()
//{
//	int a, b;
//	scanf("%d%d", &a, &b);
//	printf("%d\n", a + b);
//
//}



//int main()
//{
//	int x = 1;
//	while (x < 10)
//	{
//		x++;
//		if (5 == x)
//			continue;
//		printf("%d", x);
//	}
//	return 0;
//}




//int main()
//{
//	int x = 1;
//	while(x <= 10)
//	{
//		printf("%d\n", x);
//		x++;
//	}
//	return 0;
//}



//int main()
//{
//	int day = 0;
//	printf("请输入日期：");
//	scanf("%d", &day);
//	
//	switch (day)
//	{
//	case 1:
//		printf("星期一\n");
//		break;
//	case 7:
//		printf("星期日\n");
//		break;
//	default:
//		printf("您的输入有误！");
//		break;
//	}
//	return 0;
//}



//int main()
//{
//	int x = 1;
//	while (x <= 100)
//	{
//		if (x % 2 == 1)
//			printf("%d\n是奇数",x);
//		x++;
//	}
//	return 0;
//}




//int main()
//{
//	int x=0;
//	for (x = 1; x < 100; x++)
//	{
//		if (x % 2 == 1)
//		{
//			printf("%d是奇数！\n", x);
//		}
//
//	}
//	return 0;
//
//}


//int main()
//{
//	int a = 0;
//	int b = 0;
//	printf("请输入数字：\n");
//	scanf("%d", &a);
//	b = a / 2;
//	if (0 == b)
//	{
//		printf("这个数是奇数。");
//	}
//	else
//	printf("这个数不是奇数。");
//	return 0;
//	
//}




//int main()
//{
//	int num = 4;
//	if (5=num)
//	{
//		printf("hehe");
//	}
//	return 0;
//}




//int main()
//{
//	int a = 0;
//	int x = 1;
//	int y = 10;
//	printf("longding:");
//	scanf("%d", &a);
//	if (a < 5)
//	{
//		return x;
//		printf("%d", x);
//	}
//	return y;
//	printf("%d", y);
//	return 0;
//}




//int main()
//{
//	int age = 0;
//	printf("请输入你的年龄：\n");
//	scanf("%d", &age);
//	if (age < 16)
//		printf("太小了");
//	else if (age < 18)
//		printf("未成年");
//	else
//		printf("已成年");
//	return 0;
//}





//struct Book
//{
//	char name[20];
//	short price;
//};
//
//int main()
//{
//	struct Book b1 = { "C语言程序设计", 55 };
//	struct Book* pb = &b1;
//	strcpy(b1.name, "c++");
//	printf("%s\n", (*pb).name);
//	printf("%d\n", (*pb).price);
//	printf("%s\n", pb->name);
//	printf("%d\n", pb->price);
//	return 0;
//}



//int sum(int a)
//{
//	int c = 0;
//	static int b = 3;
//	c += 1;
//	b += 2;
//	return (a + b + c);
//}
//int main()
//{
//	int i;
//	int a = 2;
//	for (i = 0; i < 5; i++)
//	{
//		printf("%d,", sum(a));
//	}
//}



//int main()
//{
//	int a = 10;
//	int* p = &a;
//	printf("%p\n", &a);
//	printf("%p\n", p);
//	return 0;
//}



//int main()
//{
//	unsigned int arr = -1;
//	printf("%d", arr);
//	return 0;
//}



//int main()
//{
//	int a = 10;
//	int b = 12;
//	int max;
//	max = (a > b ? a : b);
//	printf("%d", max);
//	return 0;
//}



//int main()
//{
//	int a = 6;
//	int b = 10;
//	int c = a && b;
//	printf("%d", c);
//	return 0;
//}


//int main()
//{
//	int a = (int)3.14;
//	return 0;
//}


//int main()
//{
//	int a = 10;
//	int b = --a;
//	printf("a=%d b=%d\n", a, b);
//	return 0;
//}




//int main()
//{
//	int a = 0;
//	int b = ~a;
//	printf("%d\n", b);
//	return 0;
//}





//int main()
//{
//	int a = 10;
//	int arr[] = { 1,2,3,4,5,6 };
//	printf("%d\n", sizeof(a));
//	printf("%d\n", sizeof(int));
//	printf("%d\n", sizeof(arr)/sizeof(arr[0]));
//	return 0;
//}





////输入两个数求最大值
//int main()
//{
//	int x = 0;
//	int y = 0;
//	int z = 0;
//	printf("math:");
//	scanf("%d,%d", &x,&y);
//	if (x > y)
//	{
//		z = x;
//		printf("bigest: %d", z);
//	}
//	else
//		printf("bigest: %d", y);
//	return 0;
//}



//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int i = 0;
//	while (i < 10)
//	{
//		printf("%d\n", arr[i]);
//		i++;
//	}
//	return 0;
//}





//int Add(int x, int y)
//{
//	int z = x + y;
//	return z;
//}
//
//int main()
//{
//	int num1 = 10;
//	int num2 = 20;
//	int sum = 0;
//	int a = 100;
//	int b = 200;
//	sum = Add(num1, num2);
//	printf("%d\n", sum);
//	sum = Add(a, b);
//	printf("%d\n", sum);
//
//	return 0;
//}



//int main()
//{
//	int line = 0;
//	printf("work !\n");
//	while (line < 200)
//	{
//		printf("do :%d\n",line);
//		line++;
//	}
//	if(line>=200)
//		printf("back home\n");
//	return 0;
//}




//int main()
//{
//	int input = 0;
//	printf("join us ?\n");
//	printf("yes or no (Y/N) >: ");
//	scanf("%d", &input);
//	if (input == 1)
//		printf("we need you !");
//	else
//		printf("you will ded");
//
//	return 0;
//}



//#include <stdio.h>
//int main()
//{
//	int max(int x, int y);
//	int a, b, c;
//	scanf("%d,%d", &a, &b);
//	c = max(a, b);
//	printf("max=%d\n", c);
//	return 0;
//}
//int max(int x, int y)
//{
//	int z;
//	if (x > y)z = x;
//	else z = y;
//	return z;
//}

//#include <stdio.h>

//int main()
//{
//	printf("%d\n", sizeof(char));
//	printf("%d\n", sizeof(short));
//	printf("%d\n", sizeof(int));
//	printf("%d\n", sizeof(long));
//	printf("%d\n", sizeof(long long));
//	printf("%d\n", sizeof(float));
//	printf("%d\n", sizeof(double));
//	return 0;
//}


//int main()
//{
//	int num1 = 0;
//	int num2 = 0;
//	int sum = 0;
//	scanf("%d%d", &num1, &num2);
//	sum = num1 + num2;
//	printf("sum=%d\n", sum);
//	return 0;
//}


//#include <stdio.h>
//
//int main()
//{
//	int num1 = 0;
//	int num2 = 0;
//	printf("num1:");
//	scanf("%d", &num1);
//	printf("num2:");
//	scanf("%d", &num2);
//	int sum = num1 + num2;
//	printf("sum=%d", sum);
//	return 0;
//}


//#include <stdio.h>
//
//enum Color
//{
//	red,
//	yellow,
//	blue,
//};
//
//int main()
//{
//	enum Color c = blue;
//	printf("%d\n", c);
//	enum Color y = yellow;
//	printf("%d\n", y);
//	enum Color r = red;
//	printf("%d", r);
//	return 0;
//}


//#include <stdio.h>
//#include <string.h>
//int main()
//{
//	char arr1[] = "abc";
//	char arr2[] = { 'a','b','c'};
//	printf("%d\n", strlen(arr1));
//	printf("%d\n", strlen(arr2));
//	
//
//	return 0;
//}



