#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int main(){//圆柱体的表面积 
	const double pi = acos(-1.0);
	double r,h,s1,s2,s;
	scanf("%lf %lf",&r, &h);
	s1 = pi * r*r;
	s2 = 2*pi*r*h;
	s = s1*2.0 + s2;
	printf("Area = %.3f\n",s);
	return 0;
	//system("pause");//不要用这句话，在算法竞赛中 
}
