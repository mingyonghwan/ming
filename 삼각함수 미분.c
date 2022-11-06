#include <stdio.h>
#include <math.h>
//극한의 개념을 써먹어야 함 
int main(void)
{
	int a;
	double h=10, u1, u2, x, y, dv, index=1; // h를 10으로 두기, index : 지정 
	
	printf("sin x의 미분계수를 구해봅시다.\n");
	printf("x값을 설정해주세요.\n");
	printf("x=");
	scanf("%lf", &x);
	
	y=sin(x);
	u1=(sin(x+10)-y)/100; // 100으로 나눠 일정 비율 맞추기 
	u2=u1;
	
	printf("sin x=%.2lf이군요.\n", y);
	
	while(index>0.01){ //index 제한 
		u1=u2;
		u2=(sin(x+h)-y)/h;
		h/=100; // h를 100으로 계속 나눠 평균 변화율 계산 
		index=fabs(u1-u2);
	}
	
	printf("%lf\n", index);
	printf("미분계수는 %.2lf입니다.", u2);
	
	}
