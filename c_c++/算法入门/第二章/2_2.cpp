#include<cstdio>
#include<cmath>
int main(){//7744���⣨1�� 
	for(int a = 1;a<=9;a++)
		for(int b=0;b<=9;b++){
			int n = a*1100+b*11;//����ſ�ʼʹ��n����������ﶨ��n
			int m = floor(sqrt(n)+0.5);//floor(x+0.5)����1������Ϊ[0.5,1.5) 
			if(m*m==n) printf("%d\n",n); 
		}
	return 0;
} 
