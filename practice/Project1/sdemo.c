#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <string.h>
#include <stdlib.h>



//结构体指针
struct student
{
	int num;
	char name[20];
	char sex;
};

int main()
{
	struct student s = { 1001,"lele","m" };
	struct student* p;
	p = &s;
	printf("%d %s %c\n", (*p).num, (*p).name, (*p).sex);
	printf("%d %s %c\n", p->num, p->name, p->sex);//指针的成员选择
	//结构体初始化
	struct student sarr[3] = { 1001,"lele",'m',1005,"lili",'f',1007,"ouou",'m' };
	p = sarr;
	int num;
	printf("---------------------\n");
	num = p->num++;
	printf("num=%d p->num=%d\n", num, p->num);
	num = p++->num;
	printf("num=%d p->num=%d\n", num, p->num);
	return 0;
}




////结构体
////结构体所占空间是68个字节，因为存在对齐，对齐的目的是为了提高CPU访问内存的效率
//struct student
//{
//	int num;
//	char name[20];
//	char sex;
//	int age;
//	float score;
//	char addr[30];
//};
//
//int main()
//{
//	struct student s = { 1001,"lele",'m',18,59.5,"ShangHai" };
//	struct student sarr[3];
//	printf("%d %s %c %d %5.2f %s\n", s.num,s.name,s.sex,s.age,s.score,s.addr);
//	int i;
//	for (i = 0; i < 3; i++)
//	{
//		scanf("%d%s %c%d%f%s\n", &sarr[i].num, &sarr[i].name, &sarr[i].sex, &sarr[i].age, &sarr[i].score, &sarr[i].addr);		
//	}
//	for (i = 0; i < 3; i++)
//	{
//		printf("%d %s %c %d %f %s\n", sarr[i].num, sarr[i].name, sarr[i].sex, sarr[i].age, sarr[i].score, sarr[i].addr);
//	}
//	return 0;
//}



////走台阶
//int step(int x)
//{
//	if (x == 1 || x == 2)
//	{
//		return x;
//	}
//	return step(x - 1) + step(x - 2);
//}
//
//int main()
//{
//	int i,g;
//	scanf("%d", &i);
//	g=step(i);
//	printf("fangfa=%d", g);
//	return 0;
//}


//int main()
//{
//	int i;
//	char c;
//	char* p;
//	scanf("%d", &i);
//	p = (char*)malloc(i);
//	scanf("%c", &c);//消除\n
//	gets(p);
//	puts(p);
//	return 0;
//}


//void change(int* x)
//{
//	*x = *x / 2;
//	//return x;
//}
//
//int main()
//{
//	int i;
//	scanf("%d", &i);
//	change(&i);
//	printf("i=%d", i);
//	return 0;
//}



////递归调用(函数自己调用自己）
//int f(int n)
//{
//	if (1 == n)
//	{
//		return 1;
//	}
//	return n * f(n - 1);
//}
//
//int main()
//{
//	int n = 5;
//	int result = f(n);
//	printf("result=%d\n", result);
//	return 0;
//}




//int i = 10;//全局变量，在函数外定义的变量叫全局变量
//
//void print(int a)
//{
//	printf("print i=%d\n", i);
//}
//
//int main()
//{
//	printf("mian i=%d\n", i);
//	i = 5;
//	print(i);
//	return 0;
//}





////字符指针与字符数组的初始化
//int main()
//{
//	char* p = "hello";
//	char c[] = "hello";
//	p[0] = 'H';//不可对常量区数据进行修改
//	c[0] = 'H';
//	printf("p[0]=%c\n", p[0]);
//	printf("c[0]=%c\n", c[0]);
//	p = "world";//将字符串world的地址赋给p
//	//c = "world";//非法
//	puts(p);
//	return 0;
//}


//int main()
//{
//	int a;
//	char* p;
//	scanf("%d", &a);
//	p = (char*)malloc(a);
//	char b;
//	scanf("%c", &b);
//	gets(p);
//	puts(p);
//	return 0;
//}



////栈空间与堆空间的差异
//char* print_stack()
//{
//	char c[17] = "I am print_stack";
//	puts(c);
//	return c;
//}
//
//char* print_malloc()
//{
//	char* p = (char*)malloc(30);
//	strcpy(p, "I am print_malloc");
//	puts(p);
//	return p;
//}
//
//int main()
//{
//	char* p;
//	p = print_stack();//栈空间会随着函数执行结束而释放
//	//puts(p);
//	p = print_malloc;//堆空间不会虽子函数的结束而释放，必须自己free
//	puts(p);
//	return 0;
//}




