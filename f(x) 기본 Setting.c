#include <stdio.h>
#include <math.h>
int main() {
	int a, b, c; // n : 차수 
	double x, y=0, dv=0;
	
	printf("몇 차 다항식입니까?\n");
	scanf("%d", &c);
	
	double cef[c+1]; // cef : f(x) 
	double cef1[c]; //cef1 : f'(x) 
	double xx[c+1];
	
	printf("최고차항의 계수부터 상수항까지 공백 넣어 입력해주세요.\n");
	
	for(a=c; a>=0; a--){
		scanf("%lf", &cef[a]); //f(x) 기본세팅 
	}
