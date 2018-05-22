/*post_pre.c -- 前缀和后缀*/
#include <stdio.h>
int main(void)
{
	int a = 1, b = 1;
	int a_post, pre_b;
	a_post = a++; // 后缀递增
	pre_b = ++b; // 前缀递增
	// a和b都递增了1，但是，a_post是a递增之前的值，而b_pre是b递增之后的值。这就是++的前缀形式和后缀形式的区别
	printf("a a_post    b    pre_b \n");
	printf("%1d %5d %5d %5d\n", a, a_post, b, pre_b);
	return 0;
}
