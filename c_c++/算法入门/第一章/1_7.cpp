#include<cstdio>
int main(){//��λ����ת��2�� 
	int n,m;
	int i,j,k;
	scanf("%d",&n);//������λ��
	i = n%10;
	//printf("%d\n",i);
	j = ((n/10)%10);
	k = n/100;
	m = i*100 + j*10 + k;
	printf("%03d\n",m);//���025 
	return 0; 	
}
