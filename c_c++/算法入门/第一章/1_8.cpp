#include<cstdio>
int main(){//����������1�� 
	int a,b,tem;//�����������÷�Χ�㣬�Ƽ�ʹ�� 
	scanf("%d%d",&a,&b);
	tem = a;
	a = b;
	b = tem;
	printf("%d %d\n",a,b);
	return 0;
}
