#include<cstdio>
int main(){//变量交换（1） 
	int a,b,tem;//三变量法适用范围广，推荐使用 
	scanf("%d%d",&a,&b);
	tem = a;
	a = b;
	b = tem;
	printf("%d %d\n",a,b);
	return 0;
}
