#include<cstdio>

int main(){
	//������ݣ��ж��Ƿ�Ϊ���ꡣ
    int year,a;
    printf("��������ݣ�\n");
    scanf("%d",&year);
    if(year%400==0)
        a=1;
    else
    {
        if(year%4==0&&year%100!=0)
            a=1;
        else
            a=0;
    }
    if(a==1)
    {
        printf("%d ����������\n",year);
    }
    else
    {
        printf("%d ���������\n",year);
    }
    return 0;
}