////指针与动态内存申请
//int main()
//{
//	int i;
//	scanf("%d", &i);
//	char* p;
//	char* p1;
//	p = (char*)malloc(i);//malloc 申请空间的单位是字节
//	strcpy(p, "malloc success"); 
//	puts(p);//打印
//	free(p);//释放空间
//	p = NULL;//如果不把p的值为NULL，p为野指针
//	return 0;
//}




////指针与一维数组
////数组名作为实参传递给予子函数时，是弱化为指针的
//void change(char *d)
//{
//	*d='H';
//	d[1] = 'E';
//}
//int main()
//{
//	char c[10] = "hello";
//	puts(c);
//	change(c);
//	puts(c);
//	return 0;
//}




////指针的自增自减运算符
//int main()
//{
//	int a[3] = { 2,7,8 };
//	int* p;
//	int j;
//	p = a;
//	j = *p++;//j=*p;p++
//	printf("a[0]=%d,j=%d,*p=%d\n", a[0], j, *p);
//	j = p[0]++;//j=p[0];p[0]++
//	printf("a[0]=%d,j=%d,*p=%d\n", a[0], j, *p);
//	return 0;
//}




////指针偏移
//int  main()
//{
//	int a[5] = { 1,2,3,4,5 };
//	int* p;
//	p = a;
//	printf("*p=%d\n",*p);
//	for (int i = 0; i < 5; i++)
//	{
//		printf("%d\n", *(p + i));
//	}
//	return 0;
//}




//指针传递
//void change(int *j)
//{
//	*j = 5;
//}
//int main()
//{
//	int i = 10;
//	printf("%d\n", i);
//	change(&i);
//	printf("%d\n", i);
//}



//int main()
//{
//	char c[100], d[100];
//	gets(c);
//	int i, j;
//	for (i = strlen(c) - 1, j = 0; i >= 0; i--, j++)
//	{
//		d[j] = c[i];
//	}
//	d[j] = '\0';
//	int t = strcmp(c, d);
//	if (t < 0)
//	{
//		printf("%d", -1);
//	}
//	else if (t > 0)
//	{
//		printf("%d", 1);
//	}
//	else
//	{
//		printf("%d", 0);
//	}
//	return 0;
//}



//int main()
//{
//	{
//		int n, a[100];
//		scanf("%d", &n);
//		for (int i = 0; i < n; i++)
//		{
//			scanf("%d", &a[i]);
//		}
//		int c = 0;
//		for (int i = 0; i < n; i++)
//		{
//			if (a[i] == 2)
//			{
//				c++;
//			}
//		}
//		printf("%d", c);
//	}
//}



//int main()
//{
//	int a, b, c, d, e = 0;
//	for (a = 1; a <= 9; a++)
//	{
//		for (b = 1; b <= 19; b++)
//		{
//			for (c = 1; c <= 40; c++)
//			{
//				for (d = 1; d <= 40; d++)
//				{
//					if (a * 10 + b * 5 + c * 2 + d == 100 && a + b + c + d == 40)
//					{
//						e++;
//					}
//				}
//			}
//		}
//	}
//	printf("%d\n", e);
//	return 0;
//}




//int main()
//{
//	int n,x=1,y=1;
//	scanf("%d", &n);
//	while (n>=x)
//	{
//		y = x * y;
//		x++;
//	}
//	printf("%d", y);
//	return 0;
//}



//int main()
//{
//	char c[20];
//	int i = 5;
//	int* p=&i;
//	gets(c);
//	puts(c);
//	printf("i=%d\n", i);
//	printf("*p=%d\n", *p);
//}


//int main()
//{
//	char c[20] = "wangdao";
//	printf("c内字符长度：%d\n", strlen(c));
//	char d[20];
//	strcpy(d, "study");
//	puts(d);
//	int a = strcmp("hello", "how");
//	printf("两个字符比较后结果：%d\n", a);
//	strcat(c, d);
//	puts(c);
//}


//int main()
//{
//	char c[20];
//	gets(c);
//	puts(c);
//	return 0;
//}



//void print(char x[])
//{
//	int i = 0;
//	while (x[i] != 0)
//	{
//		//x[0] = x[0] - 32;
//		printf("%c", x[i]);
//		i++;
//	}
//	x[0] = x[0] - 32;
//	printf("\n");
//}
//int main()
//{
//	char c[10] = "hello";
//	print(c);
//	printf("%s", c);
//	return 0;
//}



//void print(int x[],int len)
//{
//	int i;
//	for (i = 0; i < len;i++)
//	{
//		printf("a[%d]=%d\n", i, x[i]);
//	}
//	x[1] = 9;
//}
//int main()
//{
//	int j = 10;
//	int a[10] = {1,2,3,4,5};
//	char x[20] = { 0 };
//	char y[20];
//	scanf("%s%s", &x,y);
//	printf("%s-----%s\n", x,y);
//	//printf("%d", a[5]);
//	print(a,7);
//	return 0;
//}




