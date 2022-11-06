	printf("\nf(x)=");
	
	for(a=c; a>=0; a--){
		if(a==c){
			printf("%.2lfx^%d", cef[a], a); //차수 지정 ex) 4차식, i=4,n=4 / x^4+x^3+.... 
		}
		else{
			if(a!=0){
				if(cef[a]>0){
					printf("+%.2lfx^%d", cef[a], a);
				}
				else if(cef[a]<0){
					printf("%.2lfx^%d", cef[a], a);
				}
				
			}
			else{
				if(cef[a]>0){
					printf("+%.2lf", cef[a]);
				}
				else if(cef[a]<0){
					printf("%.2lf", cef[a]);
				}
			}
		}
	} //f(x) 구현 
