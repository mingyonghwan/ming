	printf("\nx좌표를 입력해주세요. \n");
	scanf("%lf", &x); //x좌표 대입 
	
	for(a=0; a<c+1; a++){
		xx[a]=1;
		for(b=0;b<a;b++){
			xx[a]*=x; // f(x)와 f'(x)에 X값을 집어 넣기 위한 반복문 
		}
	}
	
	for(a=0; a<c+1; a++){
		y=y+(cef[a])*xx[a];
	}
	printf("\n함숫값은 %.2lf입니다.", y);
	
	for(a=0; a<c; a++){
		dv=dv+cef1[a]*xx[a];
	}
	printf("\n미분계수는 %.2lf 입니다.", dv);
	return 0;
}
