#include<cstdio>
int main(){
	//����������3�� 
	int a,b,c,t;
	scanf("%d%d%d",&a,&b,&c);
	if(a>b){
		t = a;
		a = b;
		b = t;//ִ�����֮��a<=b 
	}
	if(a>c){
		t = a;
		a = c;
		c = t;//ִ�����֮��a<=c,��a<=b��Ȼ���� 
	}
	if(b>c){
		t = b;
		b = c;
		c = t;
	} 
	printf("%d %d %d\n",a,b,c);
	return 0;
}
