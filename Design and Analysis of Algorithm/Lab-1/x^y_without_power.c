#include <stdio.h>
#include <time.h>

void main(){
	clock_t start,end;
	double cpu_time_used;
	int i,base,power,result=1;
	printf("Enter your base number:");
	scanf("%d",&base);
	printf("Enter your power number:");
	scanf("%d",&power);
	start=clock();
	
	for(i=1;i<=power;i++){
		result=result*base;
	}
	printf("%d",result);
	end=clock();
	cpu_time_used=((double)(end-start))/CLOCKS_PER_SEC;
	printf("\n time %lf",cpu_time_used);
}
