#include<cstdio>
int main(){
	//三整数排序(1) 错误 
	int a,b,c;
	scanf("%d%d%d",&a,&b,&c);
	if(a<b && b<c) printf("%d %d %d\n",a,b,c);
	if(a<c && c<b) printf("%d %d %d\n",a,c,b);
	if(b<a && a<c) printf("%d %d %d\n",b,a,c);
	if(b<c && c<b) printf("%d %d %d\n",b,c,a);
	if(c<a && a<b) printf("%d %d %d\n",c,a,b);
	if(c<a && b<a) printf("%d %d %d\n",c,b,a);
	printf("三整数排序（错误）\n");
	return 0;
} 
