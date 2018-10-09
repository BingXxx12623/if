//关于悬空else的匹配情况
//一般情况之下出现多个if,以及1个else,它的匹配规则是,与最近的if相匹配
//下面两个程序,我有一个疑问在if不加{}的情况 之下它的作用范围是多大
//经过调试后发现在第一个程序之中 
//没有输出任何东西,说明它没有进入条件语句
//经过调试第二个程序之后,也没有输出任何内容
//足以说明,if语句在没有在后面加大括号的情况下,它的作用域会将程序后面的内容也包含进去
//#include<stdio.h>
//#include<windows.h>
//int main()
//{
//	int a = 0;
//	int b = 2;
//	if (a == 1)
//		if (b == 2)
//			printf("hehe\n");
//		else
//			printf("haha\n");
//	system("pause");
//	return 0;
//}
//#include<stdio.h>
//#include<windows.h>
//int main()
//{
//	int a = 1;
//	int b = 2;
//	if (a == 0)
//		if (b == 2)
//			printf("它的过程是什么样的呐");
//	system("pause");
//	return 0;
//}
////多个if语句
////多分支至少有三个分支,这三个分支的内容分别是
////分支1:滚,你不配成为一个伟大的程序员
////分支2:做的不错,坚持下去,你会越来越棒
////分支3:兄弟,未来一切都是你的
////#include<stdio.h>
////#include<windows.h>
////int main()
////{
////	int coding = 0;
////	printf("你有女朋友吗?    (选择1或者0),如果你不喜欢女的,请选择-1");
////	scanf_s("%d", &coding);
////	if (coding == 1)
////	{
////		printf("滚,你不配成为一个伟大的程序员\n");
////	}
////	 if (coding == 0);
////	{
////		printf("做的不错,坚持下去,你会越来越棒\n");
////	}
////	 if (coding == -1)
////	{
////		printf("兄弟,未来一切都是你的\n");
////	}
////	system("pause");
////	return 0;
////}
////多分支块if语句
//#include<stdio.h>
//#include<windows.h>
//int main()
//{
//	int coding = 0;
//	printf("你有女朋友吗?    (选择1或者0),如果你不喜欢女的,请选择-1");
//	scanf_s("%d", &coding);
//	if (coding == 1)
//	{
//		printf("滚,你不配成为一个伟大的程序员\n");
//	}
//	else if (coding == 0)
//	{
//		printf("做的不错,坚持下去,你会越来越棒\n");
//	}
//	else if(coding==-1)
//	{
//		printf("兄弟,未来一切都是你的\n");
//	}
//	system("pause");
//	return 0;
//}
#include<stdio.h>
#include<windows.h>
int main()
{
	int a = 1;
	if (a = 5)
	{
		printf("非0为真,这个段内容还真的输出了!!");
	}
	system("pause");
	return 0;
}