//int main()
//{
//	int b,a = 1;
//	b = a % 10;
//	printf("%d", b);
//}

//数字反转判断
//int main()
//{
//	int a, b, tmp, x;
//	scanf("%d", &a);
//	x = a;
//	b = 0;
//	while (a)
//	{
//		tmp = a % 10;
//		b = b * 10 + tmp;
//		a = a / 10;
//	}
//	if (x == b)
//	{
//		printf("yes\n");
//	}
//	else 
//	{
//		printf("no\n");
//	}
//	return 0;
//}

//int main()
//{
//	int y,f,z;
//	printf("请输入对称数：");
//	scanf("%d", &y);
//	f = 0;
//		while (y)
//		{
//			z = y % 10;
//			f = f * 10 + z;
//			y = y / 10;
//		}
//		if (y == f)
//		{
//			printf("yes\n");
//		}
//		else
//		{
//			printf("no\n");
//		}
//	return 0;
//}



//int main()
//{
//	int x, y;
//	for (x = 1, y = 0; x <= 100; x++)
//	{
//		if (x%2==0)
//		{
//			continue;
//		}
//		y = y + x;
//	}
//	printf("%d\n%d", y,x);
//}



//int main()
//{
//	int x=1, y=0;
//	while (x <= 100)
//	{
//		y = y + x;
//		x++;
//	}
//	printf("%d", y);
//}



//int main()
//{
//	int i;
//	while (scanf("%d", &i) != EOF)
//	{
//		
//		if (i > 0)
//		{
//			printf("%d bigger than 0\n",i);
//		}
//		else
//		{
//			printf("%d not bigger than 0\n",i);
//		}
//	}
//}




//int main()
//{
//	int y;
//	printf("请输入年份：");
//	scanf("%d", &y);
//	if ((y % 4 == 0 && y % 100 != 0) || y % 400 == 0)
//	{
//		printf("%d是闰年", y);
//	}
//	else
//	{
//		printf("不是闰年");
//	}
//}




//int main()
//{
//	int a;
//	printf("请输入65-122之间的数字：");
//	scanf("%d", &a);
//	if (a >= 65 && a <= 122)
//	{
//		printf("%c", a+32);
//	}
//	else
//	{
//		printf("对不起您的输入有误！\n");
//	}
//	return 0;
//}



//int main()
//{
//	char c;
//	while((c = getchar()) != EOF)
//	{
//		printf("%c", c);
//	}
//}



//int main()
//{
//	int i, j = 5;
//	i = !!j;
//	printf("i=%d", i);
//	return 0;
//}



//int main()
//{
//	int a = 8;
//	if (3 < a && a < 10)
//	{
//		printf("a in 3-10\n");
//	}
//	else
//	{
//		printf("sorry");
//	}
//
//
//	float f = 234.56;
//	if (f-234.56>-0.0001&&f-234.56<0.0001)
//	{
//		printf("yes");
//	}
//	else
//	{
//		printf("no");
//	}
//}




//int main()
//{
//	int a = 4 + 5 * 2 - 6 / 3 + 11 % 4;
//	printf("%d\n", a);
//	scanf("%d", &a);
//	printf("a=%d\n", a);
//	while (a!=0)
//	{
//		printf("%d", a % 10);
//		a = a / 10;
//	}
//}



//int main()
//{
//	char a, b, c;
//	a = 'ab';
//	b = 'b';
//	c = 'c';
//	putchar(a);
//	putchar('\b');
//	putchar(b);
//	putchar(c);
//	putchar('\n');
//	system("pause");
//}




//int main()
//{
//	printf("number:%-10d,score:%.3f",34, 95.5);
//}



//int main()
//{
//	int i;
//	char c;
//	float f;
//	printf("请输入学号：");
//	scanf("%d", &i);
//	printf("请输入性别：");
//	scanf(" %c", &c);
//	printf("请输入分数：");
//	scanf("%f", &f);
//	printf("学号：%d\n性别：%c\n分数：%f\n", i, c, f);
//	return 0;
//}




//int main()
//{
//	int i;
//	while (rewind(stdin),scanf("%d", &i)!=EOF)
//	{
//		printf("i=%d\n", i);
//	}
//	return 0;
//}





//int main()
//{
//	int a ;
//	printf("请输入年份");
//	scanf("%d", &a);
//	if (a % 400 == 0 || (a%4==0 && a%100!=0))
//	{
//		printf("yes\n");
//	}
//	else
//	{
//		printf("no\n");
//	}
//}



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



