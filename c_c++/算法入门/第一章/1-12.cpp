#include<cstdio>
int main(){
	//����������(1) ���� 
	int a,b,c;
	scanf("%d%d%d",&a,&b,&c);
	if(a<b && b<c) printf("%d %d %d\n",a,b,c);
	if(a<c && c<b) printf("%d %d %d\n",a,c,b);
	if(b<a && a<c) printf("%d %d %d\n",b,a,c);
	if(b<c && c<b) printf("%d %d %d\n",b,c,a);
	if(c<a && a<b) printf("%d %d %d\n",c,a,b);
	if(c<a && b<a) printf("%d %d %d\n",c,b,a);
	printf("���������򣨴���\n");
	return 0;
} 
