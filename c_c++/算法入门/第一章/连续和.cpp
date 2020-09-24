#include<cstdio>
int main(){
	//输入正整数n,输出1+2+...+n的值。 
	int n,sum;
	scanf("%d",&n);
	sum = (1+n)*n/2;
	printf("%d\n",sum);
	return 0;
}
