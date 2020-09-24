#include<cstdio>
#include<cmath>
#define PI 3.14159265
int main(){
	int n;
	scanf("%d",&n); 
	//sin()，cos()的参数是弧度 
	if(n<360){
		printf("sin%d = %f\n",n,sin(n*PI/180));
		printf("cos%d = %f\n",n,cos(n*PI/180));
	}
	return 0;
} 
