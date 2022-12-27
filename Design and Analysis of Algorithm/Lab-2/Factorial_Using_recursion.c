#include <stdio.h>
#include <time.h>

void main(){
	int n,result;	
	clock_t start,end;
	double cpu_time_used;
	printf("Enter your number:");
	scanf("%d",&n);
	
	start=clock();
	
	result=	fact(n);
	printf("Answer:%d",result);
	
	end=clock();
	cpu_time_used=((double)(end-start))/CLOCKS_PER_SEC;
	printf("\n time %lf",cpu_time_used);
}
fact(n){
	if(n==1){
		return 1;
	}
	else{
		return n * fact(n-1);
	}
}
