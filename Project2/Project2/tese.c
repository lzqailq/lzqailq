//先写出主函数
#define _CRT_SECURE_NO_WARNINGS 1      //避免一些安全问题
#include <stdio.h>
//int main() 
//{	
//	int t = "fdsk";
//	printf(t);
//	return 0;
//}



//写一个代码求俩个整数的和
int main() {


	int a = 0;
	int b = 0;
	int sum = 0;
	scanf("%d %d", &a, &b);   //输入函数
	sum = a + b;
	printf("sum = %d\n", sum);
	return 0;
}
