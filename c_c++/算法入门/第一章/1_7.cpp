#include<cstdio>
int main(){//三位数反转（2） 
	int n,m;
	int i,j,k;
	scanf("%d",&n);//输入三位数
	i = n%10;
	//printf("%d\n",i);
	j = ((n/10)%10);
	k = n/100;
	m = i*100 + j*10 + k;
	printf("%03d\n",m);//输出025 
	return 0; 	
}
