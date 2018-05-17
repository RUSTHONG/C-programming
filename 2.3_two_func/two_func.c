//*two_func.c -- 一个文件中包含两个函数*/
#include <stdio.h>
void butler(void); /* ANSI/ISO C函数原型，告知编译器在程序中要使用该函数*/
int main(void)
{
	printf("I will summon the butler function.\n");
	butler();/*函数调用*/
	printf("Yes. Bring me some tea and writeable DVDs.\n");
	return 0;
}

/*第一个void表示函数没有返回值，第二void表示函数不带参数*/
void butler(void) /* 函数定义开始 */
{
	printf("You rang, sir?\n");
}
