#include<cstdio>
#include<cmath>
int main(){//7744问题（1） 
	for(int a = 1;a<=9;a++)
		for(int b=0;b<=9;b++){
			int n = a*1100+b*11;//这里才开始使用n，因此在这里定义n
			int m = floor(sqrt(n)+0.5);//floor(x+0.5)等于1的区间为[0.5,1.5) 
			if(m*m==n) printf("%d\n",n); 
		}
	return 0;
} 
