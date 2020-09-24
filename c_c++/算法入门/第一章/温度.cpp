#include<cstdio>
int main(){
	//输入华氏温度f,输出对应的摄氏温度c,保留三位小数。
	double f,c;
	scanf("%lf",&f);
	c = 5*(f-32)/9;
	printf("%.3f\n",c);
	return 0; 
} 
