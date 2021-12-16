#include<stdio.h>

#include<math.h>
 
//int Add(int x, int y)//int add 表示最后会返回一个整型值 int x int y表示输入的两个参数也是整型值
//{
//	int z = 0;
//	z = x + y;
//	return z;//返回一个整型值
//}
//int main()
//{
//	int a = 10;
//	int b = 20;
//	int sum = Add(a, b);//这里表示调用了函数
//	printf("%d", sum);
//	return 0;
//
//
//
//
//

//int getmax(int x, int y)
//{
//	if (x > y)
//	
//		return x;
//
//
//	
//	else
//		return y;
//
//
//
//}

//
//void swap(int* x, int* y)
//{
//	int c = 0;
//	c = *x;
//	*x = *y;
//	*y = c;






	
	







//





//}
//int a = 10;
	//int b = 20;

	//swap(&a, &b);
	//printf("a=%d,b=%d", a, b);

//数组练习
//int bsearch(int arr[], int k,int sz)//注意是int arr[] 本质上是传址了 故在函数里不要直接对arr进行操作如s
//{
//	
//	int left = 0;
//	int right = sz - 1;
//
//	while (left <=right)//注意不能去掉等于号，因为当left right mid为同一个时找到了的话 
//		//如果去掉=，则当left right mid刚好等于时且等于k时就不会进循环了 比如7 这样有些就找不到了了
//	{
//		int mid = (left + right) / 2;
//		if (arr[mid] < k)
//		{
//			left = mid + 1;
//
//		}
//		else if (arr[mid] > k)
//		{
//			right = mid - 1;
//
//
//		}
//		else {
//			
//			return mid;
//		}
//	}
//
//	return -1;
//}
//
//

//void Add(int* p)
//{
//	(*p)++;//++的优先级最高，得加个括号才行
//
//
//
//}

//int ms(char* str)
//{
//	int count = 0;
//	while (*str != '\0')
//	{
//
//		count++;
//		str++;
//
//
//	}
//	return count;
//
//}

//阶乘之函数解决的方法
//int Facl(int n)
//{
//
//	if (n <= 1)
//		return 1;
//	else 
//	
//		return n * Facl(n - 1);
//
//
//}
//求fib数
//int Fib(int n)
//{
//
//	if (n <= 2)
//		return 1;
//	else
//		return Fib(n - 1) + Fib(n - 2);
//
//
//
//
//
//}

int main()
{
	//char arr1[] = "bit";
	//char arr2[20] = "###########";//表示20个字符都初始化为0
	//strcpy(arr2, arr1);
	//printf("%s\n", arr2);
	//char arr[] = "wcnmlgbd";
	//	memset(arr, '*', 5);
	//	printf("%s\n", arr);
	//数组练习

	//int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
	//int sz = sizeof(arr) / sizeof(arr[0]);
	//int k;
	//scanf_s("%d", &k);
	//int ret = bsearch(arr, k, sz);

	//if (ret == -1)
	//{
	//	printf("找不到指定的数字");
	//}
	//else
	//{
	//	printf("找到了，下标是%d\n",ret );//不清楚为什么不能直接用函数名了，直接用ret吧那
	//}


	
	//练习4
	//int num = 0;
	//Add(&num);
	//printf("%d\n", num);
	//Add(&num);
	//printf("%d\n", num);
	//Add(&num);
	//printf("%d\n", num);
	









	//递归练习
	//printf("hehe");
	//main();//这样就会不断打印hehe,最后是会栈溢出的  
	//练习依次打印1234

	//打印字符串长度
	//char arr[] = "bit";
	//int len = ms(arr);
	//printf("%d\n", len);



	//n的阶乘
	//int n = 0;
	//int ret = 0;
	//scanf_s("%d", &n);
	//ret = Facl(n);
	//printf("%d\n", ret);


	//fib数
	/*int n = 0; 
	int ret = 0; 
	scanf_s("%d", &n);
	ret = Fib(n); 
	printf("%d\n", ret);*/
return 0;




}