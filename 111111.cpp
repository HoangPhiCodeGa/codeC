#include<stdio.h>
int main(){
	float a;
	do{
		scanf("%f",&a);	
	}while (a<0||a>1000);
	float y=a/2;
	printf("%.1f",y);
	return 0;
}
