#include<cstdio>
int main(){
	//三整数排序（3） 
	int a,b,c,t;
	scanf("%d%d%d",&a,&b,&c);
	if(a>b){
		t = a;
		a = b;
		b = t;//执行完毕之后a<=b 
	}
	if(a>c){
		t = a;
		a = c;
		c = t;//执行完毕之后a<=c,且a<=b依然成立 
	}
	if(b>c){
		t = b;
		b = c;
		c = t;
	} 
	printf("%d %d %d\n",a,b,c);
	return 0;
}
