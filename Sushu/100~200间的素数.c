#include <stdio.h>
//�����ǳ���1��������֮�⣬�޷���������Ȼ����������
#pragma warning (disable:4996)
int main()
{
	for (int i = 100; i <= 200;i++) {
		int j = 2;  //j��д��forѭ���ڣ�j���������ڱ���������ڵڶ���forѭ��
		for (; j <= i; j++) {     //�����ڶ���forѭ��j��ᱻ�ͷ�
			if (i % j == 0) {
				break;
			}
		}
		if (i == j) {            //�������Ϊi%j��=0����ôbreak������������iȡ��
			printf("%d ", i);    //һ��ȡ��������=0����ʱ������ӡi
		}
	}
	return 0;
}




#include <stdio.h>
int main()
{
	int Min = 0, Max = 0;
	printf("�������������֣��Կո���:");
	scanf("%d %d", &Min, &Max);
	printf("%d~%d֮�������Ϊ��", Min, Max);
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