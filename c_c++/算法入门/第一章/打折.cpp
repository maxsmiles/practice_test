#include<cstdio>
int main(){
	//一件衣服95元，若消费满300，可打八五折。
	int n;
	scanf("%d",&n);
	if(n>3) printf("%.2f\n",95*n*0.85);
	else printf("%.2f\n",n*95.00); 
	return 0; 
} 
