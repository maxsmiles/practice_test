#include<cstdio>
int main(){
	//һ���·�95Ԫ����������300���ɴ�����ۡ�
	int n;
	scanf("%d",&n);
	if(n>3) printf("%.2f\n",95*n*0.85);
	else printf("%.2f\n",n*95.00); 
	return 0; 
} 
