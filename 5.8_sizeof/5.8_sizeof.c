//sizeof.c -- 使用sizeof运算符
#include <stdio.h>
int main(void)
{
	int n = 0;
	// C 头文件系统可以使用 typedef把 size_t 作为 unsigned int 或unsigned long的别名。这样，在使用size_t类型时，编译器会根据不同的系统替换标准类型
	size_t intsize;
	intsize = sizeof(int);
	printf("n = %d, n has %zd bytes; all ints have %zd bytes.\n", n, sizeof n, intsize);
	return 0;
}
