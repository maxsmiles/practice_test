#include<cstdio>
int main(){
	//�ж��Ƿ�Ϊֱ�������ε�3���߳� 
	int a,b,c;
	scanf("%d%d%d",&a,&b,&c);
	if(a+b>c&&a+c>b&&b+c>a){
		printf("��������\n");
		if(a*a==b*b+c*c||b*b==a*a+c*c||c*c==a*a+b*b){
			printf("yes\n");
			printf("ֱ��������\n");
		}
	}
	else printf("not a triangle");
	return 0; 
}
