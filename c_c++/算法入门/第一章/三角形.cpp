#include<cstdio>
int main(){
	//判断是否为直角三角形的3个边长 
	int a,b,c;
	scanf("%d%d%d",&a,&b,&c);
	if(a+b>c&&a+c>b&&b+c>a){
		printf("是三角形\n");
		if(a*a==b*b+c*c||b*b==a*a+c*c||c*c==a*a+b*b){
			printf("yes\n");
			printf("直角三角形\n");
		}
	}
	else printf("not a triangle");
	return 0; 
}
