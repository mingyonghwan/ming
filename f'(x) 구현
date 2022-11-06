for(a=c-1; a>=0; a--){
		cef1[a] = (a+1)*cef[a+1]; //f'(x) 기본 세팅 
	}
	
	printf("\nf'(x)=");
	
	for(a=c-1; a>=0; a--){
		if(a==c-1){
			printf("%.2lfx^%d", cef1[a], a);
		}
		else{
			if(a!=0){
				if(cef1[a]>0){
					printf("+%.2fx^%d", cef1[a], a);
				}
				else if(cef1[a]<0){
					printf("%.2lfx^%d", cef1[a], a);
				}	
			}
			else{
				if(cef1[a]>0){
					printf("+%.2lf", cef1[a]);
				}
				else if(cef1[a]<0){
					printf("%.2lf", cef1[a]);
				}
			}
		}
	}//f'(x) 구현
