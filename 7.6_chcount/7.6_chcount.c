// chcount.c -- 使用逻辑与运算符
// 计算输入的一行句子中除单引号和双引号以外其他字符的数量
// 使用逻辑运算符,并使用句点(.)标识句子的末尾
#include <stdio.h>
#define PERIOD '.'
int main(void)
{
	char ch;
	int charcount = 0;
	while ((ch = getchar()) != PERIOD)
	{
		if(ch != '"'  &&ch != '\'')
			charcount++;
	}
	printf("There are %d non-quote characters.\n", charcount);
	return 0;
}
