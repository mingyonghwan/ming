#include <stdio.h>
#include <math.h>
int main() {
	int a, b, c; // n : ���� 
	double x, y=0, dv=0;
	
	printf("�� �� ���׽��Դϱ�?\n");
	scanf("%d", &c);
	
	double cef[c+1]; // cef : f(x) 
	double cef1[c]; //cef1 : f'(x) 
	double xx[c+1];
	
	printf("�ְ������� ������� ����ױ��� ���� �־� �Է����ּ���.\n");
	
	for(a=c; a>=0; a--){
		scanf("%lf", &cef[a]); //f(x) �⺻���� 
	}
