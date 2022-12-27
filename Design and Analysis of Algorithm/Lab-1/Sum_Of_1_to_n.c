#include <stdio.h>
#include <time.h>

void main(){
	clock_t start,end;
	double cpu_time_used;
	
	int n,i;
	int result=0;
	printf("Enter your number:");
	scanf("%d",&n);
	start=clock();
	
	for(i=1;i<=n;i++){
		result=result+i;
	}
	printf("\n ans : %d\n",result);
	end=clock();
	cpu_time_used=((double)(end-start))/CLOCKS_PER_SEC;
	printf("\n time %lf",cpu_time_used);
}
