#include <stdio.h>
//素数是除了1和它本身之外，无法被其他自然数整除的数
#pragma warning (disable:4996)
int main()
{
	for (int i = 100; i <= 200;i++) {
		int j = 2;  //j若写到for循环内，j的生命周期便仅仅局限于第二个for循环
		for (; j <= i; j++) {     //跳出第二个for循环j便会被释放
			if (i % j == 0) {
				break;
			}
		}
		if (i == j) {            //如果条件为i%j！=0，那么break跳出的数会与i取余
			printf("%d ", i);    //一旦取到余数！=0的数时，便会打印i
		}
	}
	return 0;
}




#include <stdio.h>
int main()
{
	int Min = 0, Max = 0;
	printf("请输入两个数字，以空格间隔:");
	scanf("%d %d", &Min, &Max);
	printf("%d~%d之间的素数为：", Min, Max);
	for (Min; Min <= Max; Min++) {
		int i = 2;
		for (; i <= Min; i++) {
			if (Min % i == 0) {
				break;
			}
		}
		if (i == Min) {
			printf("%d ", Min);
		}
	}
	return 0;
}





#include <stdio.h>
int SuShu(int i)
{
	for (int j = 2; j < i; j++) {
		if (i % j == 0) {
			return 0;
		}
	}
	return 1;
}
int main()
{
	printf("2 ");
	for (int i = 3; i <= 100; i += 2) {
		if (SuShu(i)) {
			printf("%d ", i);
		}
	}
	return 1;
}