/*golf.c --高尔夫锦标赛记分卡*/
#include <stdio.h>
int main(void)
{
	int jane, tarzan, cheeta;
	//但是C完全没问题。赋值的顺序是从右往左:首先把86赋给jane,然后再赋给tarzan,最后赋给cheeta。
	cheeta = tarzan = jane = 68;
	printf("	    	cheeta 	tarzan 	jane\n");
	printf("First round score %4d %8d %8d\n", cheeta, tarzan, jane);
	return 0;
}
